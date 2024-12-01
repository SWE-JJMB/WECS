#include "Wedding.h"
#include <iostream>
#include <iomanip>


Wedding::Wedding(int id, const std::string& date, float cost) {
    setID(id);
    setDate(date);
    setCost(cost);
}


void Wedding::displayWeddingDetails() const {
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Wedding ID: " << getID() << std::endl;
    std::cout << "Date: " << getDate() << std::endl;
    std::cout << "Cost: $" << getCost() << std::endl;
}