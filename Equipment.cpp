/*
Equipment.cpp
Declaration file for the class Guest.
*/
#include "Equipment.h"

/**
 * Gets the name of the equipment.
 */
std::string Equipment::getName() const {
    return name;
}

/**
 * Sets the name of the equipment.
 */
void Equipment::setName(const std::string& name) {
}

/**
 * Gets the type of the equipment.
 */
std::string Equipment::getType() const {
    return type;
}

/**
 * Sets the type of the equipment.
 */
void Equipment::setType(const std::string& type) {
}

/**

 * @return Cost of the equipment.
 */
int Equipment::getCost() const {
    return cost;
}

/**
 * Sets the cost associated with using the equipment.
 */
void Equipment::setCost(int cost) {
}