#include <terminate.h>

int main() {
    terminate("Cyan", TerminateFlags::ZAP_WITH_LAZER | TerminateFlags::ESCORT_OUT_IMMEDIATE);
    return 0;
}
