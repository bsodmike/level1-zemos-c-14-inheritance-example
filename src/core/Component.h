//
// Created by Michael de Silva on 25/10/2017.
//

#ifndef LEVEL1_INHERITANCE_EXAMPLE_COMPONENT_H
#define LEVEL1_INHERITANCE_EXAMPLE_COMPONENT_H


class Component {
    bool anyChanges = false;

public:
    Component();
    bool anyChange();
    void setChange(bool change);
};


#endif //LEVEL1_INHERITANCE_EXAMPLE_COMPONENT_H
