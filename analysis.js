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
 * @method logInWithPublishPermissions
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String[]} params.permissions
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
Facebook.logInWithPublishPermissions = function(params){};

/**
 * @todo add description
 * 
 *     @example
 *     @todo add example
 *
 * @method logInWithReadPermissions
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String[]} params.permissions
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
Facebook.logInWithReadPermissions = function(params){};

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
 * Share link content with share dialog.
 * 
 *     @example
 *     @todo add example
 *
 * @method shareLinkContent
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String} params.contentUrl
 * @param {String[]} params.peopleIds
 * @param {String} params.placeId
 * @param {String} params.quote
 * @param {String} params.ref
 * @param {Facebook.ShareHastag} params.shareHashtag
 * @param {Facebook.ShareMode} params.shareMode
 * @param {Function} params.onSuccess
 * @param {String} params.onSuccess.postId
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.shareLinkContent = function(params){};

/**
 * Share media content with share dialog.
 * 
 *     @example
 *     @todo add example
 *
 * @method shareMediaContent
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String} params.contentUrl
 * @param {String[]} params.peopleIds
 * @param {String} params.placeId
 * @param {String} params.ref
 * @param {Facebook.ShareHastag} params.shareHashtag
 * @param {Facebook.SharePhoto[]|Facebook.ShareVideo[]} params.shareMedia
 * @param {Facebook.ShareMode} params.shareMode
 * @param {Function} params.onSuccess
 * @param {String} params.onSuccess.postId
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.shareMediaContent = function(params){};

/**
 * Share photo content with share dialog.
 * 
 *     @example
 *     @todo add example
 *
 * @method sharePhotoContent
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {Facebook.SharePhoto[]|Facebook.SharePhoto} params.sharePhotos
 * @param {String} params.contentUrl
 * @param {String[]} params.peopleIds
 * @param {String} params.placeId
 * @param {String} params.ref
 * @param {Facebook.ShareHastag} params.shareHashtag
 * @param {Facebook.ShareMode} params.shareMode
 * @param {Function} params.onSuccess
 * @param {String} params.onSuccess.postId
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.sharePhotoContent = function(params){};

/**
 * Share video content with share dialog.
 * 
 *     @example
 *     @todo add example
 *
 * @method shareVideoContent
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String} params.contentDescription
 * @param {String} params.contentTitle
 * @param {String} params.contentUrl
 * @param {String[]} params.peopleIds
 * @param {String} params.placeId
 * @param {Facebook.SharePhoto} params.previewPhoto
 * @param {String} params.ref
 * @param {Facebook.ShareHastag} params.shareHashtag
 * @param {Facebook.ShareMode} params.shareMode
 * @param {Facebook.ShareVideo} params.shareVideo
 * @param {Function} params.onSuccess
 * @param {String} params.onSuccess.postId
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.shareVideoContent = function(params){};

/**
 * Share feed content with share dialog.
 * 
 *     @example
 *     @todo add example
 *
 * @method shareFeedContent
 * @param {Object} params
 * @param {UI.Page} params.page
 * @param {String} params.contentUrl
 * @param {String} params.link
 * @param {String} params.linkName
 * @param {String} params.linkCaption
 * @param {String} params.linkDescription
 * @param {String} params.peopleIds
 * @param {String} params.pictureUrl
 * @param {String} params.pictureId
 * @param {String} params.ref
 * @param {Facebook.ShareHastag} params.shareHashtag
 * @param {Facebook.ShareMode} params.shareMode
 * @param {Function} params.onSuccess
 * @param {String} params.onSuccess.postId
 * @param {Function} params.onFailure
 * @param {Object} params.onFailure.error
 * @param {Function} params.onCancel
 * @android
 * @ios
 * @static
 * @since 1.0
 */
Facebook.shareFeedContent = function(params){};

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
    
    /**
     * @todo add description
     * 
     * @property {String[]} declinedPermissions
     * @readonly
     * @android
     * @ios
     * @since 1.0
     */
    this.declinedPermissions;
    
    /**
     * @todo add description
     * 
     * @property {String[]} permissions
     * @readonly
     * @android
     * @ios
     * @since 1.0
     */
    this.permissions;
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
 * @class Facebook.SharePhoto
 * @since 1.0
 *
 * @todo add description
 * 
 *     @example
 *     @todo add example
 * 
 */
Facebook.SharePhoto = function(){
    
    /**
     * @todo add description. Required on constructor.
     * 
     * @property {UI.Image} image
     * @android
     * @ios
     * @since 1.0
     */
    this.image;
    
    /**
     * @todo add description
     * 
     * @property {String} imageUrl
     * @android
     * @ios
     * @since 1.0
     */
    this.imageUrl;
    
    /**
     * @todo add description
     * 
     * @property {String} caption
     * @android
     * @ios
     * @since 1.0
     */
    this.caption;
    
    /**
     * @todo add description
     * 
     * @property {Boolean} userGenerated
     * @android
     * @ios
     * @since 1.0
     */
    this.userGenerated;
};

/**
 * @class Facebook.ShareVideo
 * @since 1.0
 *
 * @todo add description
 * 
 *     @example
 *     @todo add example
 * 
 */
Facebook.ShareVideo = function(){
    /**
     * @todo add description
     * 
     * @property {String} localUrl
     * @android
     * @ios
     * @since 1.0
     */
    this.localUrl;
};

/**
 * @class Facebook.ShareHashtag
 * @since 1.0
 *
 * @todo add description
 * 
 *     @example
 *     @todo add example
 * 
 */
Facebook.ShareHashtag  = function(){
    /**
     * @todo add description
     * 
     * @property {String} localUrl
     * @android
     * @ios
     * @since 1.0
     */
    this.hashTag;
};

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

/** 
 * @enum Facebook.ShareMode 
 * @since 1.0
 * 
 * @todo add description
 * 
 */
Facebook.ShareMode = {};

/**
 * @todo add description
 *
 * @property AUTOMATIC
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.ShareMode.AUTOMATIC;

/**
 * @todo add description
 *
 * @property FEED
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.ShareMode.FEED;

/**
 * @todo add description
 *
 * @property NATIVE
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.ShareMode.NATIVE;

/**
 * @todo add description
 *
 * @property WEB
 * @static
 * @readonly
 * @android
 * @ios
 * @since 1.0
 */
Facebook.ShareMode.WEB;

module.exports = Facebook;