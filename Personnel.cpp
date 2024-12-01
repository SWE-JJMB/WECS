/*
Personnel.cpp
Declaration file for the class Personnel
*/
#include "Personnel.h"
/**
 * Gets the name of the personnel.
 */
std::string Personnel::getName() const {
    return name;
}

/**
 * Sets the name of the personnel.
 */
void Personnel::setName(const std::string& name) {
    this->name = name;
}

/**
 * Gets the ID of the personnel.
 */
int Personnel::getID() const {
    return id;
}

/**
 * Sets the ID of the personnel.
 */
void Personnel::setID(int id) {
    this->id = id;
}