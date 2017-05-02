const Page = require('sf-core/ui/page');
const TypeUtil = require('sf-core/util/type');

var loginManager = new FBSDKLoginManager();

function Facebook(params) {}

Object.defineProperties(Facebook, {
    'applicationId': {
        get: function() {
            return FBSDKSettings.appID();
        },
        set: function(value) {
            FBSDKSettings.setAppID(value);
        },
        enumarable: true
    },
    'applicationName': {
        get: function() {
            return FBSDKSettings.displayName();
        },
        set: function(value) {
            FBSDKSettings.setDisplayName(value);
        },
        enumarable: true
    },
    'graphApiVersion': {
        get: function() {
            return FBSDKSettings.graphAPIVersion();
        },
        set: function(value) {
            FBSDKSettings.setGraphAPIVersion(value);
        },
        enumarable: true
    },
    'clientToken': {
        get: function() {
            return FBSDKSettings.clientToken();
        },
        enumarable: true
    },
    'sdkVersion': {
        get: function() {
            return FBSDKSettings.sdkVersion();
        },
        enumarable: true
    },
    'logInWithReadPermissions': {
        value: function(params) {
            if (!params.page instanceof Page) {
                throw new TypeError("Parameter type mismatch. params.page must be Page instance");
            }
            if (!TypeUtil.isArray(params.permissions)) {
                throw new TypeError("Parameter type mismatch. params.permissions must be string array");
            }
            var page = params.page;
            var permissions = params.permissions;

            loginManager.logInWithReadPermissionsViewControllerHandler(permissions, page.nativeObject, function(e) {
                if (e.error) {
                    if (typeof params.onFailure === "function") {
                        params.onFailure(new Error(e.error.localizedDescription));
                    }
                } else if (e.result.isCancelled) {
                    if (typeof params.onCancel === "function") {
                        params.onCancel();
                    }
                } else {
                    if (typeof params.onSuccess === "function") {
                        var deniedPermissions = e.result.declinedPermissionsArray;
                        var grantedPermissions = e.result.grantedPermissionsArray;
                        var accessToken = new Facebook.AccessToken({
                            nativeObject: e.result.token
                        });
                        params.onSuccess({
                            deniedPermissions: deniedPermissions,
                            grantedPermissions: grantedPermissions,
                            accessToken: accessToken
                        });
                    }
                }
            });
        },
        enumarable: true
    },
    'logInWithPublishPermissions': {
        value: function(params) {
            if (!params.page instanceof Page) {
                throw new TypeError("Parameter type mismatch. params.page must be Page instance");
            }
            if (!TypeUtil.isArray(params.permissions)) {
                throw new TypeError("Parameter type mismatch. params.permissions must be string array");
            }
            var page = params.page;
            var permissions = params.permissions;

            loginManager.logInWithPublishPermissionsViewControllerHandler(permissions, page.nativeObject, function(e) {
                if (e.error) {
                    if (typeof params.onFailure === "function") {
                        params.onFailure(new Error(e.error.localizedDescription));
                    }
                } else if (e.result.isCancelled) {
                    if (typeof params.onCancel === "function") {
                        params.onCancel();
                    }
                } else {
                    if (typeof params.onSuccess === "function") {
                        var deniedPermissions = e.result.declinedPermissionsArray;
                        var grantedPermissions = e.result.grantedPermissionsArray;
                        var accessToken = new Facebook.AccessToken({
                            nativeObject: e.result.token
                        });
                        params.onSuccess({
                            deniedPermissions: deniedPermissions,
                            grantedPermissions: grantedPermissions,
                            accessToken: accessToken
                        });
                    }
                }
            });
        },
        enumarable: true
    },
    'graphRequest': {
        value: function(params) {
            var path = params.graphPath;
            var parameters = params.parameters;
            var httpMethod = params.httpMethod;

            FBSDKGraphRequest.requestWithGraphPathParametersHTTPMethodHandler(path, parameters, httpMethod, function(e) {
                if (e.error) {
                    if (typeof params.onFailure === "function") {
                        params.onFailure(new Error(e.error.localizedDescription));
                    }
                } else {
                    if (typeof params.onSuccess === "function") {
                        params.onSuccess(e.result);
                    }
                }
            });
        },
        enumarable: true
    },
    'HttpMethod': {
        value: {},
        enumarable: true
    }
});

Facebook.AccessToken = function(params) {

    this.nativeObject = params.nativeObject;

    Object.defineProperties(this, {
        'token': {
            get: function() {
                return this.nativeObject.tokenString;
            },
            enumarable: true
        },
        'userId': {
            get: function() {
                return this.nativeObject.userID;
            },
            enumarable: true
        },
        'expireDate': {
            get: function() {
                return this.nativeObject.expirationDate;
            },
            enumarable: true
        },
        'permissions': {
            get: function() {
                return this.nativeObject.permissionsArray;
            },
            enumarable: true
        },
        'declinedPermissions': {
            get: function() {
                return this.nativeObject.declinedPermissionsArray;
            },
            enumarable: true
        }
    });
};

Object.defineProperties(Facebook.AccessToken, {
    'getCurrentToken': {
        value: function() {
            if (FBSDKAccessToken.currentAccessToken()) {
                return new Facebook.AccessToken({
                    nativeObject: FBSDKAccessToken.currentAccessToken()
                });
            } else {
                return null
            }
        },
        enumarable: true
    }
})

Object.defineProperties(Facebook.HttpMethod, {
    'GET': {
        value: "GET",
        enumarable: true
    },
    'POST': {
        value: "POST",
        enumarable: true
    },
    'DELETE': {
        value: "DELETE",
        enumarable: true
    }
})

module && (module.exports = Facebook);