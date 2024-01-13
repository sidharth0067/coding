#include<iostream>

using namespace std;

class date{
    private:
    int date;
    int month;
    int year;

    public:
    void setdate(int d, int m, int y){
        date=d;
        month=m;
        year=y;
    }

    int getday() const{
        return date;
    }
    int getyear() const{
        return year;
    }
    int getmonth() const{
        return month;
    }

    bool valid() const{
        if(month >12 || month<1){
            return false;
        }
        else if(date>31 || date<1){
            return false;
        }
        else if(month== 4 || month == 6 || month== 9|| month==11 && date>30){
            return false;
        }
    }
};