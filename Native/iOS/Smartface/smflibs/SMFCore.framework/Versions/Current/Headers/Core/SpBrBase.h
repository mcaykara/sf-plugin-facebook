/*
 * SpBrBase.h
 *
 *  Created on: 26 Tem 2011
 *      Author: ugur
 */

#ifndef SPBRBASE_H_
#define SPBRBASE_H_

#include <vector>
#include <map>
#include <string>
#include <deque>
#include <string.h>

#include "SpDefs.h"
#include "SpBrString.h"
#include "SpCustomVariable.h"
#include "SpUtPoint.h"
#include "SpDefs.h"
#include "SpUtRect.h"
#include "SpJSCallbackGroup.h"
#include "SpJsEngine/Core/SpJsEngine.h"

static const int kSmfEventGroupCaptureScreen = 10;

class SmfLocalNotification;
class SpBrDatatableImages;
class SpBrNuiMapView;
class SpBrNuiPage;
class SpDataBridge;
class SpEventGroup;
class SpBrParcelable;
class SpBrString;
class SpBrNuiVideoView;
class SpNuiRepeatBox;
class SpBrNuiCameraView;
class SpDataSet;
class SpDataTable;
class SpApplication;
class SpSettingsFile;
class SpBrNuiMenu;
class SpBindVariable;
class SpBrNuiContainer;
class SpJSCallbackGroup;

#ifdef TARGET_PLATFORM_IOS
#ifdef DEBUGGER_PLAYER
class FileChangeMonitor;
#endif
#endif

#ifdef TARGET_PLATFORM_ANDROID
#define tojboolean(x) ((jboolean)((x) ? 1 : 0))
#endif

class SpBrBase  {
    public:
        SpBrBase(SpApplication *owner);
        virtual ~SpBrBase();

    public:
        void InitialNotifyDataControls();
        void AppendPage(SpBrNuiPage* page);
        void AppendMenu(SpBrNuiMenu* menu);
        void AppendDataBridge(SpDataBridge* dataBridge);
        void AppendDataSet(SpDataSet *dataSet);
        void RemoveDataSetAt(int index);
        void AppendWebObjects(SpBrParcelable *webObject);
        void AppendDataTable(SpDataTable *dataTable);

        void CreateCustomVariables();
        void SavePreservedStates();

        void GetAllContacts(SpEventGroup * eventGroup, SpJsObject fields);
        void HideApplication();
        void ShowApplication();
        void CallApplication(SpBrString *app, std::vector<SpBrString*> keys, std::vector<SpBrString*> values);
        void CallFinishApplication(SpBrString *app, std::vector<SpBrString*> keys, std::vector<SpBrString*> values);
        void GetPackageInfo(SpEventGroup * eventGroup, SpBrString *packageName);

    public:
        void PlayVideo(SpBrNuiVideoView *video, SpEventGroup *eventGroup, int loop, bool fullScreen);
        void PauseVideo(SpBrNuiVideoView *video);
        void StopVideo(SpBrNuiVideoView *video);
        SpBrString* GetThumbNailImage(SpBrNuiVideoView *video, int time, SpBrString *tablename);
        void SetVolume(int volumeLevel);
        void EditRepeatBox(SpNuiRepeatBox *repeatBox);
        void StartCamera(SpDataBridge *saveTo, int type, int resolution, int autoFocus, SpEventGroup *eventGroup);
        void Call(SpBrString *number);
        void GotoUrl(SpBrString *url);
        void SendSMS(SpBrString *phoneNumber, SpBrString *content, SpEventGroup *events, bool sendInBackground = false);
        void TurnLightsOn();
        bool IsWorkingDay(int timestamp);
        void Vibrate(int time);
        void CaptureScreen(char* imageName, SpEventGroup *eventGroup, SpUtRect *rectangle = NULL, TImageFormat format = TSIFJPEG, float compressionRate = 0.5);
        bool CheckPermission(char* permission);
        void RequestPermissions(std::vector<std::string> permissions, int requestCode);
        bool ShouldShowRequestPermissionRationale(char* permission);
        /**
         * fill all possible enum value.
         *
         * create new SpBrString* for every request
         * this will return without separator in the end!
         */
        SpBrString* GetFilePath(IOApplicationPath type);

        SpBrString* AddTime(SpBrString *dateFormat, SpBrString *firstDate, int amount, int unitId, int operationId);
        tm* CalculateTime(const char *dateFormat, const char *dateString);
        char* CreateTimeString(const char *dateFormat, int time);
        int GetTimeDifference(SpBrString *dateFormatString, SpBrString *firstDateString, SpBrString *secondDateString, int unitId);
        void PlaySound(SpBrString *resourceString, bool isResource, bool loops, SpEventGroup *eventGroup);
        void StopSound();

        // page navigation function
        void ShowPageNV(SpBrNuiPage *page, SpBrNuiPage *previousPage, TPageEffectType effectType, TPageEffectSubType effectSubType, TPageEffectEase easeType, bool fade, bool back = false, int duration = -1);
        void ShowSplashPage(SpBrNuiPage *page, SpBrNuiPage *previousPage, TPageEffectType effectType, TPageEffectSubType effectSubType, TPageEffectEase easeType, bool fade, bool back = false);
        void ShowDialogNV(SpBrNuiPage *dialog, TPageEffectType effectType, TPageEffectEase easeType, bool isFaded = false);

        void CloseDialog(TPageEffectType CDEffectType, TPageEffectEase CDEffectEase, bool closeAll = true, bool isFaded = false, SpBrNuiPage *closingDialog = NULL);
        void Back(SpBrNuiPage *toPage = NULL);
        void CloseAllDialogs();
        void OpenIfNewPage(SpBrNuiPage *page, bool isReset, TPageEffectType effectType, TPageEffectSubType effectSubType, TPageEffectEase easeType, bool fade, int duration);
        void NotifyTempFileFinished();
        void Share(SpBrString* title, SpBrString* body,  SpJsValue items[], SpJsObject keys, SpJsValue exclude[], SpEventGroup* event);
        /**
         * it construct smartface user info.
         * it contains some info about this client.
         *
         * dont forget to delete returning value
         *
         * @author adem.cayir
         *
         */
        char* ConstructSmartfaceUserInfo();
        // end of page functions
        void Check257Activations();
        /**
         * this times shows time in seconds
         *
         * if minDate is 0, it means min date is not specifed. so you dont restrict min date on picker
         * if maxDate is 0, it means max date is not specifed. so you dont restrict max date on picker
         */
        void ShowDatePicker(int currentDate,int minDate,int maxDate,const char* mask, SpJSCallbackGroup* callbackgroup,int onSelect,int onCancel,int xPoint,int yPoint, int mode = 0);
        void ShowTimePicker(int currentTime,int maxTime,int minTime,bool hourViewFormat24,int minuteInterval, SpJSCallbackGroup* callbackgroup,int onSelect,int onCancel,int xPoint,int yPoint);

        bool NavigationBarHidden();
        bool NavigationBarIsTranslucent();
        bool NavigationBarIsEnabled();
        bool ChangeNavigationBarProperty(char *property, SpJsValue value);

        void* ShowAlertDialog(SpBrString *title, SpBrString *message, int alpha, int numberOfButtons, SpBrString *firstButtonText, SpBrString *secondButtonText, SpBrString *thirdButtonText, SpEventGroup *eventGroup, bool debugDialog = false);
        void closeAlertDialog(SpEventGroup *eventGroup);
        void CloseAlert(SpBrParcelable *alert);
        void LauncApp(SpBrString* appuid);

        void Tweet(SpBrString *message, bool option, SpEventGroup *eventGroup);
        /**
         * it gives system variables.
         * most of variables depend os level. but some of them (bytes sent, receive) depend core.
         * so for now, it works only for os level. later core level keys must be implemented
         */
        SpBrString* GetSystemVariable(SpBrString* key);
        SpBrString* GetLocalizedString(const char *key);
        SpBrString* GetSettingValue(SpBrString *name);
        void SetSettingValue(SpBrString *name, SpBrString *value);
        SpBrString* GetNativeSystemVariable(SpBrString* key);
        void FacebookSend(SpBrString *userMessage, SpBrString *caption, SpBrString *description, SpBrString *link, SpBrString *imageLink, SpEventGroup *eventGroup);
        SpBrString* GetCustomVariable(SpBrString *varName);
        void SetCustomVariable(SpBrString *varName, SpBrString *varValue, int secure = -1);
        void SetNotification(SpBrString *date,SpBrString* alertMessage,SpBrString* title,SpBrString* alertText,SpBrString* sound,SpBrString* notificationId,int repeatOption,SpBrString* badgeNumber,SpEventGroup *eventGroup);
        void ClearNotification(SpBrString* notificationId,bool clearAll,SpEventGroup *eventGroup);
        void PresentNotification(SpBrString*);
        bool SetPushToken (SpBrString* token);
        SpBrString* GetPushToken();
        void SetBadgeNumber(SpBrString*);
        SpBrString* GetBadgeNumber();
        void RegisterForPushNotification(SpEventGroup*);
#ifdef TARGET_PLATFORM_ANDROID
        void ClearAllRemoteNotifications();
        void SetCustomPushNotificationKeys(SpBrString *alertTitle, SpBrString *alertBody, SpBrString *icon, SpBrString *sound);
#endif

        // Local Notifications
        void ScheduleLocalNotification(SmfLocalNotification *notificationObject);
        SpJsValue ScheduledLocalNotifications();
        void CancelLocalNotification(SmfLocalNotification *notificationObject);
        void PresentLocalNotification(SmfLocalNotification *notificationObject);

        void ReloadMapObject(SpBrNuiContainer *container);
        void SetCallApplicationData(SpBrString *data, int resultCode, AppCallType type);
        void SetCallApplicationUrl(SpBrString *url);
        void SetRemoteNotificationData(SpBrString *data);
        void SetPickedGalleryItemData(SpBrString *data);
        void SetGetAllGalleryItemsData(SpBrString *data, int itemCount);
        void SetSaveItemToGalleryData(SpBrString *data);
        bool IsApplicationInstalled(SpBrString * packageName);
        void PickFromGallery(bool images, bool movies, bool sounds, SpEventGroup * eventGroup);
        void GetAllGalleryItems(bool images, bool movies, bool sounds, SpEventGroup * eventGroup);
        void SaveItemToGallery(SpBrString *imageName, SpBrString *name, SpEventGroup * eventGroup);
        SpBrString* pushNotificationData; // contain remote notification token
        SpBrString* mapViewPinData;

        // WE SHOULD PROTECT THESE DATA OR HOLD C STRINGS FOR THIS PURPOSE
        SpJsValue callApplicationData;
        SpBrString * callApplicationUrl;
        SpJsValue deviceContactData;
        SpJsValue pickedGalleryItemData;
        SpJsValue getAllGalleryItemsData;
        SpJsValue saveItemToGalleryData;
        SpJsValue allDeviceContactsData;

        SpJsValue inAppRequestProductsData;
        SpJsValue onErrorWithMessageData;
        SpJsValue inAppRetrievePurchasesData;
        SpJsValue inAppBuyProductData;
        SpJsValue inAppConsumePurchaseData;

        int callApplicationResult;
        AppCallType callAppCallType;

        SpJsValue remoteNotificationData;
        NotificationType notificationType;
        /**
         * it gives device unique identifier.
         * it must be string that only decimal chars accepted
         * this value will be deleted
         *
         * @author adem.cayir
         */
        SpBrString* GetDeviceUniqueIdentifier();
        void SendEMail(SpBrString *to, SpBrString *cc, SpBrString *bcc, SpBrString *subject, SpBrString *message, SpBrString *attachmentFile, SpEventGroup *eventGroup);

        void GetAddressFromLocation(SpBrString *latitude, SpBrString *longitude, SpDataSet *dataset);
        void GetLocationFromAddress(SpBrString *address, SpDataSet *dataset);
        bool SearchLocation(SpBrString *keyword, SpBrString *placeType, SpBrString *centerLatitude, SpBrString *centerLongitude, SpDataSet *dataset);
        void ConvertCoordinateToPoint(SpBrNuiMapView *mapObject, SpBrString *latitude, SpBrString *longitude, int &x, int &y);
        void FillRouteData(SpBrString *startLat, SpBrString *startLon, SpBrString *endLat, SpBrString *endLon, SpDataSet *dataset);
        void AppendSelfToBridge(SpDataBridge *bridge, SpBrNuiBase *obj);
        void SetGPSStatus(bool value);
        void SetAcelerometerStatus(bool value);
        int ShowPickerWithEvents(SpBrString* list[],int listLen, int defaultIndex, SpEventGroup *eventGroup,SpBrNuiBase *boundedObject = NULL, int top = 0,int left=0);
        bool canLocalAuthenticate();
#ifdef TARGET_PLATFORM_IOS
        bool forceTouchCapability();
        void doLocalAuthenticate(SpBrString* title,SpBrString* subtitle,SpBrString* iconRef,SpBrString* fallbacktitle,SpEventGroup *eventGroup);
#endif
        void CancelPickWithID(int pickerID);
        void ShowIndicatorAt(int left, int top, int type);
        void HideIndicator();
        void ShowContactPicker(SpEventGroup *eventGroup, bool showDetail);
        void AddContact(SpBrString *name, SpBrString *secondName, SpBrString *phone, SpBrString *email, SpBrString *address, SpBrString *url, SpEventGroup *eventGroup);
        void FillSingleContactTable(std::vector<SpBrString *> **data);
        void CropImage(SpBrString *imageUri, CropImageOption option, SpEventGroup *eventGroup);
    public:
        SpBrString* EncryptUserInfo(SpBrString *imei);
        SpBrString* ApplicationName();
        SpBrString* ApplicationVersion();
        int SmfVersion();
        void SetForceEventsSynchronously(bool value);
        bool ForceEventsSynchronously();

        SpDataTable* GetDataTable(SpBrString *name);
        void GetData(char *dataLink, char **data1, char **data2);
        bool SetData(char *dataLink, char *data1, char *data2, int length1, int length2);
        void SetClipboardValue(SpBrString *value);
        SpBrString* GetSenderID();
        SpBrString* GetClipBoardValue();

        void ProtectOnMainThread(SpJsObject obj);
        void UnprotectOnMainThread(SpJsObject obj);

        /**
         * Updates userAgent variable with current user agent of device
         */
        void UpdateUserAgent();

        /**
         * For iOS - It inserts asset folder to path and make dir if it needs.
         */
        SpBrString* AddAssetFolderUnderDocs(SpBrString *docsPath);

        /**
         * Copy the main database file to Documents folder
         * And open the database file, assign it to databasePtr
         * @return True if copy is successful or database file already exists in Documents and database successfully opened
         */
        bool CopyDatabaseFileToDocsFolder();

        /**
         * Open the database
         */
        bool OpenDatabase();

        /**
         * Close the database
         */
        void CloseDatabase(bool force = false);

        /**
         * Open the image caching database
         */
        bool OpenImageCacheDatabase();

        /**
         * Close the image caching database
         */
        void CloseImageCacheDatabase();

        /**
         * Merge's database tables on update
         */
        void MergeDatabases();

        /**
         * @return databasePtr object
         */
        void* GetDatabase();

        /**
         * it gives app identifier.
         *
         * for android, it is package
         * for ios, it is bundle id
         */
        SpBrString* GetApplicationIdentifier();

        /**
         * Set the latest error information
         */
        void SetErrorSource(SpBrString *name);
        void SetErrorDetails(int value,  SpBrString *message = NULL);
        void UpdateLatestInappKey(SpBrString *key);
        void PrintPageStack();

        void GetApplicationVersions(std::string& appVersion, std::string &buildVersion);

    public:
        bool databaseAlreadyOpened;
        pthread_mutex_t databaseOpenMutex;
        pthread_mutex_t databaseProcessMutex;
        pthread_mutex_t globalErrorLockDetails;
        pthread_mutex_t globalErrorLockSource;
        pthread_mutex_t jscontextMutex;
        pthread_mutex_t smfIdGeneratorMutex;
#ifdef TARGET_PLATFORM_IOS
        void CreateSystemVariableManager();
        void ReleaseSystemVariableManager();
        void InvalidateStatusBar(bool recreate = false);
        void CallAppCallRecievedEvent();
        bool CanOpeniOSUrl(char* urlScheme);
        void SetCheckUpdateEventGroup(SpEventGroup* grp);
        void clearDone();
        void invalidProtocolVersion(std::string emulatorVersion, std::string dispatcherVersion);
        void chunkReceived(unsigned char* chunk, int size, bool isFinal, int offset);
        void filesRecieved(uint8_t* bytes, int byteLength);
        void fileInfoReceived(int message);
        void errorhandler(std::string s);
        void timeOutException();
        void setEmulatorProjectName(std::string s);
        void saveEmulatorUrlToUserDefaults(std::string url);
#endif

        std::map<int,SpEventGroup*> eventGroupMap;

    public:
        SpApplication *application;
        void *systemVariableManager;
        std::vector<SpBrNuiPage *> pages;
        std::vector<SpBrNuiMenu*> menus;
        std::vector<SpBrNuiPage *> openedPagesStack;
        std::vector<SpDataBridge *> dataBridges;
        std::vector<SpDataSet *> dataSets;
        std::vector<SpBrParcelable*> webObjects;
        std::vector<SpDataTable *> dataTables;
        std::vector<SpBrString *> loadedJSURLs;
#ifdef TARGET_PLATFORM_ANDROID
        std::deque<SpBrNuiPage *> pageCache;
        std::deque<SpBrNuiPage *> dialogCache;
        std::deque<int> dialogCacheShowStatusBar;
        std::vector<SmfLocalNotification*> allNotifications;
#endif

        SpBrString* userAgent;
        SpBrNuiPage *activePage;
        bool changedPageIsAnimating;
        std::vector<SpBrNuiPage*> activeDialogs;

        SpSettingsFile *settingsFile;

        struct SpBrStringCompare : public std::binary_function<const char*, const char*, bool> {
            public:
                bool operator() (SpBrString* str1, SpBrString* str2) const
                { return strcmp(str1->GetCString(), str2->GetCString()) < 0; }
        };
        std::map<std::string, SpCustomVariable *> customVariables;
        std::vector<SpCustomVariable *> customVariableObjects;
        std::map<std::string, SpBindVariable *> bindVariables;

    public:
        bool singleContactFound;
        bool closingPage;
        SpEventGroup* pushNotificationEvent;
        void *databaseImageCachePtr;
#ifdef ON_MEMORY_DB_DEV
        void* GetOnMemoryDatabase();
        bool ShouldRunOnMemory(const char* sql);
#endif
    private:
        SpBrString *encryptedUserInfo;
        int localizedDatasetId, singleContactDatasetId;
        bool forceSynchronously;

        void *databasePtr;
#ifdef ON_MEMORY_DB_DEV
        void *inMemoryDatabasePtr;
#endif
        std::map<pthread_t, void *> databaseMap;
        SpBrString *lastErrorSourceName;
        SpBrString *lastErrorStatusMessage;
        int lastErrorCode;
        SpBrString *latestInAppKey;
    private:
        SpDataSet* mapShowRouteDataSet;
        SpDataSet* mapGetAddressFromLocation;
        SpDataSet* mapGetLocationFromAddress;
        SpDataSet* mapSearchLocation;
        bool mapTablesChecked;
        void CheckMapDataSets();
#ifdef TARGET_PLATFORM_IOS
#ifdef DEBUGGER_PLAYER
        FileChangeMonitor* fm;
#endif
#endif

    public: // WUSWUG stuff
        int clearDpPuntoFromSize(int dp,GeometryValueTypes &valueType);
        int deviceDpi;
        float deviceXDpi;
        float deviceYDpi;
        int fixedDeviceDpiForiOS;
        int majorOSVersion;
    public: // JS stuff
        SpDataSet* GetMapShowRouteDataSet();
        SpDataSet* GetMapGetAddressFromLocation();
        SpDataSet* GetMapGetLocationFromAddress();
        SpDataSet* GetMapSearchLocation();
        void setContextProperties();

    public:
#ifdef TARGET_PLATFORM_IOS
        float getMaxFontSize(SpBrString *text,int width, int height,SpBrString* fontName,bool bold, bool italic);
        SpBrString* getMinWidth(SpBrString *text,SpBrString* fontName,bool bold, bool italic, int fontSize);
        SpBrString* getFontName(SpBrString* fntName, TFontStyle fntStyle);
        void GlobalContextCreated();
#ifdef SMF_PLUGINS_ENABLED
        void ParsePluginConfigurationFile();
#endif
#endif

        static pthread_mutex_t jsExecutionMutex;
        static pthread_mutex_t jsExecutionMutexForSavingThreadId;
        static pthread_t jsExecutionThread;

        static pthread_mutex_t eventExecutionMutex;
        static pthread_mutex_t eventExecutionMutexForSavingThreadId;
        static pthread_t eventExecutionThread;

        static pthread_mutex_t networkOperatorMutex;

        //static bool jsLocked;
        static int jsParsingCount;
        static int jsCallFunctionCount;
        static pthread_t garbageCollectionThread;
#ifdef DEBUG_JSSCHEDULER
        __attribute__ ((visibility ("default"))) static SpJsValue JSObjectCallAsFunctionSafe
            (SpJsObject object,
             SpJsObject thisObject,
             size_t argumentCount,
             const SpJsValue arguments[]
             /*, SpJsValue* exception*/,
             std::string debugStr);

        __attribute__ ((visibility ("default"))) static void JSObjectCallAsFunctionSafeAsync
            (SpJsObject object,
             SpJsObject thisObject,
             size_t argumentCount,
             const SpJsValue arguments[]
             /*, SpJsValue* exception*/,
             std::string debugStr);
#else
        __attribute__ ((visibility ("default"))) static SpJsValue JSObjectCallAsFunctionSafe
            (SpJsObject object,
             SpJsObject thisObject,
             size_t argumentCount,
             SpJsArgumentsList arguments
             /*, SpJsValue* exception*/);
        __attribute__ ((visibility ("default"))) static void JSObjectCallAsFunctionSafeAsync
            (SpJsObject object,
             SpJsObject thisObject,
             size_t argumentCount,
             SpJsArgumentsList arguments
             /*, SpJsValue* exception*/);
#endif

        static SpJsValue RunJavaScript(const char *jsCode,
                SpJsObject thisObject=SpJsNullObject,
                const char *sourceId = nullptr,
                bool ignoreError = false);

        void StartJSCDebugging(SpApplication* mainApp);
        void DebuggerFinished(bool success);
        bool log_debug;

    public:
        // for performance optimizations
        void ReloadAllTableViews();
        bool isReloadingTableViews;
        bool networkNotifying;
        std::vector<SpBrNuiContainer *>containersWaitingForLayout;
        std::vector<SpNuiRepeatBox *>repeatboxWaitingForReload;

    public:
        int currentSmfId;
        int GenerateNextSmfId();
        SpBrString * GetApplicationBundlePath();
        int activePickerCount;

    /**
    * Called to set device orientation on native side.
    */
    void SetOrientations(bool isPortrait, bool isUpsideDown, bool isLandLeft, bool isLandRight);

    static void restartApplication();
};

#endif /* SPBRBASE_H_ */

