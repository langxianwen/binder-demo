
#ifndef ANDROID_ITest_H
#define ANDROID_ITest_H

#include <utils/RefBase.h>
#include <binder/IInterface.h>
#include <binder/Parcel.h>

namespace android {

class Parcel;
class Surface;
class IStreamSource;
class IGraphicBufferProducer;

class ITest: public IInterface
{
public:
    DECLARE_META_INTERFACE(Test);

    virtual void            disconnect() = 0;
};

// ----------------------------------------------------------------------------

class BnTest: public BnInterface<ITest>
{
public:
    virtual status_t    onTransact( uint32_t code,
                                    const Parcel& data,
                                    Parcel* reply,
                                    uint32_t flags = 0);
};

}; // namespace android

#endif
