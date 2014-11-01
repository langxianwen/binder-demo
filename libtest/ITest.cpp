
#include "ITest.h"

namespace android {

enum {
    DISCONNECT = IBinder::FIRST_CALL_TRANSACTION,
};

class BpTest: public BpInterface<ITest>
{
public:
    BpTest(const sp<IBinder>& impl)
        : BpInterface<ITest>(impl)
    {
    }

    void disconnect()
    {
        Parcel data, reply;
        data.writeInterfaceToken(ITest::getInterfaceDescriptor());
        remote()->transact(DISCONNECT, data, &reply);
    }

};

IMPLEMENT_META_INTERFACE(Test, "android.media.ITest");

// ----------------------------------------------------------------------

status_t BnTest::onTransact(
    uint32_t code, const Parcel& data, Parcel* reply, uint32_t flags)
{
    switch (code) {
        case DISCONNECT: {
            CHECK_INTERFACE(ITest, data, reply);
            disconnect();
            return NO_ERROR;
        } break;
        default:
            return BBinder::onTransact(code, data, reply, flags);
    }
}

// -------------------------------------------------------------- BnTest 

}; // namespace android
