// Use the header only because compiling the source with the Arduino build system is difficult.
#define FMT_HEADER_ONLY

// Backup conflicting macros
#pragma push_macro("F")
#pragma push_macro("B1")

// Disable conflicting macros
#undef B1
#undef F

// Include the library
#include <fmt/core.h>

// Restore conflicting macros
#pragma pop_macro("F")
#pragma pop_macro("B1")