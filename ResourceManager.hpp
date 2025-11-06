#pragma once

#include "Resource.hpp"

class ResourceManager
{
private:
    Resource* obiekt;

public:
    ResourceManager() : obiekt(new Resource())  {}
    ~ResourceManager() { delete obiekt; }
    ResourceManager(const ResourceManager& kopia) { obiekt = new Resource(*kopia.obiekt); }
    ResourceManager& operator=(const ResourceManager& kopia) {  
        if (this == &kopia)
        {
            return *this;
        };
        delete obiekt;
        obiekt = new Resource(*kopia.obiekt);
        return *this;
     }

    double get() { return obiekt->get(); }
};
