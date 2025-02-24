#include <iostream>
#include <string>
#include "Employee.h"

using namespace std;

int main() {
    Employee employee1 = Employee("John", "Doe", 5000);
    Employee employee2 = Employee("Jane", "Doe", 6000);

    cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << endl;
    cout << "Yearly Salary: " << employee1.getYearlySalary()<< endl;

    cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << endl;
    cout << "Yearly Salary: " << employee2.getYearlySalary()<< endl;

    employee1.setMonthlySalary(employee1.getMonthlySalary() * 1.1);
    employee2.setMonthlySalary(employee2.getMonthlySalary() * 1.1);

    cout << "Employee 1: " << employee1.getFirstName() << " " << employee1.getLastName() << endl;
    cout << "Yearly Salary: " << employee1.getYearlySalary()<< endl;

    cout << "Employee 2: " << employee2.getFirstName() << " " << employee2.getLastName() << endl;
    cout << "Yearly Salary: " << employee2.getYearlySalary()<< endl;
    
    return 0;
}