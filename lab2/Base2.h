#pragma once
#include <iostream>

enum MType {
    TDir2=0, TFile2=1
};

class Base2 {
protected:
    std::string name;
public:
    std::string getName() const { return this->name; };
    virtual int mType() const = 0;
    virtual void ls(int indent) const = 0;
};
