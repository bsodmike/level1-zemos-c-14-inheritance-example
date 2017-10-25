//
// Created by Michael de Silva on 25/10/2017.
//

#ifndef LEVEL1_INHERITANCE_EXAMPLE_COG_H
#define LEVEL1_INHERITANCE_EXAMPLE_COG_H

#include "Component.h"

class Cog : Component {

public:
    Cog();
    void setChange(bool change);
    bool changes();
};


#endif //LEVEL1_INHERITANCE_EXAMPLE_COG_H
