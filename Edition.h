#ifndef EDITION_H_INCLUDED
#define EDITION_H_INCLUDED
#include <iostream>
#include<string>

using namespace std;

class Edition{
protected:
    string name;
    int year;
public:
    Edition();
    Edition(string name1,int year1);
    Edition(const Edition &b);

    void SetName(string name1);
    string GetName() const;
    bool SetYear(int year1);
    int GetYear() const;

    virtual void print()const = 0;
};

#endif // EDITION_H_INCLUDED
