LOCAL_PATH:= $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE:=testservice

LOCAL_SRC_FILES:=    \
    main_service.cpp \

LOCAL_SHARED_LIBRARIES:=  \
    libutils \
    libbinder \
    libtestservice \
    liblog \

LOCAL_C_INCLUDES := \
    $(LOCAL_PATH)/../include/test

include $(BUILD_EXECUTABLE)


