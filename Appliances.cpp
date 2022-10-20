#include "Appliances.h"
#include <iostream>

Appliances::Appliances(int weight) : _weight(weight)
{
}

void Appliances::showSpec()
{
    std::cout << "Weight: " << _weight << std::endl;
}