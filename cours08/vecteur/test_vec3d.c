#include <vec3d.h>
#include <stdio.h>

int main() {
    struct Vec3D v = {1.0, 2.0, 3.0};
    printf("Testing libvec3d\n");
    printf("----------------\n");
    printf("v = ");
    Vec3D_print(&v);
    printf("\n");
    printf("Square norm of v = %lf\n", Vec3D_squareNorm(&v));
    printf("Norm of v = %lf\n", Vec3D_norm(&v));
    printf("Is v a unit vector? %s\n",
           Vec3D_isUnit(&v) ? "yes" : "no");
    printf("Normalizing v...\n");
    Vec3D_normalize(&v);
    printf("v = ");
    Vec3D_print(&v);
    printf("\n");
    printf("Norm of v = %lf\n", Vec3D_norm(&v));
    printf("Is v a unit vector? %s\n",
           Vec3D_isUnit(&v) ? "yes" : "no");
    printf("----------------\n");

    struct Vec3D v1 = {-1.0, 2.0, -2.0};
    struct Vec3D v2 = {3.0, -1.0, 4.0};
    printf("v1 = ");
    Vec3D_print(&v1);
    printf("\n");
    printf("v2 = ");
    Vec3D_print(&v2);
    printf("\n");
    double scalar = 1.5;
    printf("Multiplying v1 by %lf\n", scalar);
    Vec3D_multiplyByScalar(&v1, scalar);
    printf("v1 = ");
    Vec3D_print(&v1);
    printf("\n");
    printf("Adding v2 to v1\n");
    Vec3D_add(&v1, &v2);
    printf("v1 = ");
    Vec3D_print(&v1);
    printf("\n");
    printf("----------------\n");
    return 0;
}
