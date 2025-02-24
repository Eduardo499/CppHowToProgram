#include <iostream>

using namespace std;

class Date {
    private:
        int month;
        int day;
        int year;
    public:
        Date(int month, int day, int year) {
            if (month < 1 || month > 12) {
                this->month = 1;
            } else {
                this->month = month;
            }
            this->day = day;
            this->year = year;
        }

        // Setters
        void setMonth(int month) {
            if (month < 1 || month > 12) {
                this->month = 1;
            } else {
                this->month = month;
            }
        }
        void setDay(int day) {
            this->day = day;
        }
        void setYear(int year) {
            this->year = year;
        }

        // Getters
        int getMonth() {
            return month;
        }
        int getDay() {
            return day;
        }
        int getYear() {
            return year;
        }

        void displayDate() {
            cout << month << "/" << day << "/" << year << endl;
        }
};