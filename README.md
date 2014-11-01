binder-demo
===========

c++ 层实现binder服务例子

研究了binder服务的实现，想写个binder例子。
在网上和书上都看到有这类似的例子，照着写后，发现都不是自己想要的，不太符合源码的风格。
就从源码的binder服务精简来一个。
遇到的问题：
1 、frameworks/native/include/binder/IInterface.h:50: error: undefined reference to 'android::RefBase::~RefBase()'
    原因：没有添加只添加了libbinder 库，没添加libutils库，
2 、ITest.h TestService.h 头文件放在哪里，才能包含。
    一开是我是放在framework/av/include/media。
    引用时只需#include <media/ITest.h>即可。

    但是能不能放在自己定义的任意目录能？如：./test/include/test/ITest.h 
    #include "ITest.h" 编译找不到头文件。还需要在Android.mk指定头文件路径 
    LOCAL_C_INCLUDES := $(LOCAL_PATH)/../include/test即可。
3、我的例子里面打印log是用ALOGE等。有的代码库中是LOGE
写例子心得：尽管几行代码我也折腾来两三天。看会的，永远不一定就会了，动手才是应道理。



