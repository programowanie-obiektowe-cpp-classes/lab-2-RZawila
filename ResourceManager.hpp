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

    ResourceManager(const ResourceManager& rm1) = default;// konstruktor kopiujacy, defaultowy jak w intsrukcji

    ResourceManager& operator=(const ResourceManager& rm2)
    {
        if(&rm2 != this)
        {
            delete A;
            A = new Resource{*rm2.A};
        }
        return *this;
    }
    ResourceManager(ResourceManager&& rm3)// konstruktor przenosz¹cy
    {
        A = rm3.A;
        rm3.A = nullptr;
    }

    ResourceManager& operator=(ResourceManager&& rm4)// konstruktor przenosz¹cy
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
