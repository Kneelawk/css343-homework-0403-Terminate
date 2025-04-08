#include "terminate.h"

#include <iostream>

void terminate(const std::string &name, uint32_t flags) {
    std::cout << "I'm sorry " << name << '.';

    if (flags & TerminateFlags::ITS_NOT_YOU_ITS_ME) {
        std::cout << " It's not you, it's me.";
    }
    if (flags & TerminateFlags::I_NEED_TO_FOCUS_ON_MYSELF) {
        std::cout << " I need to focus on myself.";
    }
    if (flags & TerminateFlags::THIS_IS_BETTER_FOR_EVERYONE) {
        std::cout << " This is better for everyone.";
    }
    if (flags & TerminateFlags::I_DONT_DESERVE_YOU_NEVER_HAVE) {
        std::cout << " I don't deserve you and I never have.";
    }
    if (flags & TerminateFlags::ESCORT_OUT_IMMEDIATE) {
        std::cout << " Please leave.";
    }
    if (flags & TerminateFlags::ZAP_WITH_LAZER) {
        std::cout << " ZAAPP!!";
    }
}
