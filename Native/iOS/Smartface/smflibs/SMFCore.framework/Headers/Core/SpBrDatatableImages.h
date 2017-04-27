/*
 * SpBrDatatableImages.h
 *
 *  Created on: Oct 3, 2011
 *      Author: ugurkilic
 */

#ifndef SPBRDATATABLEIMAGES_H_
#define SPBRDATATABLEIMAGES_H_

#include <vector>

#include "SpDataTable.h"

class SpBrBase;
class SpContext;
class SpBrNuiBase;

class SpBrDatatableImages: public SpDataTable  {
public:
	SpBrDatatableImages(SpBrBase* base, SpContext* context);
	virtual ~SpBrDatatableImages();
#ifdef TARGET_PLATFORM_ANDROID
	std::vector<SpDataRow *> ReadFromDataSource(std::vector<SpBrString *> columnNames);
#endif
    void CommitToDataSource(SpDataSet *ds, std::vector<SpBrString *>columnNames, std::vector<SpDataRow *>rowsChanged, std::vector<SpDataRow *>rowsDeleted, bool merge,bool notifyDsets=true);

#ifdef TARGET_PLATFORM_IOS
    static void* SmartfaceAssetsLibrary();
    void ClearImageTable();
    void LoadImagesFromAssets(SpBrNuiBase* object, int startIndex);
    void ImagesLoaded(void *imagesAssetArray, SpBrNuiBase *object, int indexofimage);
    SpBrString* SaveCurrentImage();

    void *imageElements;
    int realImageCount;
    int min;
    int index;
    bool filling;
#endif
};

#endif /* SPBRDATATABLEIMAGES_H_ */
