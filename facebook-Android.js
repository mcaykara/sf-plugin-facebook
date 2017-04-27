const TypeUtil                          = require('sf-core/util/type');
const Page                              = require('sf-core/ui/Page');
const NativeFacebookSdk                 = requireClass('com.facebook.FacebookSdk');
const NativeLoginManager                = requireClass('com.facebook.login.LoginManager');
const NativeArrays                      = requireClass('java.util.Arrays');
const NativeCallbackManager             = requireClass('com.facebook.CallbackManager');
const NativeFacebokCallback             = requireClass('com.facebook.FacebookCallback');
const NativeActivityLifeCycleListener   = requireClass("io.smartface.android.listeners.ActivityLifeCycleListener");
const NativeAccessToken                 = requireClass('com.facebook.AccessToken');
const NativeHttpMethod                  = requireClass('com.facebook.HttpMethod');

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
            if(!TypeUtil.isArray(params.permissions)){
                throw new TypeError("Parameter type mismatch. params.permissions must be string array");
            }
            
            var permissionSet = NativeArrays.asList(params.permissions);
            loginManager.logInWithReadPermissions(spratAndroidActivityInstance, permissionSet);
            loginManager.registerCallback(callbackManager, NativeFacebokCallback.implement({
                'onSuccess': function(loginResult){
                    params.onSuccess && params.onSuccess({
                        deniedPermissions: loginResult.getRecentlyDeniedPermissions().toArray(),
                        grantedPermissions: loginResult.getRecentlyGrantedPermissions().toArray(),
                        accessToken: new Facebook.AccessToken({
                            nativeObject: loginResult.accessToken,
                            isInternal: true
                        })
                    });
                },
                'onCancel': function(){
                    params.onCancel && params.onCancel();
                },
                'onError': function( error) {
                    params.onFailure && params.onFailure(new Error(error.getMessage()));
                }
            }));
            
        },
        enumarable: true
    },
    'graphRequest': {
        value: function(params){
            //  * @param {Object} params
            //  * @param {String} params.graphPath
            //  * @param {Facebook.HttpMethod} params.httpMethod
            //  * @param {Function} params.onSuccess
            //  * @param {Object} params.onSuccess.data
            //  * @param {Function} params.onFailure
            //  * @param {Object} params.onFailure.error
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