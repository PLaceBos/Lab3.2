#include "Book.h"

Book::Book(string name1, int year1, int pages1, string author1):Edition(name1, year1){
    if(!SetPages(pages1))
    pages = 0;
    author = author1;
}

Book::Book(){
    pages= 0;
    author = "";
}

Book::Book(const Book &b){
    name = b.name;
    year = b.year;
    pages = b.pages;
    author = b.author;
}

bool Book::SetPages(int pages1){
    if (pages1 < 0)
    return false;
    else
    pages = pages1;
    return true;
}

int Book::GetPages() const{
    return pages;
}

string Book::GetAuthor() const{
    return author;
}

void Book::print() const{
cout << "Name is: " << name << endl;
cout << "Year: " << year << endl;
cout << "Pages: " << pages << endl;
cout << "Author: " << author << endl;
}
