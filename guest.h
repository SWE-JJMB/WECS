#pragma once
/*
Guest.h
Declaration file for the class Guest.
*/
#ifndef INCLUDED_GUEST_H
#define INCLUDED_GUEST_H
#include <string>

/**
 * Represents a guest invited to an event.
 */
class Guest {
public:
    /**
     * Gets the name of the guest.
     */
    std::string getName() const;

    /**
     * Sets the name of the guest.
     */
    void setName(const std::string& name);

    /**
     * Gets the guest's phone number.
     */
    int getPhone() const;

    /**
     * Sets the guest's phone number.
     */
    void setPhone(int phone);

    /**
     * Gets the guest's current activity.
     */
    std::string getActivity() const;

    /**
     * Sets the guest's current activity.
     */
    void setActivity(const std::string& activity);

private:
    std::string name;
    int phone;
    std::string activity;
};

#endif