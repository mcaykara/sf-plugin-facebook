/*
 * SpJavascriptTesterFunctions.h
 *
 *  Created on: Aug 22, 2014
 *      Author: ugur kilic
 */

#ifndef __SPJSJAVASCRIPTTESTER_H__
#define __SPJSJAVASCRIPTTESTER_H__

#include "Core/SpDefs.h"
#include "SpJsEngine/Core/SpJsEngine.h"

const static char *testUsageFailMessage = "Test Usage is wrong.";

typedef enum {
    JTSCEqual,
    JTSCNotEqual,
    JTSCCaseFreeEqual,
    JTSCCaseFreeNotEqual
} JTStringComparisonType;

typedef enum {
    JTNCEqual,
    JTNCNotEqual,
    JTNCLowerThan,
    JTNCLowerOrEqual,
    JTNCGreaterThan,
    JTNCGreaterOrEqual
} JTNumberComparisonType;

SpJsFunction (js_tester_assert_true);

SpJsFunction (js_tester_assert_false);

SpJsFunction (js_tester_assert_eq);

SpJsFunction (js_tester_assert_ne);

SpJsFunction (js_tester_assert_lt);

SpJsFunction (js_tester_assert_le);

SpJsFunction (js_tester_assert_gt);

SpJsFunction (js_tester_assert_ge);

SpJsFunction (js_tester_assert_streq);

SpJsFunction (js_tester_assert_strne);

SpJsFunction (js_tester_assert_strcaseeq);

SpJsFunction (js_tester_assert_strcasene);

SpJsFunction (js_tester_next);

SpJsFunction (js_tester_finish);

void JSTesterCompareNumbers(SpJsValue numberRef1, SpJsValue numberRef2, JTNumberComparisonType comparisonType, char **failMessage);
void JSTesterCompareStrings(SpJsValue stringRef1, SpJsValue stringRef2, JTStringComparisonType comparisonType, char **failMessage);

#endif /* (__SPJSJAVASCRIPTTESTER_H__) */
