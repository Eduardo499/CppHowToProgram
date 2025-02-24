#include <iostream>
#include <string>

using namespace std;

class Employee {
    private:
        string firstName;
        string lastName;
        int monthlySalary;
    public:
        Employee(string firstName, string lastName, int monthlySalary) {
            this->firstName = firstName;
            this->lastName = lastName;
            this->monthlySalary = monthlySalary;
        }

        // Setters
        void setFirstName(string firstName) {
            this->firstName = firstName;
        }
        void setLastName(string lastName) {
            this->lastName = lastName;
        }
        void setMonthlySalary(int monthlySalary) {
            if (monthlySalary < 0) {
                this->monthlySalary = 0;
            } else {
                this->monthlySalary = monthlySalary;
            }
        }

        // Getters
        string getFirstName() {
            return firstName;
        }
        string getLastName() {
            return lastName;
        }
        int getMonthlySalary() {
            return monthlySalary;
        }

        int getYearlySalary() {
            return monthlySalary * 12;
        }
};