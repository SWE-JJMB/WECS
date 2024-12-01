#pragma once

#ifndef INCLUDED_WEDDING_H
#define INCLUDED_WEDDING_H

#include "Event.h"


class Wedding : public Event {
public:
    Wedding(int id, const std::string& date, float cost);
    void displayWeddingDetails() const;
};

#endif
