#pragma once
/*
Cost.h
Declaration file for the class Cost.
*/
#ifndef INCLUDED_COST_H
#define INCLUDED_COST_H
#include <string>

/**
 * Represents the cost associated with an event.
 */
class Cost {
public:
    /** 
    * Returns the event name associated with the cost. 
    */
    std::string getEventName() const;

    /** 
    *Sets the event name associated with the cost. 
    */
    void setEventName(const std::string& eventName);

    /** 
    *Returns the total cost. 
    */
    int getTotal() const;

    /** 
    *Sets the total cost. 
    */
    void setTotal(int total);

private:
    std::string eventName;
    int total;
};

#endif