/*
Event.cpp
Declaration file for the class Event.
*/
#include "Event.h"

/*
Returns the type of the event.
*/
std::string Event::getType() const {
    return "";
}

/*
Sets the type of the event.
*/
void Event::setType(const std::string& type) {

}

/*
Returns the date of the event.
*/
std::string Event::getDate() const {
    return date;
}

/*
Sets the date of the event.
*/
void Event::setDate(const std::string& date) {
    this->date = date;
}

/*
Returns the cost of the event.
*/
float Event::getCost() const {
    return cost;
}

/*
Sets the cost of the event.
*/
void Event::setCost(float cost) {
    this->cost = cost;
}

int Event::getID() const {
    return ID;
}

void Event::setID(int id) {
    this->ID = id;
}
