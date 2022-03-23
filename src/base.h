//
// Created by ribre on 21/03/2022.
//

#ifndef LAB01_INHERITANCE_BRENESRI_BASE_H
#define LAB01_INHERITANCE_BRENESRI_BASE_H
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

class base {
private:
    string name;
public:
    //Constructor
    base();
    //Destructor
    virtual ~base();
    //function
    virtual void do_something();
    //set and get
    const string &getName() const;
    void setName(const string &name_);
};


#endif //LAB01_INHERITANCE_BRENESRI_BASE_H
