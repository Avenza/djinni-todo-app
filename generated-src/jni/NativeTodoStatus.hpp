// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from todolist.djinni

#pragma once

#include "djinni_support.hpp"
#include "todo_status.hpp"

namespace djinni_generated {

class NativeTodoStatus final : ::djinni::JniEnum {
public:
    using CppType = ::todolist::TodoStatus;
    using JniType = jobject;

    using Boxed = NativeTodoStatus;

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return static_cast<CppType>(::djinni::JniClass<NativeTodoStatus>::get().ordinal(jniEnv, j)); }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, CppType c) { return ::djinni::JniClass<NativeTodoStatus>::get().create(jniEnv, static_cast<jint>(c)); }

private:
    NativeTodoStatus() : JniEnum("com/mycompany/todolist/TodoStatus") {}
    friend ::djinni::JniClass<NativeTodoStatus>;
};

}  // namespace djinni_generated
