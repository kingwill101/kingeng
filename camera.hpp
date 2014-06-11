#ifndef CAMERA_HPP
#define CAMERA_HPP
#include <types.hpp>
#include <object.hpp>

class Camera : public Object
{
public:
    Camera();
    Camera(Object *);
    virtual ~Camera();
    void update();
protected:
    Object *tracker;

  };
#endif // CAMERA_HPP
