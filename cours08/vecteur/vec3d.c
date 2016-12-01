#include "vec3d.h"
#include <stdio.h>
#include <assert.h>
#include <math.h>

void Vec3D_print(const struct Vec3D *v) {
    printf("(%lf, %lf, %lf)", v->x, v->y, v->z);
}

void Vec3D_add(struct Vec3D *v1,
               const struct Vec3D *v2) {
    assert(v1 != NULL);
    assert(v2 != NULL);
    v1->x += v2->x;
    v1->y += v2->y;
    v1->z += v2->z;
}

void Vec3D_multiplyByScalar(struct Vec3D *v,
                            double scalar) {
    assert(v != NULL);
    v->x *= scalar;
    v->y *= scalar;
    v->z *= scalar;
}

double Vec3D_scalarProduct(const struct Vec3D *v1,
                           const struct Vec3D *v2) {
    assert(v1 != NULL);
    assert(v2 != NULL);
    return v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
}

double Vec3D_squareNorm(const struct Vec3D *v) {
    assert(v != NULL);
    return v->x * v->x + v->y * v->y + v->z * v->z;
}

double Vec3D_norm(const struct Vec3D *v) {
    return sqrt(Vec3D_squareNorm(v));
}

bool Vec3D_isUnit(const struct Vec3D *v) {
    return Vec3D_squareNorm(v) == 1.0;
}

void Vec3D_normalize(struct Vec3D *v) {
    double norm = Vec3D_norm(v);
    v->x /= norm;
    v->y /= norm;
    v->z /= norm;
}
