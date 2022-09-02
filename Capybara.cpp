#include "Capybara.h"

Capybara::Capybara()

{

this->capyname = "?";

this->capyage = 0;

}

string Capybara::getName(){ return this->capyname; }

void Capybara::setName(string name){ this->capyname = name; }

int Capybara::getAge(){ return this->capyage; }

void Capybara::setAge(int age){ this->capyage = age; }

string Capybara::toString()

{

stringstream ss;

ss << "Name: " << getName() << ", Age: " << getAge();

return ss.str();

}

