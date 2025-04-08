#ifndef TERMINATE_H
#define TERMINATE_H

#include <string>
#include <cstdint>

namespace TerminateFlags {
    constexpr uint32_t ITS_NOT_YOU_ITS_ME = 1;
    constexpr uint32_t I_NEED_TO_FOCUS_ON_MYSELF = 2;
    constexpr uint32_t THIS_IS_BETTER_FOR_EVERYONE = 4;
    constexpr uint32_t I_DONT_DESERVE_YOU_NEVER_HAVE = 8;
    constexpr uint32_t ESCORT_OUT_IMMEDIATE = 16;
    constexpr uint32_t ZAP_WITH_LAZER = 32;
}

/// Homework function
// FIXME: untestable
void terminate(const std::string &name, uint32_t flags);

#endif // TERMINATE_H
