#include <iostream>
#include <fstream>
#include <map>
#include <string>


void load_contacts(std::map<std::string, std::string>& contacts, const std::string& filename) {
    std::ifstream file(filename);
    std::string name, number;
    while (file >> name >> number){
        contacts[name] = number;
    }
}

void add_contact(std::map<std::string, std::string>& contacts, const std::string& name, const std::string& number) {
    contacts[name] = number;
}

bool remove_contact(std::map<std::string, std::string>& contacts, const std::string& name) {
    auto it = contacts.find(name);
    if (it != contacts.end()) {
        contacts.erase(it);
        return true;
    }
    return false;
}

bool search_contact(std::map<std::string, std::string>& contacts, const std::string& name) {
    auto it = contacts.find(name);
    if (it != contacts.end()) {
        std::cout << it->first << ": " << it->second <<std::endl;
        return true;
    }
    return false;
}

void display_contacts(const std::map<std::string, std::string>& contacts) {
    for (const auto& pair : contacts) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
}

int main() {
    std::map<std::string, std::string> contacts;
    load_contacts(contacts, "contacts.txt");
    display_contacts(contacts);
    std::cout << std::endl;

    add_contact(contacts, "Koki Ota", "000-000-0000");
    display_contacts(contacts);
    std::cout << std::endl;

    if (!remove_contact(contacts, "Koki Ota")) {
        std::cerr << "Contact not found for removal" << std::endl;
    }
    display_contacts(contacts);

    if (!search_contact(contacts, "Koki Ota")) {
        std::cerr << "Contact not found for removal" << std::endl;
    }
    display_contacts(contacts);

    return 0;
}