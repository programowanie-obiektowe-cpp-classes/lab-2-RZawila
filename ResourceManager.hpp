#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager()
    {
        A = new Resource;
    }; // konstruktor

    ~ResourceManager()
    {
        delete A;
    }; // destruktor?

    ResourceManager(const ResourceManager& rm1)
    {

            A = new Resource{*rm1.A};

    };// konstruktor kopiujacy

    ResourceManager& operator=(const ResourceManager& rm2)// konstruktor kopujacy przypisania?
    {
        if(&rm2 != this)
        {
            delete A;
            A = new Resource{*rm2.A};
        }
        return *this;
    }
    ResourceManager(ResourceManager&& rm3)// konstruktor przenoszący
    {
        A = rm3.A;
        rm3.A = nullptr;
    }

    ResourceManager& operator=(ResourceManager&& rm4)// konstruktor przenoszący
    {
        delete A;
        A = rm4.A;
        rm4.A = nullptr;
        return *this;
    }
    double get()
    {
        return A->get();
    };

private:
    Resource* A;// classa ktora ma zarzadzac
};
