#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager(){}; // konstruktor
    ~ResourceManager(){}; // destruktor?
    ResourceManager(const ResourceManager& rm1) = default;// konstruktor kopiujacy
    ResourceManager(ResourceManager&& rm2) = default;// konstruktor przenosz¹cy
    double get()
    {
        return A.get();
    };

private:
    Resource A;// classa ktora ma zarzadzac
};
