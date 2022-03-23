//
// Created by ribre on 21/03/2022.
//
#include "base.h"
#include <iostream>
using namespace std;

base::base(){}

base::~base() {}

 void base::do_something() {}

const string &base::getName() const {
    return name;
}
void base::setName(const string &name_) {
    base::name = name_;
}