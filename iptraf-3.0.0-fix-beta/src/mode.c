/*
 * mode.c - a simple function that returns "kbits" or "kbytes" based on a
 *          numeric argument.
 */

#include <string.h>
#include "options.h"

void dispmode(int mode, char *result)
{
    switch (mode) {
        case ACTIVITY_MODE_KBITS:  strcpy(result, "Kb");  break;
        case ACTIVITY_MODE_KBYTES: strcpy(result, "KB"); break;
        case ACTIVITY_MODE_MBITS:  strcpy(result, "Mb");  break;
        case ACTIVITY_MODE_MBYTES: strcpy(result, "MB"); break;
        case ACTIVITY_MODE_GBITS:  strcpy(result, "Gb");  break;
        case ACTIVITY_MODE_GBYTES: strcpy(result, "GB"); break;
    }
}
