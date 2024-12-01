#pragma once
/*
Activity.h
Declaration file for the class Activity.
*/
#ifndef INCLUDED_ACTIVITY_H
#define INCLUDED_ACTIVITY_H
#include <string>

/**
 * Represents an activity within an event.
 */
class Activity {
public:
    /**
     * Gets the name of the activity.
     */
    std::string getName() const;

    /**
     * Sets the name of the activity.
     */
    void setName(const std::string& name);

    /**
     * Gets the equipment needed for the activity.
     */
    std::string getEquipment() const;

    /**
     * Sets the equipment needed for the activity.
     */
    void setEquipment(const std::string& equipment);

    /**
     * Gets the start time of the activity.
     */
    std::string getStartTime() const;

    /**
     * Sets the start time of the activity.
     */
    void setStartTime(const std::string& startTime);

    /**
     * Gets the end time of the activity.
     */
    std::string getEndTime() const;

    /**
     * Sets the end time of the activity.
     */
    void setEndTime(const std::string& endTime);

private:
    std::string name;
    std::string equipment;
    std::string startTime;
    std::string endTime;
};

#endif