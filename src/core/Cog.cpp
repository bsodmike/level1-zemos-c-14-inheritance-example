//
// Created by Michael de Silva on 25/10/2017.
//

#include "Cog.h"

Cog::Cog() {

}


bool Cog::changes() {
    return anyChange();
}

void Cog::setChange(bool change) {
    Component::setChange(change);
}
