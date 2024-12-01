#pragma once
/*
Business.h
Declaration file for the class Business.
*/
#ifndef INCLUDED_BUSINESS_H
#define INCLUDED_BUSINESS_H
#include <string>

/**
 * Represents a business organizing an event, including a list of invited guests.
 */
class Business {
public:
    /**
     * Gets the name of the business.
     * @return The name of the business.
     */
    std::string getName() const;

    /**
     * Sets the name of the business.
     * @param name Name to set for the business.
     */
    void setName(const std::string& name);

    /**
     * Gets the phone number of the business.
     * @return The phone number of the business.
     */
    int getPhone() const;

    /**
     * Sets the phone number of the business.
     * @param phone Phone number to set.
     */
    void setPhone(int phone);

private:
    std::string name;
    int phone;
};

#endif