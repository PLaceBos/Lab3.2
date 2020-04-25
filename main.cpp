#include <iostream>
#include <iostream>
#include "Edition.h"
#include "Journal.h"
#include "Book.h"
#include "Newspaper.h"
#include <string>

using namespace std;

int main()
{
string name1, author1, colorful;
int year1, number1, pages1, c, form1;
    cout << "1. Journal\n;" << endl;
    cout << "2. Book\n;" << endl;
    cout << "3. Newspaper\n;" << endl;
    cout << "4. Exit \n" << endl;

    cout <<"Input: ";
    cin >> c;
    cout << endl;
    if ((c>=5)||(c<=0)){
    cout << "Please, input number from 1 to 4!"<< endl<<endl;
    }
    cout << endl;

    switch (c){
    case 1:{
    cout << "You have chosen journal." << endl;
    cout << "Input name  journal: ";
    cin >> name1;
    cout << "Input year journal: ";
    a:
    cin >> year1;
    if (year1 < 0){
    cout << "Invalid number, input positive number!"<< endl<<endl;
    goto a;}
    cout << "Input number Journal: ";
    b:
    cin >> number1;
    if (number1 < 0){
    cout << "Invalid number, input positive number!"<< endl<<endl;
    goto b;}
    cout << endl;

    Journal life( name1, year1, number1);
    life.print();
    cout << endl;

    cout << "1. Journal\n;" << endl;
    cout << "2. Book\n;" << endl;
    cout << "3. Newspaper\n;" << endl;
    cout << "4. Exit \n" << endl;

    cout <<"Input: ";
    cin >> c;
    cout << endl;
}
    case 2:{
    cout << "You have chosen book." << endl;
    cout << "Input name book: ";
    cin >> name1;
    cout << "Input year book: ";
    c:
    cin >> year1;
    if (year1 < 0){
    cout << "Invalid number, input positive number!!"<< endl<<endl;
    goto c;}
    cout << "Input quantity pages  book: ";
    d:
    cin >> pages1;
    if (pages1 < 0){
    cout << "Invalid number, input positive number!"<< endl<<endl;
    goto d;}
    cout << "Input author book: ";
    cin >> author1;
    cout << endl;

    Book fs(name1, year1, pages1, author1);
    fs.print();
    cout << endl;

    cout << "1. Journal\n;" << endl;
    cout << "2. Book\n;" << endl;
    cout << "3. Newspaper\n;" << endl;
    cout << "4. Exit \n" << endl;
    cout <<"Input: ";
    cin >> c;
    cout << endl;
}
    case 3:{
    cout << "You have chosen newspaper." << endl;
    cout << "Input name newspaper: ";
    cin >> name1;
    cout << "Input year newspaper: ";
    e:
    cin >> year1;
    if (year1 < 0){
    cout << "Invalid number, input positive number!"<< endl<<endl;
    goto e;}
    cout << "Input form newspaper: ";
    f:
    cin >> form1;
    if (form1 < 0){
    cout << "Invalid number, input positive number!"<< endl<<endl;
    goto f;}
    cout << "Input colorful newspaper: ";
    cin >> colorful;
    cout << endl;

    Newspaper sat( name1, year1, form1, color1);
    sat.print();
    cout << endl;

    cout << "1. Journal\n;" << endl;
    cout << "2. Book\n;" << endl;
    cout << "3. Newspaper\n;" << endl;
    cout << "4. Exit \n" << endl;
    cout <<"Input: ";

    cout <<"Input: ";
    cin >> c;
    cout << endl;
}
    case 4:{
    cout << "You out. Goodbye!";
    return 0;
}
}
}
