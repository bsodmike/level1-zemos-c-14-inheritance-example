#include <iostream>
#include "src/core/Cog.h"

int main() {

    auto component = std::make_shared<Component>();
    auto cog = std::make_shared<Cog>();

    bool componentChanges = component->anyChange();

    cog->setChange(true);
    bool cogChanges = cog->changes();

    std::cout << "Component's changes: " << componentChanges << std::endl;
    std::cout << "Cog's changes: " << cogChanges << std::endl;
    return 0;
}