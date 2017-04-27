//
//  SpActionPerformer.h
//  SpratIOS
//
//  Created by ugur on 8/9/11.
//  Copyright 2011 Bivium. All rights reserved.
//

#ifndef SPACTIONPERFORMER_H_
#define SPACTIONPERFORMER_H_

#include "SpDefs.h"

class SpBrNuiPage;
class SpBrNuiVideoView;
class SpNuiRepeatBox;
class SpBrNuiCameraView;
class SpBrString;
class SpEventGroup;
class SpDataBridge;

class MActionPerformer
{
public:
    virtual void OpenIfNewPage(SpBrNuiPage *page) = 0;
    virtual void Back() = 0;
    virtual void CloseDialog() = 0;
    virtual void PlayVideo(SpBrNuiVideoView *video, int loop) =  0;
    virtual void PauseVideo(SpBrNuiVideoView *video) = 0;
    virtual void StopVideo(SpBrNuiVideoView *video) = 0;
    virtual void SetVolume(int volumeLevel) = 0;
    virtual void EditRepeatBox(SpNuiRepeatBox *repeatBox) = 0;
    virtual void StartCamera(SpDataBridge *saveTo, int type, int resolution, int autoFocus, SpEventGroup *eventGroup) = 0;
    virtual void Call(SpBrString *number) = 0;
    virtual void GotoUrl(SpBrString *url) = 0;
    virtual void SendSMS(SpBrString *phoneNumber, SpBrString *content, SpEventGroup *events, bool sendInBackground = false) = 0;
    virtual void TurnLightsOn() = 0;
    virtual bool IsWorkingDay(SpBrString *dateString) = 0;
    virtual void Vibrate(int time) = 0;
};

#endif /* SPACTIONPERFORMER_H_ */
