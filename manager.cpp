#include "manager.hpp"
Manager* Manager::instance = NULL;
Manager::Manager()
{
    this->container = new std::vector<Object *>;
}

Manager *Manager::getInstance(){
    if(instance == NULL){
        instance = new Manager();

        return instance;
    }
    return instance;

}

void Manager::addObject(Object *obj){
    this->container->push_back(obj);
}

void Manager::update(){
    for(std::vector<Object *>::iterator iter= this->container->begin(); iter != this->container->end(); iter++){
        (*iter)->update();
    }
}
void Manager::cleanup(){
    for(std::vector<Object *>::iterator iter= this->container->begin(); iter != this->container->end(); iter++){
       delete (*iter);

    }
    this->container->empty();
}



