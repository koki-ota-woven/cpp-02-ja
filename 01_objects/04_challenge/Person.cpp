//
// Created by koki-ota on 24/02/29.
//

#include "Person.h"

Person::Person(std::string name): name(name) {}

std::string Person::get_name() const {
    return name;
}
