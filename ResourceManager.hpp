#pragma once

#include "Resource.hpp"

class ResourceManager
{
public:
    ResourceManager(){}; // konstruktor
    ~ResourceManager() // destruktor?
    {
    delete A;//?
    }
    ResourceManager(const ResourceManager& rm1) = default;// konstruktor kopiujacy
    ResourceManager(const ResourceManager&& rm2) = default;// konstruktor przenosz¹cy
    double get()
    {
        return A.get();
    }

private:
    Resource() A;// classa ktora ma zarzadzac
};
