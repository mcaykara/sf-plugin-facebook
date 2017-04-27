/*
 * SpApplication.h
 *
 *  Created on: 27 Tem 2011
 *      Author: ugur
 */

#ifndef SPAPPLICATION_H_
#define SPAPPLICATION_H_

#include <vector>
#include <map>
#include <string>

#include "SpBrParcelable.h"
#include "SpDefs.h"
#include "SpPlayerParameters.h"
#include "SpProjectJson.h"
#include "Core/fast_array.h"

class SpContext;
class SpBrBase;
class SpDataSet;
class SpBrNuiPage;
class SpBrSESAnalytic;
// Main application object, has baseData which holds object lists
// And it's also an action performer, used by Actions and Events
//
extern FastArray* application_properties;

class SpApplication: public SpBrParcelable {
public:
	SpApplication(SpContext* context);
    SpApplication(SpApplication* objectToCopy);
	virtual ~SpApplication();

public:
    /**
     * Several checks on startup.
     * Also Smartface Data Source is created here.
     */
    bool CheckConfig();
    bool CheckSplash(SpBrNuiPage *);
    void ShowSplashAlert();
    void CreateSplashDummies(SpPlayerParameters *playerParameters);
    void DoLoadSplash();
    void DestroySplashAssignments();
    
	/**
	 * - create resourcemanager
	 * - parse all component
	 *
	 */
	void Initialize();

	/**
	 * Called by initialize after splash has been displayed to finish initialization.
	 */
	void InitializeAfterSplash();

    void LoadPreLibs();
	void LoadGlobalJS();

	/**
	 * make free using applicaiton resources after update
	 */
	void FreeResources();
    
	/**
	 * it prepares the file system.
	 *
	 * function checks current resource files was changed or not.
	 * if resource files was changed, function clears all saving datas.
	 *
	 * it checks resouce files changes with ResourceUUID
	 *
	 *
	 * @author adem.cayir
	 */
	void PrepareFileSystem(SpDataSource* datasource);
    
    void Parse(Object::Ptr);
    void FiringEventOnThis(int eventID, int eventCode = -1);
    virtual void firedEventOnThis(int eventID, int eventCode);
    void CheckBeforeNotify();
    void CheckForApplicationStartEvents();
    void CreateTestingEnvironment();
    
    /**
     * Getters
     */
    SpBrString *GetTwitterKey();
    SpBrString *GetTwitterSecret();
    SpBrString *GetFaceboookAppID();
    SpBrString *GetFaceboookAppSecret();
    SpBrString *GetAndroidMapsApiKey();
    SpBrString *GetiOSMapsApiKey();
    shared_ptr<ProjectJson> getProjectJson();
    int GetSmfVersion();
    void SetSmfVersion(int version);
    
    void SetLocationEventsEnabled(bool value);
    bool LocationEventsEnabled();
    void SetAccelerometerEventsEnabled(bool value);
    bool AccelerometerEventsEnabled();
    int GetConfigVersion();
    SpBrString* GetAppNameFromConfig();
    SpBrString* GetAppVersionFromConfig();
    bool AllowInterfaceOrientation(TApplicationAllowedOrientation orientation);
    bool IsInterfaceOrientationLoaded();
    
    std::vector<int> GetEventCodes();
    bool HasOnGlobalError();
    bool ObjectRespondsToEvent(const char *eventName);

public:
	SpContext* context;

public:
    SpPlayerParameters *playerParameters;
    bool locationEnabled, accelerometerEnabled;
    void IncreaseSentBytes(int count);
    void IncreaseReceivedBytes(int count);
    void ZeroByteCounts();
    int GetSentBytes();
    int GetReceivedBytes();
    bool IsAlive();
    void SetIsUpdate(bool is);
    bool IsUpdate();
public:
    /**
     * 3DES master key for encrption for resource files
     */
    SpBrString *config3DESMasterKey;
    
    SpBrString *config3DESInitVector;
    
    SpBrString *smsReceivedNo;
    SpBrString *smsReceivedContent;
    
    std::map<std::string, std::map<std::string, std::string> > objectDefaultsMap;
    
public:
    static SpBrBase* GetBase();
    void InitializeDataSets();
    
private:
    /**
     * Player download url
     */
    SpBrString *configPlayerDownloadUrl;
    
    /**
     * Progress bar image file name
     */
    SpBrString *configProgressBarImage;
    
    /**
     * Splash screen file name
     */
    SpBrString *configSplashImage;
    
    /**
     * Splash screen images
     */
    std::vector<SpBrString*> splashPageImages;
    
    /**
     * Application's verified name
     */
    SpBrString *applicationNameConfig;
    
    /**
     * Application's version
     */
    SpBrString *applicationVersionConfig;

    int configLicenceType;

    /**
     * Splash screen background color
     */
    int splashBackgroundColor;
    
    bool firstSplashOrientations[4];

    /**
     * Splash screen version text color
     */
    int configVersionTextColor;
    
    /**
     * Version of .smf
     */
    int configFileVersion;
    int totalSentBytes;
    int totalReceivedBytes;
    bool isAlive;
    bool isUpdate;
    bool initializeDatasetsCalled;
    
    /**
     *  Project json object of application
     */
    shared_ptr<ProjectJson> projectJson;
public:
    bool hasOnGlobalError;
    pthread_t mainThread;
	SpBrBase* splashDummyBase;
	SpApplication* splashDummyApp;
    int debugAlertTag;
};

#endif /* SPAPPLICATION_H_ */
