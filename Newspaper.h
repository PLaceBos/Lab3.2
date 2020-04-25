#ifndef NEWSPAPER_H_INCLUDED
#define NEWSPAPER_H_INCLUDED

#include "Edition.h"



class Newspaper: public Edition{
    int form;
    string color;
public:
    Newspaper();
    Newspaper(string name1, int year1, int form1, string color1);
    Newspaper(const Newspaper &b);

    bool SetForm(int form1);
    void SetColor(string color1);
    int GetForm() const;
    string GetColor() const;

    void print() const;
};

#endif // NEWSPAPER_H_INCLUDED
