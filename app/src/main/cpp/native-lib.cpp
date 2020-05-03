#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Kotlin_com_example_home_hackathon_ui_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}