//
//  SmfBlob.h
//  Smartface
//
//  Created by Ugur Kilic on 08/12/2014.
//

#ifndef __SMF_BLOB__
#define __SMF_BLOB__

#include <string>

class SmfBlob {
public:
    SmfBlob();
    ~SmfBlob();
    SmfBlob(const SmfBlob* obj);

public:
    int GetSize();
    void SetData(unsigned char *data, int len);
    unsigned char* GetData();

    SmfBlob* Slice(int start, int end);
    char* Base64String();
    void  FromBase64String(char *base64data);
    void  FromString(char* stringData);
    void  AppendBase64String(char* base64data);
    void  AppendString(char* stringData);

public:
    std::string type;
    std::string lineEndings;

private:
    unsigned char *blobData;
    int length;
};

#endif /* __SMF_BLOB__ */
