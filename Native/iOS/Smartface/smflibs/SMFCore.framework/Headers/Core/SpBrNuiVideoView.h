/*
 * SpBrNuiVideoView.h
 *
 *  Created on: Aug 18, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRNUIVIDEOVIEW_H_
#define SPBRNUIVIDEOVIEW_H_

#include "SpBrNuiBase.h"

class SpEventGroup;

class SpBrNuiVideoView: public SpBrNuiBase  {
public:
    static SpBrNuiVideoView* Create(SpBrBase* base, SpContext* context);
    static SpBrNuiVideoView* Create(SpBrNuiVideoView* objectToCopy);

	SpBrNuiVideoView(SpBrBase* base, SpContext* context);
    SpBrNuiVideoView(SpBrNuiVideoView* objectToCopy);
	virtual ~SpBrNuiVideoView();
public:
	void Parse(SpDataSource **datasourcePtr, std::vector<SpBrParcelable*> *objects);
    void Reset(bool invalidate = true);
    void ChangeObjectValue(SpBrString* targetAttribute, SpBrString* value);
    SpBrString* getObjectValue(SpBrString* targetAttribute);
    void AssignDefaultValue(const char *attribute, const char *value);
    void NotifyControl(SpDataSet *dataset, unsigned int datasetChangeOptions);
    void NotifyFromCustomVariable(SpBrString *value);
    void SetUrl(SpBrString *value);
    virtual void CanPlay(int loop, SpEventGroup *eventGroup, bool inVideoPage) {};
    virtual void Pause() {};
    virtual void Stop() {};
    virtual SpBrString* GetImageAt(int time, SpBrString *table) {};
public:
    SpBrString *iResourceName, *resourceName;
    SpBrString *iUrlString, *urlString;

    TVideoControlStyla controlStyla;
    TMovieScalingMode movieScalingMode;
    int initialPlayTime;
    bool isFromNetwork;
public:
    void NotifyBindVariable(SpDataBridge* source,SpBrString* value);
};

#endif /* SPBRNUIVIDEOVIEW_H_ */
