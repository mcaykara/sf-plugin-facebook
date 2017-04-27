/*
 * SpDigipassManager.h
 *
 *  Created on: 30 Nov 2011
 *      Author: ugur.kilic
 */

#ifndef SPDIGIPASSMANAGER_H_
#define SPDIGIPASSMANAGER_H_

#include "SpDefs.h"
#include "SPDigipass/DP4Capi.h"

class SpContext;
class SpBrDigipassPerformer;
class SpBrString;

class SpDigipassManager {
public:
	SpDigipassManager(SpContext *aContext);
	~SpDigipassManager();

	int ActivateOnline(vds_ascii* aXfad, vds_ascii* aChsKey, vds_ascii* aPin);
	int ValidatePin(vds_ascii* aPin, vds_byte* attemptsLeft = NULL);
	int ChangePin(vds_ascii* aOldPin, vds_ascii* aNewPin);
	int GenerateOtp(vds_ascii* aPin, vds_ascii* aOtpResult, vds_ascii* aRhcResult);
	int SignTwoKey(vds_ascii* aPin, vds_ascii aChallengeList[8][LNG_DTF_MAX], vds_ascii* aSignResult, vds_ascii* aSignConfCodeResult);
	int GetInfo(vds_ascii* aPin, vds_ascii* aSNResult, vds_ascii* aOtpCounterResult, vds_ascii* aSignCounterResult, vds_ascii* aDeviceGmtTimeResult);
	int GetSerial(vds_ascii* aSNResult);
	int TestPin(vds_ascii* aPin);
	void UpdateSCTimeShift(int aTimeShift);
	int GetUpdateSCTimeShift();
	int EncryptUrlA1(vds_ascii* aPin, vds_ascii* aUrl, vds_ascii* aEncryptedUrlResult);

    bool GetIsFirstActivation();
	bool GetIsActivated();
    void ResetVectors();

    void CalculateTimeShift(SpBrString *serverTime);
    SpBrString* GetInterval(SpBrString *date);

private:
    void LoadData();
    void SaveData();

private:
    SpBrDigipassPerformer *performer;
    SpContext *context;

    vds_byte *staticVector, *dynamicVector;
	int result;
	vds_int32 timeShift;
	vds_ascii Pwd[32], Otp[16+1], Rhc[10+1], Dtf[8][LNG_DTF_MAX], vCounter1[10+1],  vCounter2[10+1], vGmtTime[256+1], vSeriNo[10+1];
	bool appIsOpened;
};

#endif /* SPDIGIPASSMANAGER_H_ */
