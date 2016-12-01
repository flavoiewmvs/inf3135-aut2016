#ifndef VEC3D_H
#define VEC3D_H

#include <stdbool.h>

// -------------- //
// Data structure //
// -------------- //

struct Vec3D { // A 3D vector
    double x;  // x-coordinate
    double y;  // y-coordinate
    double z;  // z-coordinate
};

// --------- //
// Functions //
// --------- //

/**
 * Prints the given vector to stdout.
 *
 * @param v  A pointer to the vector
 */
void Vec3D_print(const struct Vec3D *v);

/**
 * Adds the vector `v2` to `v1`.
 *
 * @param v1  A pointer to a vector
 * @param v2  A pointer to the vector to add
 */
void Vec3D_add(struct Vec3D *v1,
               const struct Vec3D *v2);

/**
 * Multiplies the vector `v` by `scalar`.
 *
 * @param v       A pointer to the vector
 * @param scalar  A scalar (i.e. double)
 */
void Vec3D_multiplyByScalar(struct Vec3D *v,
                            double scalar);

/**
 * Returns the scalar product of two vectors.
 *
 * If `v1 = (x1, y1, z1)` and `v2 = (x2, y2, z2)`,
 * then the scalar product of `v1` and `v2` is the
 * number `x1x2 + y1y2 + z1z2`.
 *
 * @param v1  A pointer to the first vector
 * @param v2  A pointer to the second vector
 * @return    The scalar product of `v1` and `v2`
 */
double Vec3D_scalarProduct(const struct Vec3D *v1,
                           const struct Vec3D *v2);

/**
 * Returns the square norm of `v`.
 *
 * If `v = (x, y, z)`, then the square norm of `v`
 * is the number `x^2 + y^2 + z^2`.
 *
 * @param v  A pointer to the vector
 * @return   The norm of `v`
 */
double Vec3D_norm(const struct Vec3D *v);

/**
 * Returns the norm of `v`.
 *
 * If `v = (x, y, z)`, then the norm of `v` is the
 * number `\sqrt{x^2 + y^2 + z^2}`.
 *
 * @param v  A pointer to the vector
 * @return   The square norm of `v`
 */
double Vec3D_squareNorm(const struct Vec3D *v);

/**
 * Returns true if and only if `v` is a unit vector.
 *
 * A unit vector is a vector whose norm is one.
 *
 * @param v  A pointer to the vector
 * @return   The value true if and only if `v` is unit
 */
bool Vec3D_isUnit(const struct Vec3D *v);

/**
 * Transforms the given vector to a unit vector.
 *
 * The direction is preserved, only the norm of the vector
 * is modified. This is not defined if `v = (0, 0, 0)` (in
 * that case, the vector is unchanged).
 *
 * @param v  A pointer to the vector
 */
void Vec3D_normalize(struct Vec3D *v);

#endif
