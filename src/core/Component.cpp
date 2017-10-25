//
// Created by Michael de Silva on 25/10/2017.
//

#include "Component.h"

Component::Component() {

}

bool Component::anyChange() {
    return anyChanges;
}

void Component::setChange(bool change) {
    anyChanges = change;
}
