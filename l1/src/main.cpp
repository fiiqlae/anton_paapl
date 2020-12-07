#include "./Establishment.hpp"
#include "./CRUD.hpp"

#include "./Establishment.cpp"
#include "./CRUD.cpp"

#include <iostream>
#include <chrono>
#include <stdlib.h>
#include <time.h>

using namespace std;

void print_menu() {
    cout << "1 -- add" 
         << endl << "2 -- alter by id" 
         << endl << "3 -- select * from establishments" 
         << endl << "4 -- sort by id" 
         << endl << "5 -- sort by value"
         << endl << "6 -- delete from establishments"
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
                cout << "Establishment: " << endl;
                Establishment d;
                cout << d.get_id() << endl;
                cin >> d;
                crud.add(d);
                break;
            }
            case 2: {
                long id = 0;
                cin >> id;
                crud.update(id);
                break;
            }
            case 3:
                crud.print();
                break;
            case 4:
                crud.sort_by_id();
                break;
            case 5:
                crud.sort_by_name();
                break;
            case 6: {
                cout << "ID: ";
                long id = 0;
                cin >> id;
                crud.delete_record(id);
                break;
            }
            default:
                break;
        }
        selection = 0;
    }

    return 0;
}