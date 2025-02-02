// SPDX-FileCopyrightText: 2000-2024 Xavier Leclercq
// SPDX-License-Identifier: BSL-1.0

#ifndef GUARD_ISHIKO_CPP_BASEPLATFORM_OS_HPP
#define GUARD_ISHIKO_CPP_BASEPLATFORM_OS_HPP

#include <string>

#if defined(__linux__)
    #define ISHIKO_OS_LINUX 1
    #define ISHIKO_OS ISHIKO_OS_LINUX
#elif defined(_WIN32)
    #define ISHIKO_OS_WINDOWS 2
    #define ISHIKO_OS ISHIKO_OS_WINDOWS
#elif defined(__CYGWIN__)
    #define ISHIKO_OS_CYGWIN 3
    #define ISHIKO_OS ISHIKO_OS_CYGWIN
#else
    #error Unsupported or unrecognized OS
#endif

namespace Ishiko
{
    class OS
    {
    public:
        static const std::string& Family();
    };
}

#endif
