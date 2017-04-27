#ifndef __SMF_CLOUD_EMULATOR_ANDROID_HDR__
#define __SMF_CLOUD_EMULATOR_ANDROID_HDR__

#include "CloudEmulator/Core/CloudEmulator.h"
#include "CloudEmulator/Core/AsyncWebSocket.h"

class CloudEmulatorAndroid : public CloudEmulator {
    public:
        CloudEmulatorAndroid (std::string info, std::string host, int port);
        ~CloudEmulatorAndroid();
        void ClearAllEmulatorRes();
        void onChunkReceived (unsigned char* chunk, int size, bool isFirst, bool isFinal, int offset);
        void onFilesReceived (unsigned char* fileBinaries, int size);
        void onFileInfoReceived (int message);
        void SetEmulatorProjectName(std::string name);
        void SetEmulatorAppAndBuildVersions(std::string version, int versionCode);
        void onError (std::string s);
        void onTimeout ();

    private:
        RequestResponseWebSocket* debuggingSocket;
        void saveEmulatorUrl(std::string url);
};

#endif
