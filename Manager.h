#pragma once

#ifndef INCLUDED_MANAGER_H
#define INCLUDED_MANAGER_H

#include "Personnel.h"

class Manager : public Personnel {
public:
    int getNumEventsManaged() const;

    void setNumEventsManaged(int numEvents);

private:
    int numEventsManaged;
};

#endif