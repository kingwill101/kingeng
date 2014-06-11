#ifndef MANAGER_HPP
#define MANAGER_HPP

#include <vector>
#include "object.hpp"
#include <string>
#include <map>

class Manager
{
public:
    static Manager *getInstance();
    void addObject(Object *);
    void remove(Object*);
    void update();
    void cleanup();
private:
    Manager();
    std::vector<Object *> *container;
    static Manager *instance;

};

#endif // MANAGER_HPP
