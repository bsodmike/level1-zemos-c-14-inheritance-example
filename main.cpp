#include <iostream>
#include "src/core/Cog.h"

int main() {
    auto component = std::make_shared<Component>();
    auto cog = std::make_shared<Cog>();

    bool componentChanges = component->anyChange();
    std::cout << "Component's changes: " << componentChanges << std::endl;

    bool cogChanges = cog->changes();
    std::cout << "Cog's (original) changes: " << cogChanges << std::endl;

    cog->setChange(true);
    cogChanges = cog->changes();

    std::cout << "Cog's changes: " << cogChanges << std::endl;

    return 0;
}