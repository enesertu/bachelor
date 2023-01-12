#include "Bachelor.h"

Bachelor::Bachelor(const string &first, const string &last, const string &uni, const string &title)
{
    setLastName(last);
    setUniversity(uni);
    setTitle(title);
    firstName = first;
}

Bachelor::~Bachelor()
{
    //destructor
}

void Bachelor::setLastName(const string &last)
{
    lastName = last;
}

void Bachelor::setUniversity(const string &uni)
{
    university = uni;
}

void Bachelor::setTitle(const string &title)
{
    this->title = title;
}

string Bachelor::getFirstName() const
{
    return firstName;
}

string Bachelor::getLastName() const
{
    return lastName;
}

string Bachelor::getUniversity() const
{
    return university;
}

string Bachelor::getTitle() const
{
    return title;
}

void Bachelor::printResume() const
{
    cout << "Name: " << getFirstName() << " " << getLastName() << endl;
    cout << "University: " << getUniversity() << endl;
    cout << "Title: " << getTitle() << endl;
}

