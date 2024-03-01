//
// Created by koki-ota on 24/02/29.
//

#include <vector>
#include "Team.h"

Team::Team() {}

void Team::add_member(const Person& person) {
    members.push_back(person);
}

std::vector<Person> Team::get_members() const {
    return members;
}
