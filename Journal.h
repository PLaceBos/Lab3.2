#ifndef JOURNAL_H_INCLUDED
#define JOURNAL_H_INCLUDED

#include "Edition.h"

class Journal: public Edition{
        protected:
    int number;
public:
    Journal();
    Journal(string name1, int year1, int number1);
    Journal(const Journal &b);

    bool SetNumber(int number1);
    int GetNumber() const;

    void print() const;
};

#endif // JOURNAL_H_INCLUDED
