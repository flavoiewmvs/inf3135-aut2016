/**
 * File color.c
 *
 * Implements color.h.
 *
 * @author Alexandre Blondin Masse
 */
#include "color.h"
#include <string.h>

struct Color Color_colorFromName(const char *colorName) {
    struct Color color;
    if (strcmp(colorName, "black") == 0) {
        color.r = 0.000; color.g = 0.000; color.b = 0.000;
    } else if (strcmp(colorName, "red") == 0) {
        color.r = 1.000; color.g = 0.000; color.b = 0.000;
    } else if (strcmp(colorName, "green") == 0) {
        color.r = 0.000; color.g = 1.000; color.b = 0.000;
    } else if (strcmp(colorName, "blue") == 0) {
        color.r = 0.000; color.g = 0.000; color.b = 1.000;
   }
    return color;
}

bool Color_isNamedColor(const char *colorName) {
    return strcmp(colorName, "black")   == 0 ||
           strcmp(colorName, "red")     == 0 ||
           strcmp(colorName, "green")   == 0 ||
           strcmp(colorName, "blue")    == 0;
 }
