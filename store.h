#ifndef STORE_H
#define STORE_H

using namespace std;

#include <string>
#include <iostream>

class Store {
    public:
        Store();
        ~Store();
        void viewInventory();
        void customerHistory(int customer);
        void readInventory(string filename);
        void readCustomers(string filename);
        void readCommands(string filename);
};

#endif // STORE_H