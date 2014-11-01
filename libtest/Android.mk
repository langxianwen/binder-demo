LOCAL_PATH:= $(call my-dir)


include $(CLEAR_VARS)

LOCAL_SRC_FILES:= \
    ITest.cpp \

	#liblog libbinder
LOCAL_SHARED_LIBRARIES := \
	liblog libbinder libutils  \

LOCAL_C_INCLUDES+= \
    $(LOCAL_PATH)/../include/test

LOCAL_MODULE:= libtest

include $(BUILD_SHARED_LIBRARY)
