# Facebook Plugin from Smartface
[![Twitter: @Smartface_io](https://img.shields.io/badge/contact-@Smartface_io-blue.svg?style=flat)](https://twitter.com/smartface_io)
[![License](https://img.shields.io/badge/license-MIT-green.svg?style=flat)](https://raw.githubusercontent.com/smartface/sf-plugin-facebook/master/LICENSE)

A plugin for accessing [Facebook SDKs](https://developers.facebook.com/docs/) with Smartface Native Framework.

## Installation
Smartface Facebook Plugin can be installed via npm easily from our public npm repository. The installation is pretty easy via Smartface Cloud IDE.

- Open scripts/package.json file inside your workspace.
- Add Facebook plugin dependency as:`"sf-plugin-facebook": "^1.0.0"`
- Run command `npm install` under the folder `scripts`
- Finally require the extension as: `require("sf-plugin-facebook")`

## How to use
1) Require plugin with `require("sf-plugin-facebook")`
2) Set Application ID and Application name that you created on [Facebook Developer Console](https://developers.facebook.com/) as:
```javascript
Facebook.applicationId = 'YOUR_APPLICATION_ID';
Facebook.applicationName = "YOUR_APPLICATION_NAME";
```
or via config/Android/AndroidManifest.xml or config/iOS/Info.plist. But, if you configure Application ID with Manifest and plist, your Facebook Application ID will not work until you publish your project. We recommend you to use 'Facebook.applicationId' for setting Application ID and name.
3) Finally you can login: 
```javascript
Facebook.loginWithReadPermissions({
    page: this, 
   permissions: readPermissions,
   onSuccess: function(data){
      alert(JSON.stringify(data));
   },
   onFailure: function(e){
      alert(e)
   },
   onCancel: function(){
      alert("canceled");
   }
});
```
## Sample
The folder `sample` holds the example codes. You can put them into your workspace and start using it. 

## Need Help?
Please [submit an issue](https://github.com/smartface/sf-plugin-facebook/issues) on GitHub and provide information about your problem.

## Support & Documentation & Useful Links
- [Guides](https://developer.smartface.io/docs/facebook-plugin)
- [Smartface Cloud Dashboard](https://cloud.smartface.io)
## Code of Conduct
We are committed to making participation in this project a harassment-free experience for everyone, regardless of the level of experience, gender, gender identity and expression, sexual orientation, disability, personal appearance, body size, race, ethnicity, age, religion, or nationality.
Please read and follow our [Code of Conduct](https://github.com/smartface/sf-plugin-facebook/blob/master/CODE_OF_CONDUCT.md).
## License

This project is licensed under the terms of the MIT license. See the [LICENSE](https://raw.githubusercontent.com/smartface/sf-plugin-facebook/master/LICENSE) file. Within the scope of this license, all modifications to the source code, regardless of the fact that it is used commercially or not, shall be committed as a contribution back to this repository.
