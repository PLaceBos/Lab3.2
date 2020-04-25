#include "Edition.h""


Edition::Edition(string name1, int year1){
    if (!SetYear(year1))
        year = 0;
        name = name1;
}

Edition::Edition(){
    name = "";
    year = 0;
}

bool Edition::SetYear(int year1){
    if (year1 < 0)
    return false;
    else
    year = year1
    ;
    return true;
}

string Edition::GetName() const{
    return name;
}

int Edition::GetYear() const{
    return year;
}
