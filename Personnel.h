#pragma once
/*
Personnel.h
Declaration file for the class Activity.
*/
#ifndef INCLUDED_PERSONNEL_H
#define INCLUDED_PERSONNEL_H
#include <string>

/**
 * Represents personnel responsible for overseeing activities and addressing issues.
 */
class Personnel {
public:
    /**
     * Gets the name of the personnel.
     */
    std::string getName() const;

    /**
     * Sets the name of the personnel.

     */
    void setName(const std::string& name);

    /**
     * Gets the ID of the personnel.
     */
    int getID() const;

    /**
     * Sets the ID of the personnel.
     */
    void setID(int id);

private:
    std::string name;
    int id;
};

#endif