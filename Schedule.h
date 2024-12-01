#pragma once
/*
Schedule.h
Declaration file for the class Cost.
*/
#ifndef INCLUDED_SCHEDULE_H
#define INCLUDED_SCHEDULE_H
#include <string>

/**
 * Represents the schedule for an event.
 */
class Cost {
public:
    /**
      * Gets the date for the schedule.
      */
    std::string getDate() const;

    /**
     * Sets the date of the schedule.
     */
    void setDate(const std::string& date);

    /**
      * Gets the date for the schedule.
      */
    std::string getRoom() const;

    /**
     * Sets the date of the schedule.
     */
    void setRoom(const std::string& room);

private:
    std::string date;
    std::string room;
};

#endif