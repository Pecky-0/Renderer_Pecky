#ifndef RAY_H
#define RAY_H

#include "vec3.h"

class ray {
  public:
    ray() {}

    ray(const point3& origin, const vec3& direction, const double tm) : 
      orig(origin), dir(direction), tm(tm){}
      
    ray(const point3& origin, const vec3& direction) : ray(origin, direction, 0) {}

    const point3& origin() const  { return orig; }
    const vec3& direction() const { return dir; }

    point3 at(double t) const {
        return orig + t*dir;
    }

    double time() const {
        return tm;
    }

  private:
    point3 orig;
    vec3 dir;
    double tm;
};

#endif