/**
 * @class Data.Database
 * @since 1.0
 * @see https://developers.facebook.com/
 * @see https://developer.smartface.io/v1.1/docs/facebook-plugin
 *
 * Facebook SDK for iOS and Android allows developers to use some Facebook features with your app such as “share” or “send a message” 
 * from your app to Facebook. It lets people easily sign in to your app with their Facebook accounts. If they have already signed in
 * with Facebook for iOS and Android app, they don’t have to re-enter their username and password. We’ve already integrated iOS and 
 * Android Facebook SDK into Smartface . You only need to create an application on Facebook developer site and need to know JavaScript 
 * functions of the Smartface Facebook plugin.
 * 
 * 
 *     @example
 *     
 *
 */
function Facebook(params){}

/**
 * @todo add description
 * 
 * @property {String} applicationId
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.applicationId;

/**
 * @todo add description
 * 
 * @property {String} applicationName
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.applicationName;

/**
 * @todo add description
 * 
 * @property {String} graphApiVersion
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.graphApiVersion;

/**
 * @todo add description
 * 
 * @property {String} clientToken
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.clientToken;

/**
 * @todo add description
 * 
 * @property {String} sdkVersion
 * @readonly
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.sdkVersion;

/**
 * @todo add description
 * 
 *     @example
 *     @todo add example
 *
 * @method login
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String[]} params.readPermissions
 * @param {String[]} params.publishPermissions
 * @param {Function} params.onSuccess
 * @param {Object} params.onSuccess.data
 * @param {String[]} params.onSuccess.data.deniedPermissions
 * @param {String[]} params.onSuccess.data.grantedPermissions
 * @param {Facebook.AccessToken} params.onSuccess.data.accessToken
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.login = function(params){};

/**
 * @todo add description
 * 
 *     @example
 *     @todo add example
 *
 * @method graphRequest
 * @param {Object} params
 * @param {String} params.graphPath
 * @param {Object} params.params
 * @param {Facebook.HttpMethod} params.httpMethod
 * @param {Function} params.onSuccess
 * @param {Object} params.onSuccess.data
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.graphRequest = function(params){};

/**
 * @class Facebook.AccessToken
 * @since 1.0
 *
 * @todo add description
 * 
 *     @example
 *     @todo add example
 * 
 */
Facebook.AccessToken = function(){

    /**
     * @todo add description
     * 
     * @property {String} token
     * @readonly
     * @android
     * @ios
     * @since 1.0
     */
    this.token;
    
    /**
     * @todo add description
     * 
     * @property {String} userId
     * @readonly
     * @android
     * @ios
     * @since 1.0
     */
    this.userId;
    
    /**
     * @todo add description
     * 
     * @property {Date} expireDate
     * @readonly
     * @android
     * @ios
     * @since 1.0
     */
    this.expireDate;
};

/**
 * @todo add description
 * 
 *     @example
 *     @todo add example
 *
 * @method getCurrentToken
 * @return {Facebook.AccessToken}
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.AccessToken.getCurrentToken = function(){};

/** 
 * @enum Facebook.HttpMethod 
 * @since 1.0
 * 
 * @todo add description
 * 
 */
Facebook.HttpMethod = {};

/**
 * @todo add description
 *
 * @property GET
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.HttpMethod.GET;

/**
 * @todo add description
 *
 * @property POST
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.HttpMethod.POST;

/**
 * @todo add description
 *
 * @property DELETE
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.HttpMethod.DELETE;

module.exports = Facebook;