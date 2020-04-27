#include "Journal.h"

Journal::Journal(string name1, int year1, int number1):Edition(name1, year1){
    if(!SetNumber(number1))
    number = 0;
}

Journal::Journal(){
    number = 0;
}

Journal::Journal(const Journal &b){
    name = b.name;
    year = b.year;
    number = b.number;
}

bool Journal::SetNumber(int number1){
    if (number1 < 0)
    return false;
    else
    number = number1;
    return true;
}

int Journal::GetNumber() const{
    return number;
}

void Journal::print() const{
cout << "Name: " << name << endl;
cout << "Year: " << year << endl;
cout << "Number: " << number << endl;
}
