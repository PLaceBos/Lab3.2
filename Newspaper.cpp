#include "Newspaper.h"

Newspaper::Newspaper(string name_, int year_, int form_, string color_):Edition(name_, year_){
    if(!SetForm(form_))
    form = 0;
    color = color_;
}

Newspaper::Newspaper(){
    form = 0;
    color = "";
}

Newspaper::Newspaper(const Newspaper &b){
    name = b.name;
    year = b.year;
    form = b.form;
    color = b.color;
}

bool Newspaper::SetForm(int form1){
    if (form1 < 0)
    return false;
    else
    form = form1;
    return true;
}

int Newspaper::GetForm() const{
    return form;
}

string Newspaper::GetColor() const{
    return color;
}
void Newspaper::print() const{
cout << "Name: " << name << endl;
cout << "year: " << year << endl;
cout << "form: " << form << endl;
cout << "colorful: " << color << endl;
}
