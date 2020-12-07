#include "./Establishment.hpp"
#include "./CRUD.hpp"

#include "./Establishment.cpp"
#include "./CheapBar.cpp"
#include "./CRUD.cpp"

#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print_menu() {
    cout << "1 -- push back" 
         << endl << "2 -- pop front" 
         << endl << "3 -- print" 
         << endl;
}

int main() {
    srand(time(NULL));
    CRUD crud;
    int selection = 0;
    while(1) {
        cout << "what are we doing?" << endl;
        print_menu();
        cin >> selection;
        switch (selection) {
            case 1: {
                cout << "Cheap bar: " << endl;
                CheapBar d;
                cout << d.get_id() << endl;
                cin >> d;
                crud.push_back(d);
                break;
            }
            case 2:
                crud.pop_front();
                break;
            case 3:
                crud.print();
                break;
            default:
                break;
        }
        selection = 0;
    }

    return 0;
}