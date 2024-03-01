//
// Created by koki-ota on 24/02/29.
//

#pragma once

#include <vector>
#include "./Person.h"

class Team {
    public:
        Team();
        void add_member(const Person& person);
        std::vector<Person> get_members() const;
    private:
        std::vector<Person> members;
};
