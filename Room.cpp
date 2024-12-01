/*
Room.cpp
Declaration file for the class Guest.
*/
#include "Room.h"

/**
 * Gets the name of the room.
 */
std::string Room::getName() const {
    return name;
}

/**
 * Sets the name of the room.
 */
void Room::setName(const std::string& name) {
}

/**
 * Gets the cost associated with using the room.
 */
int Room::getCost() const {
    return cost;
}

/**
 * Sets the cost associated with using the room.
 */
void Room::setCost(int cost) {
}