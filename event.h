#pragma once
/*
Event.h
Declaration file for the class Event.
*/
#ifndef INCLUDED_EVENT_H
#define INCLUDED_EVENT_H
#include <string>

/**
 * Represents an organized wedding or event held at the WEC.
 */
class Event {
public:
    /**
     * Gets the type of the event.
     */
    std::string getType() const;

    /**
     * Sets the type of the event.
     */
    void setType(const std::string& type);

    /**
     * Gets the date of the event.
     */
    std::string getDate() const;

    /**
     * Sets the date of the event.
     */
    void setDate(const std::string& date);

    /**
     * Gets the cost of the event.
     */
    float getCost() const;

    /**
     * Sets the cost of the event.
     */
    void setCost(float cost);

    int getID() const;
    void setID(int id);

private:
    int ID;
    std::string type;
    std::string date;
    float cost;
};

#endif 