//
//  SpJSFunctionsInApp.h
//  SpratIOS
//
//  Created by Antti Panula on 12/7/12.
//  Copyright (c) 2012 Bivium. All rights reserved.
//
#ifdef SMF_INAPPPURCHASE_ENABLED

#ifndef __SpratIOS__SpJSFunctionsInApp__
#define __SpratIOS__SpJSFunctionsInApp__
#include <vector>
#include "Core/SpEventGroup.h"
#include "Core/SpBrString.h"
#include "SpJsEngine/Core/SpJsEngine.h"

SpJsFunction (cb_inapp_checkBillingSupport);

SpJsFunction (cb_inapp_requestProducts);

SpJsFunction (cb_inapp_buyProduct);

SpJsFunction (cb_inapp_retievePurchases);

SpJsFunction (cb_inapp_consumePurchase);

void InAppBillingCheckBillingSupport(SpEventGroup*);
void InAppBillingRequestProducts(std::vector<SpBrString *> &values, SpEventGroup* eventGroup);
void InAppBillingBuyProduct(SpEventGroup*, SpBrString*, SpBrString*);
void InAppBillingRetrievePurchasedItems(SpEventGroup* eventGroup);
void InAppBillingConsumePurchase(SpEventGroup*, SpBrString*);

#endif /* defined(__SpratIOS__SpJSFunctionsInApp__) */

#endif //SMF_INAPPPURCHASE_ENABLED
