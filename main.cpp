#include <iostream>
#include "Wedding.h"
#include "Manager.h"
#include "Personnel.h"

using namespace std;

int main() {
    
    Wedding myWedding(101, "12-15-2024", 15000.50);
    cout << "Wedding Details: \n";
    myWedding.displayWeddingDetails();
    cout << "\n";

    
    Manager eventManager;
    eventManager.setName("Jordan Kirby");
    eventManager.setID(1);
    eventManager.setNumEventsManaged(5);
    cout << "Manager Details: \n";
    cout << "Name: " << eventManager.getName() << "\n";
    cout << "ID: " << eventManager.getID() << "\n";
    cout << "Number of Events Managed: " << eventManager.getNumEventsManaged() << "\n";
    cout << "\n";

    
    Personnel staff;
    staff.setName("Joshua Ciolli");
    staff.setID(2);
    cout << "Personnel Details: \n";
    cout << "Name: " << staff.getName() << "\n";
    cout << "ID: " << staff.getID() << "\n";
    cout << "\n";

    
    cout << "=== Final Program Output ===\n";
    cout << "Event Type: Wedding\n";
    cout << "Event Date: " << myWedding.getDate() << "\n";
    cout << "Event Cost: $" << myWedding.getCost() << "\n";
    cout << "Managed by: " << eventManager.getName() << " (ID: " << eventManager.getID() << ")\n";

    return 0;
}