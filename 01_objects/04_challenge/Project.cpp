//
// Created by koki-ota on 24/02/29.
//

#include <iostream>

#include "Person.h"
#include "Project.h"

Project::Project() {};

void Project::add_team_member(const Person& person) {
    team.add_member(person);
}

void Project::print_team_members() const {
    std::vector<Person> members = team.get_members();
    for (Person member: members) {
        std::cout << member.get_name() << std::endl;
    }
}
