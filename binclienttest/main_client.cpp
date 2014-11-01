#define LOG_TAG "testclient"

#define LOG_NDEBUG 0

#include <binder/IPCThreadState.h>
#include <binder/ProcessState.h>
#include <binder/IServiceManager.h>
#include <utils/Log.h>

#include "ITest.h"

using namespace android;

int main(int argc, char* argv[]){
    ALOGE("test client start");
    sp<IServiceManager> sm = defaultServiceManager();
    sp<IBinder> b;
    sp<ITest> sTest;

    do{
        b = sm->getService(String16("binder.test"));
        if(b!=0) break;
        ALOGE("TestService is not working, waiting...");
        usleep(500000);
    }while(true);

    sTest = interface_cast<ITest>(b);
    sTest->disconnect();

    ALOGE("test instantiate end");
    return 0; 

}

