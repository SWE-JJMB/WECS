#pragma once
/*
Activity.h
Declaration file for the class Room.
*/
#ifndef INCLUDED_ROOM_H
#define INCLUDED_ROOM_H
#include <string>

/**
 * Represents a room where activities take place.
 */
class Room {
public:
    /**
     * Gets the name of the room.
     */
    std::string getName() const;

    /**
     * Sets the name of the room.
     */
    void setName(const std::string& name);

    /**
     * Gets the cost associated with using the room.
     */
    int getCost() const;

    /**
     * Sets the cost associated with using the room.
     */
    void setCost(int cost);

private:
    std::string name;
    int cost;
};

#endif