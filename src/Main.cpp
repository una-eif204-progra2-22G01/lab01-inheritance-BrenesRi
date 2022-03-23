//
// Created by ribre on 22/03/2022.
//
#include <iostream>  // allows program to output data to the screen
#include "Derived1.h"
#include "Derived2.h"
// function main begins program execution
int main() {
    std::cout << "Welcome to the UNA!" << std::endl;
    std::cout << "Thank you, teacher!" << std::endl;

    Derived1 derived1;
    derived1.setName("Jose");
    derived1.do_something();

    Derived2 derived2;
    derived2.setName("Pablo");
    derived2.do_something();

}  // end function main
