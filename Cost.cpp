/*
Cost.cpp
Declaration file for the class Cost
*/
#include "Cost.h"
/**
 * Gets the event name associated with the cost.
 */
std::string Cost::getEventName() const {
    return eventName;
}

/**
 * Sets the event name associated with the cost.
 */
void Cost::setEventName(const std::string& eventName) {
}

/**
 * Gets the total cost.
 */
int Cost::getTotal() const {
    return total;
}

/**
 * Sets the total cost.
 */
void Cost::setTotal(int total) {
}