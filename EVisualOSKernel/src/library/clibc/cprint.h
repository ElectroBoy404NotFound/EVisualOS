#pragma once

#include <stdint.h>

#include "../../ColorCodes.h"
#include "../../Framebuffer.h"
#include "../../simpleFonts.h"
#include "../../math.h"

typedef __builtin_va_list va_list;
#define va_start(ap, X) __builtin_va_start(ap, X)
#define va_arg(ap, type) __builtin_va_arg(ap, type)
#define va_end(ap) __builtin_va_end(ap)

void cprintf(const char* fmt, ...);