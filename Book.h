#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED

#include "Edition.h"

class Book: public Edition{
        protected:
    int pages;
    string author;
public:
    Book();
    Book(string name1, int year1, int pages1, string author1);
    Book(const Book &b);

    bool SetPages(int pages1);
    void SetAuthor(string author1);
    int GetPages() const;
    string GetAuthor() const;

    void print() const;
};

#endif // BOOK_H_INCLUDED

