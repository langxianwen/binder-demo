#define LOG_TAG "testservice"

#define LOG_NDEBUG 0

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "TestService.h"

using namespace android;

int main(int argc, char* argv[]){
    ALOGE("test instantiate start");
    TestService::instantiate();
    ProcessState::self()->startThreadPool();
    IPCThreadState::self()->joinThreadPool();
    ALOGE("test instantiate end");
    return 0; 

}

