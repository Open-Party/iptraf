/*
 * mode.c - a simple function that returns "kbits" or "kbytes" based on a
 *          numeric argument.
 */

#include <string.h>
#include "options.h"

void dispmode(int mode, char *result)
{
    switch (mode) {
        case ACTIVITY_MODE_KBITS:  strcpy(result, "kbits");  break;
        case ACTIVITY_MODE_KBYTES: strcpy(result, "kbytes"); break;
        case ACTIVITY_MODE_MBITS:  strcpy(result, "mbits");  break;
        case ACTIVITY_MODE_MBYTES: strcpy(result, "mbytes"); break;
        case ACTIVITY_MODE_GBITS:  strcpy(result, "gbits");  break;
        case ACTIVITY_MODE_GBYTES: strcpy(result, "gbytes"); break;
    }
}
