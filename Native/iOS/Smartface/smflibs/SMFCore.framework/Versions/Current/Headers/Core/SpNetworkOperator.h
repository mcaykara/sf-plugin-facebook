/*
 * SpNetworkOperator.h
 *
 *  Created on: Sep 28, 2011
 *      Author: ugurkilic
 */

#ifndef SPNETWORKOPERATOR_H_
#define SPNETWORKOPERATOR_H_

#include <vector>
#include "jansson/jansson.h"
#include "SpDefs.h"

class SpBrString;
class SpBrParcelable;
class SpDataBridge;
class SpEventGroup;
class TiXmlNode;
class TiXmlAttribute;
class SpBrBase;
/**
 * SpNetworkOperator class works with Web Services
 * Takes the result buffer from such services and assign appropriate values to databridges
 * Also creates SOAP messages required for Web Services
 */

class SpNetworkOperator {
public:
    /**
     * SpNetworkOperator default constructor
     */
    SpNetworkOperator();

    /**
     * SpNetworkOperator constructor used in location actions
     */
    SpNetworkOperator(SpBrBase *base);

    /**
     * SpNetworkOperator constructor
     * @param httpUrl Full url of the service
     * @param eventGroup Service Designer events
     * @param append Overwrite existing data or append to it
     */
	SpNetworkOperator(SpBrBase *base, SpBrString *httpUrl, SpEventGroup *eventGroup);

    /**
     * SpNetworkOperator destructor
     */
	virtual ~SpNetworkOperator();

public:

    static char* GetFullXPath(TiXmlNode* node,TiXmlAttribute* attribute);

    /**
     * Creates the soap message
     * @param requestParts Parts of the pure request without user inputs
     * @param valueBridges Input values of the request
     * @return Final soap message
     */
    SpBrString* FormRequestSoapString(std::vector<SpBrString *> requestParts, std::vector<SpBrParcelable *> valueBridges, HTMLContentType contentType);

    /**
     * Parses the XML result buffer and assign the results to corresponding SpDataBridges
     * @param buffer Result string
     * @param rssMainParts XPath search string as a vector
     * @param xPathStrings XPathes
     * @param dataBridges SpDataBridges connected to XPathes
     */
    void ParseAndFetchResponseDataXML(const char *buffer,SpBrString* searchXPath, std::vector<SpBrString *> xPathStrings, std::vector<SpBrParcelable *> dataBridges, int maxRowCount=0);

    /**
     * Parses the JSON result buffer and assign the results to corresponding SpDataBridges
     * @param buffer Result string
     * @param rssMainParts XPath search string as a vector
     * @param xPathStrings XPathes
     * @param dataBridges SpDataBridges connected to XPathes
     */
    void ParseAndFetchResponseDataJSON(const char *buffer,SpBrString* searchXPath, std::vector<SpBrString *> xPathStrings, std::vector<SpBrParcelable *> dataBridges, int maxRowCount=0);


    /**
     * Sets the downloaded file's path to connected databridge
     * @param fileType XPath search string as a vector
     * @param buffer Result string
     * @param dataBridges SpDataBridges connected to XPathes
     */
    void SaveFilePathToBridge(const char *fileType, const char *buffer, std::vector<SpBrParcelable *> dataBridges);

    /**
     * Iterate through json objects
     * @param node root node
     */
    void IterateJsonTree(json_t* node, SpBrString* path,SpBrString* searchXPath, std::vector<SpBrString *> xPathStrings, std::vector<SpBrParcelable *> dataBridges, std::vector<SpBrString*> imageDownloadUrls, std::vector<SpBrString*> imageDownloadNames, char* image_tag, int &image_count, int *targetFieldsTypes,int maxRowCount,const bool LOG_DEBUG_MSG);

    void NewRowControlForJson(SpBrString* path, std::vector<SpBrString *> xPathStrings, std::vector<SpBrParcelable *> dataBridges,int maxRowCount,const bool LOG_DEBUG_MSG);

    /**
     * Checks if the xpath is an attribute
     * @param xpath XPath that will be checked
     * @return True if the XPath is an attribute
     */
    bool IsAttribute(SpBrString *xpath);

    /**
     * Creates the full url of the image file
     * @param value String that came from webservice
     * @return Full url of the image file
     */
    char* GetImageUrl(const char *value,bool &isBase64);


    /**
     * Creates a domain url for http services
     * @param fullUrl Service url
     * @return The domain of the service url
     */
    SpBrString* GetDomain(SpBrString *fullUrl);

    /**
     * Creates the file's final name
     * @param tablename Tablename of the connected SpDataSet
     * @param nameString Atomic name of the file
     * @return The name of the file that will be saved to storage
     */
    char* GetFileNameWithTable(SpBrString *tablename, SpBrString *nameString);

    void SaveCookie(SpBrString *url, SpBrString *cookieLine,int serverDateTime);
    void AddCookieToHeaders(SpBrString *url,std::vector<char*> *headers);

private:
    /**
     * Service URL
     */
    SpBrString *url;

    /**
     * Service's domain URL created with constructor
     */
    SpBrString *urlDomain;

    /**
     * Events defined for service in Designer
     */
    SpEventGroup *events;

    SpBrBase *baseData;
};

#endif /* SPNETWORKOPERATOR_H_ */
