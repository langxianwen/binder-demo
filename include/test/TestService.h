
#ifndef ANDROID_TESTSERVICE_H
#define ANDROID_TESTSERVICE_H

#include "ITest.h"

namespace android {

class TestService : public BnTest
{

public:
    static void instantiate();
    void disconnect();
private:

// ----------------------------------------------------------------------------
                            TestService();
    virtual                 ~TestService();
};

// ----------------------------------------------------------------------------

}; // namespace android

#endif 
