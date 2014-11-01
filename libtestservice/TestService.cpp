#define LOG_NDEBUG 0
#define LOG_TAG "TestService"
#include <utils/Log.h>
#include <binder/IServiceManager.h>
#include "TestService.h"

namespace android {
void TestService::disconnect(){
    ALOGV("test disconnect");
}

void TestService::instantiate() {
    ALOGE("testService init");
    defaultServiceManager()->addService(
            String16("binder.test"), new TestService());
}

TestService::TestService(){
    int a =1;
    ALOGE("test created");

}

TestService::~TestService(){
    ALOGE("test destroyed");
}

} // namespace android

