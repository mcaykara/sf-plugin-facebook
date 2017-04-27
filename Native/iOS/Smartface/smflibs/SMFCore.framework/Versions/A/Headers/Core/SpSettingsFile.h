
#ifndef __SPSETTINGSFILE_H__
#define __SPSETTINGSFILE_H__

#include <vector>

class SpBrString;
class SpDataSource;

/**
 * <B>SpSettingsItem</B> class stores name-value pairs.
 */
class SpSettingsItem {
public:
    /**
     * Constructor
     */
    SpSettingsItem();

    /**
     * Destructor
     */
    ~SpSettingsItem();

public:
    /**
     * Sets name of item
     * @param aName
     */
    void SetName(SpBrString *aName);

    /**
     * Sets value of item
     * @param aValue
     */
    void SetValue(SpBrString *aValue);

    /**
     * Gets name of item
     * @return name
     */
    SpBrString* Name();

    /**
     * Gets value of item
     * @return value
     */
    SpBrString* Value();

private:
    SpBrString *iName;
    SpBrString *iValue;
};

/**
 * <B>SpSettingsFile</B> class stores name-value pairs in file.
 */
class SpSettingsFile
{
public:
    /**
     * Constructor
     */
    SpSettingsFile(const char *aFileName);

    /**
     * Destructor
     **/
    ~SpSettingsFile();

private:
    /**
     * Reads each of setting items from file.
     */
    void ReadSettingsFile();

    /**
     * Writes each of setting items to file.
     */
    void WriteSettingsFile();

public:
    /**
     * If 'aName' already exists, sets value,
     * else adds new name-value pair.
     * @param aName name of setting item
     * @param aValue value of setting item
     */
    void Set(SpBrString *aName, SpBrString *aValue);

    /**
     * Gets value for the requested name
     * @param aName name of setting item
     * @return value of setting item
     */
    SpBrString* Get(SpBrString *aName);

    /**
     * Removes name-value pair for the requested name
     * @param aName name of setting item
     */
    void Remove(SpBrString *aName);

private:
    /**
     * Finds name-value pair for the requested name
     * @param aName name of setting item
     * @return if item exists, index of requested item
     * 		else KErrGeneric
     */
    int Find(SpBrString *aName);

    /**
     * Reads next item in the given file
     * @param datasource
     * @return item read from file
     */
    SpSettingsItem* ReadItem(SpDataSource *datasource);

    /**
     * Writes item to the given file
     * @param datasource file
     * @param aItem item to write
     */
    void WriteItem(SpDataSource *datasource, SpSettingsItem* aItem);

private:
    SpBrString *iFileName;
    SpBrString *empty;
    std::vector<SpSettingsItem *> iItemArray;
};

#endif /* __SPSETTINGSFILE_H__ */