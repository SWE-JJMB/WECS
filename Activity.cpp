/*
Activity.cpp
Declaration file for the class Guest.
*/
#include "Activity.h"

/**
 * Gets the name of the activity.
 */
std::string Activity::getName() const {
    return name;
}

/**
 * Sets the name of the activity.
 */
void Activity::setName(const std::string& name) {
}

/**
 * Gets the equipment needed for the activity.
 */
std::string Activity::getEquipment() const {
    return equipment;
}

/**
 * Sets the equipment needed for the activity.
 */
void Activity::setEquipment(const std::string& equipment) {
}

/**
 * Gets the start time of the activity.
 */
std::string Activity::getStartTime() const {
    return startTime;
}

/**
 * Sets the start time of the activity.
 */
void Activity::setStartTime(const std::string& startTime) {
}

/**
 * Gets the end time of the activity.
 */
std::string Activity::getEndTime() const {
    return endTime;
}

/**
 * Sets the end time of the activity.
 */
void Activity::setEndTime(const std::string& endTime) {
}