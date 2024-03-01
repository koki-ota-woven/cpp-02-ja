//
// Created by koki-ota on 24/02/29.
//

#pragma once

#include "./Person.h"
#include "./Team.h"

class Project {
public:
    Project();
    void add_team_member(const Person& person);
    void print_team_members() const;
private:
    Team team;
};
