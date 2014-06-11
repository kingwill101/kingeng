#include "camera.hpp"

Camera::Camera(){

}

Camera::Camera(Object *obj)
{
    this->tracker = obj;

}

Camera::~Camera(){

}

void Camera::update(){
    this->setCoordinate(tracker->getCoordinate());
}
