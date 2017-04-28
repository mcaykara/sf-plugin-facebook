const TypeUtil                          = require('sf-core/util/type');
const Page                              = require('sf-core/ui/page');
const NativeFacebookSdk                 = requireClass('com.facebook.FacebookSdk');
const NativeLoginManager                = requireClass('com.facebook.login.LoginManager');
const NativeArrayList                   = requireClass('java.util.ArrayList');
const NativeCallbackManager             = requireClass('com.facebook.CallbackManager');
const NativeFacebokCallback             = requireClass('com.facebook.FacebookCallback');
const NativeActivityLifeCycleListener   = requireClass('io.smartface.android.listeners.ActivityLifeCycleListener');
const NativeAccessToken                 = requireClass('com.facebook.AccessToken');
const NativeHttpMethod                  = requireClass('com.facebook.HttpMethod');
const NativeGraphRequest                = requireClass('com.facebook.GraphRequest');

var activity = Android.getActivity();
var spratAndroidActivityInstance = requireClass("io.smartface.android.SpratAndroidActivity").getInstance();
NativeFacebookSdk.sdkInitialize(activity);
const loginManager = NativeLoginManager.getInstance();
const callbackManager = NativeCallbackManager.Factory.create();
// Creating Activity Lifecycle listener
var activityLifeCycleListener = NativeActivityLifeCycleListener.implement({
    onActivityResult: function(requestCode, resultCode, data){
        callbackManager.onActivityResult(requestCode, resultCode, data);
    }
});
// Attaching Activity Lifecycle event
spratAndroidActivityInstance.addActivityLifeCycleCallbacks(activityLifeCycleListener);

function Facebook(params){}

Object.defineProperties(Facebook, {
    'applicationId': {
        get: function(){
            return NativeFacebookSdk.getApplicationId();
        },
        set: function(value){
            if(!TypeUtil.isString(value)){
                throw new TypeError("Parameter type missmatch. applicationId must be string");
            }
            NativeFacebookSdk.setApplicationId(value);
        },
        enumarable: true
    },
    'applicationName': {
        get: function(){
            return NativeFacebookSdk.getApplicationName();
        },
        set: function(value){
            if(!TypeUtil.isString(value)){
                throw new TypeError("Parameter type mismatch. applicationName must be string");
            }
            NativeFacebookSdk.setApplicationName(value);
        },
        enumarable: true
    },
    'graphApiVersion': {
        get: function(){
            return NativeFacebookSdk.getGraphApiVersion();
        },
        set: function(value){
            if(!TypeUtil.isString(value)){
                throw new TypeError("Parameter type mismatch. graphApiVersion must be string");
            }
            NativeFacebookSdk.setGraphApiVersion(value);
        },
        enumarable: true
    },
    'clientToken': {
        get: function(){
            return NativeFacebookSdk.getClientToken();
        },
        enumarable: true
    },
    'sdkVersion': {
        get: function(){
            return NativeFacebookSdk.getSdkVersion();
        },
        enumarable: true
    },
    'login' : {
        value: function(params){
            if(!params.page instanceof Page){
                throw new TypeError("Parameter type mismatch. params.page must be Page instance");
            }
            if(!TypeUtil.isArray(params.readPermissions) || (typeof(params.readPermissions) === 'undefined') ||  (typeof(params.readPermissions) === 'null')){
                throw new TypeError("Parameter type mismatch. params.permissions must be string or null array");
            }
            if(!TypeUtil.isArray(params.publishPermissions) || (typeof(params.publishPermissions) === 'undefined') ||  (typeof(params.publishPermissions) === 'null')){
                throw new TypeError("Parameter type mismatch. params.permissions must be string or null array");
            }
            // Arrays.asList causes crash.
            var readPermissionSet = new NativeArrayList();
            for(var index in params.readPermissions){
                readPermissionSet.add(params.readPermissions[index])
            }
            // Arrays.asList causes crash.
            var publishPermissionSet = new NativeArrayList();
            for(var index in params.publishPermissions){
                publishPermissionSet.add(params.publishPermissions[index])
            }
            loginManager.logInWithReadPermissions(spratAndroidActivityInstance, readPermissionSet);
            loginManager.logInWithPublishPermissions(spratAndroidActivityInstance, publishPermissionSet);
            loginManager.registerCallback(callbackManager, NativeFacebokCallback.implement({
                'onSuccess': function(loginResult){
                    var grantedPermissions = [];
                    var deniedPermissions = [];
                    var iterator = loginResult.getRecentlyGrantedPermissions().iterator();
                    
                    while(iterator.hasNext()){
                        grantedPermissions.push(iterator.next());
                    }
                    
                    iterator = loginResult.getRecentlyDeniedPermissions().iterator();
                    while(iterator.hasNext()){
                        deniedPermissions.push(iterator.next());
                    }
                    
                    params.onSuccess && params.onSuccess({
                        deniedPermissions: deniedPermissions,
                        grantedPermissions: grantedPermissions,
                        accessToken: new Facebook.AccessToken({
                            nativeObject: loginResult.getAccessToken(),
                            isInternal: true
                        })
                    });
                },
                'onCancel': function(){
                    params.onCancel && params.onCancel();
                },
                'onError': function(error) {
                    params.onFailure && params.onFailure(new Error(error.getMessage()));
                }
            }));
            
        },
        enumarable: true
    },
    'graphRequest': {
        value: function(params){
            const NativeBundle = requireClass('android.os.Bundle');
            var accessToken = Facebook.AccessToken.getCurrentToken();
            var paramsBundle = null;
            if(params.parameters){
                paramsBundle = new NativeBundle();
                Object.keys(params.parameters).forEach(function (key) {
                    paramsBundle.putString(key, params.parameters[key] + '');
                });
            }
            if(accessToken){
                var graphRequest = new NativeGraphRequest(accessToken.nativeObject, params.graphPath, paramsBundle, params.httpMethod, NativeGraphRequest.Callback.implement({
                    'onCompleted': function(response){
                        if(response.getError()){
                            params.onFailure && params.onFailure(new Error(response.getError().getErrorMessage()));
                        }
                        else{
                            // var jsonObject = response.getJSONObject();
                            // const NativeString = requireClass('java.lang.String');
                            // var str = NativeString.valueOf(jsonObject);
                            var response = response.getRawResponse();
                            params.onSuccess && params.onSuccess(JSON.parse(response));
                        }
                    }
                }));
                graphRequest.executeAsync();
            }
            else{
                params.onFailure && params.onFailure(new Error("Not logged in."));
            }
        },
        enumarable: true
    },
    'HttpMethod': {
        value: {},
        enumarable: true
    }
});

Facebook.AccessToken = function(params){
    if(!params.isInternal){
        throw new Error("Facebook.AccessToken in not creatable, Facebook.AccessToken will created with only Facebook.login() or Facebook.AccessToken.getCurrentAccessToken()");
    }
    this.nativeObject = params.nativeObject;
    
    Object.defineProperties(this,{
        'token': {
            get: function(){
                return this.nativeObject.getToken();
            },
            enumarable: true
        },
        'userId': {
            get: function(){
                return this.nativeObject.getUserId();
            },
            enumarable: true
        },
        'expireDate': {
            get: function(){
                return new Date(this.nativeObject.getExpires().getTime());
            },
            enumarable: true
        }
    });
};

Object.defineProperties(Facebook.AccessToken, {
    'getCurrentToken': {
        value: function(){
            var token = NativeAccessToken.getCurrentAccessToken();
            if(!token){
                return null;
            }
            else{
                return new Facebook.AccessToken({
                    nativeObject: token,
                    isInternal: true
                });
            }
        },
        enumarable: true
    }
})

Object.defineProperties(Facebook.HttpMethod, {
    'GET': {
        value: NativeHttpMethod.GET,
        enumarable: true
    },
    'POST': {
        value: NativeHttpMethod.POST,
        enumarable: true
    },
    'DELETE': {
        value: NativeHttpMethod.DELETE,
        enumarable: true
    }
})


module.exports = Facebook;