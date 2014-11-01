LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:= libtestservice

LOCAL_SRC_FILES:=               \
    TestService.cpp           \

LOCAL_SHARED_LIBRARIES :=       \
    libbinder                   \
    liblog                      \
    libtest                     \
    libutils                    \

LOCAL_C_INCLUDES :=             \
    $(LOCAL_PATH)/../include/test

include $(BUILD_SHARED_LIBRARY)



