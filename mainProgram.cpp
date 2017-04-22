#include <iostream>
#include "FirstClass.h"

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    for (int i=0; i< 20; i++) {
        cout << "This is number " << i << endl;
    }
    FirstClass *myClass = new FirstClass();
    myClass->myFunction();
    myClass->setANumber(12);
    cout << "The number that was set was " << myClass->getANumber() << endl;
    delete(myClass);

    // Practice CPP

    //// Sequence Container
    // Array Sequence Container

    // Vector Sequence Container

    // deque Sequence Container

    // forward_list Sequence Container

    // list Sequence Container

    //// Container Adaptors
    // Stack container adaptor

    // queue container adaptor

    // priority_queue adaptor

    //// Associative containers
    // set Associative container

    // multiset Associative container

    // map Associative container

    // multimap Associative container

    //// Unordered Associative containers
    // unordered set Associative container

    // unordered multiset Associative container

    // unordered map Associative container

    // unordered multimap Associative container


    return 0;
}