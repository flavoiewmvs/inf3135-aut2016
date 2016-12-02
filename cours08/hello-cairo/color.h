/**
 * File color.h
 *
 * Basic representation and handling of RGB colors. An RGB color is a color
 * represented by its level of red, green and blue, which are real numbers
 * between 0.0 and 1.0.
 *
 * @author Alexandre Blondin Masse
 */
#ifndef COLOR_H
#define COLOR_H

#include <stdbool.h>

// -------------- //
// Data structure //
// -------------- //

struct Color { // An RGB triplet
    double r;  // The level of red
    double g;  // The level of green
    double b;  // The level of blue
};

// --------- //
// Functions //
// --------- //

/**
 * Returns an RGB triple for the named color.
 *
 * Warning: Before calling this function, make sure that
 * ``Color_isNamedColor(colorName)`` returns true.
 *
 * @param colorName  The name of the color
 * @return           An RGB triple for the named color
 * @pre              The color name must be valid
 */
struct Color Color_colorFromName(const char *colorName);

/**
 * Returns true if the given color name is valid.
 *
 * Warning: The name must be given in lower case.
 *
 * @param colorName  The name of the color
 * @return           True if the name is valid
 */
bool Color_isNamedColor(const char *colorName);

#endif
