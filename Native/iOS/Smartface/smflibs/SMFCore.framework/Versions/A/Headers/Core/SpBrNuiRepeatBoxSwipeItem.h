//
//  SpBrNuiRepeatBoxSwipeItem.h
//  Smartface
//
//  Created by ugurkilic on 25/07/15.
//  Copyright (c) 2015 Smartface. All rights reserved.
//

#ifndef __SMARTFACE_SPBRNUIREPEATBOXSWIPEITEM__
#define __SMARTFACE_SPBRNUIREPEATBOXSWIPEITEM__

#include "SpBrParcelable.h"

class SpBrNuiButtonView;

class SpBrNuiRepeatBoxSwipeItem : public SpBrParcelable {
public:
    SpBrNuiRepeatBoxSwipeItem();
    virtual ~SpBrNuiRepeatBoxSwipeItem();

public:
    SpBrNuiButtonView *buttonView;
};

#endif /* defined(__SMARTFACE_SPBRNUIREPEATBOXSWIPEITEM__) */
