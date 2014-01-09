#ifndef TYPES_H
#define TYPES_H
#include <SDL2/SDL.h>

typedef unsigned int kUint;
typedef float kFloat;
typedef double kDouble;

typedef struct{
    kFloat x;
    kFloat y;
}kvec2f;


typedef struct{
    kFloat x;
    kFloat y;
    kFloat z;
}kvec3f;

typedef struct{

    kDouble x;
    kDouble y;
}kvec2d;

typedef struct{
    kDouble x;
    kDouble y;
    kDouble z;
}kvec3d;

typedef struct{
    kvec2f v1;
    kvec2f v2;
}kLine;

typedef struct{
   kvec2f v1;
   kvec2f v2;
   kvec2f v3;
}kTriangle;

typedef struct{
   kvec2f v1;
   kvec2f v2;
   kFloat w;
   kFloat h;
}kSquare;

typedef struct{
    kvec2f pos;
    kvec2f r;//radius
    kvec2f angle; //angle
}kCircle;

typedef struct{
    kFloat r;
    kFloat g;
    kFloat b;
    kFloat a;
}kColor;

void initializeColors();


#endif // TYPES_H
