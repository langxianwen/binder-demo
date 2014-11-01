LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:=testclient

LOCAL_SRC_FILES:=    \
    main_client.cpp \

LOCAL_SHARED_LIBRARIES:=  \
    libutils \
    libbinder \
    libtest \
    liblog \

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../include/test

include $(BUILD_EXECUTABLE)
