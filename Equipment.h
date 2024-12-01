#pragma once
/*
Equipment.h
Declaration file for the class Room.
*/
#ifndef INCLUDED_EQUIPMENT_H
#define INCLUDED_EQUIPMENT_H
#include <string>

/**
 * Represents equipment used in activities.
 */
class Equipment {
public:
    /**
     * Gets the name of the equipment.
     */
    std::string getName() const;

    /**
     * Sets the name of the equipment.
     */
    void setName(const std::string& name);

    /**
     * Gets the type of the equipment.
     */
    std::string getType() const;

    /**
     * Sets the type of the equipment.
     */
    void setType(const std::string& type);

    /**
     * Gets the cost associated with using the equipment.
     */
    int getCost() const;

    /**
     * Sets the cost associated with using the equipment.
     */
    void setCost(int cost);

private:
    std::string name;
    std::string type;
    int cost;
};

#endif