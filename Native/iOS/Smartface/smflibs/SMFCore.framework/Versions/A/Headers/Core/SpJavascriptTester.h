/*
 * SpJavascriptTester.h
 *
 *  Created on: Aug 21, 2014
 *      Author: ugur kilic
 */

#ifndef __SPJAVASCRIPTTESTER_H__
#define __SPJAVASCRIPTTESTER_H__

#include "TinyXML/tinyxml.h"
#include "TinyXML/tinystr.h"

#include <vector>

#include "SpDefs.h"
#include "SpBrParcelable.h"

using namespace std;

static const SpJsClassDefinition smf_smftester_def =
{
    0,                     // version
    kJSClassAttributeNone, // attributes
    "SmartfaceTester",        // className
    NULL,                  // parentClass
    NULL,                  // staticValues
    NULL,                   // staticFunctions
    NULL,                   // initialize
    NULL,                  // finalize
    NULL,                  // hasProperty
    NULL,                  // getProperty
    NULL,                  // setProperty
    NULL,                  // deleteProperty
    NULL,                  // getPropertyNames
    NULL,                  // callAsFunction
    NULL,                  // callAsConstructor
    NULL,                  // hasInstance
    NULL                   // convertToType
};

class SpJavascriptTester {
public:
    SpJavascriptTester();
    ~SpJavascriptTester();

    static SpJavascriptTester* GetInstance();

    void RunAllTests();
    void InitializeJSTests();
    void LoadAndCreateForTesting();
    void RunNext();
    void Finish();

public:
    void AddSuccessTestCase();
    void AddFailureTestCase(const char *message);

private:
    void UpdateCurrentTestCaseName();
    void ClearTestFunctions();
    void SaveToFile();

private:
    TiXmlDocument currentDoc;
    TiXmlElement *currentSuiteElement;

    std::vector<SpBrString *>testFiles;
    std::vector<char *>currentFunctionList;
    int currentTestFileIndex;
    int currentTestFunctionIndex;

    const char *currentTestSuiteName;
    char *currentTestCaseName;
};

#endif /* __SPJAVASCRIPTTESTER_H__ */
