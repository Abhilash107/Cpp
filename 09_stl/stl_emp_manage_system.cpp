#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <iterator>
#include <string>

using namespace std;

struct Employee{
    int id;
    string name;
    double salary;
};

//* Employee& -> It's a reference
void displayEmployee(const Employee& emp){
    cout << "Id: " << emp.id << emp.name << endl;
}


int main(){
    vector<Employee> employees = {
        {101, "Abhilash", 10100},
        {102, "Amit", 20202},
        {103, "Rahul", 30303},
        {104, "Raj", 59865},
        {105, "Papun", 87879},
    };
    //? The issue with the line cout << (employees.begin()) << endl; is that employees.begin() returns an iterator, and you cannot directly print an iterator using cout
    //!cout << (employees.begin()) << endl;

    //* Lambda function
    sort(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary > e2.salary;
    });
    
    //*displayEmployee is passed as a reference, not method
    for_each(employees.begin(), employees.end(), displayEmployee);

    //Copy_if
    vector<Employee> highEarners;
    copy_if(
        employees.begin(), 
        employees.end(), 
        back_inserter(highEarners), 
        [](const Employee& emp){
            return emp.salary > 50000;
    });

    //Accumulate or reduce 
    double totalSalary = accumulate(employees.begin(), employees.end(), 0.0, [](double sum, const Employee& emp){
        return sum + emp.salary;
    });

    //Avg
    double avgSalary = totalSalary/employees.size();

    //getting unknown return type
    auto highestPaid = max_element(employees.begin(), employees.end(), [](const Employee& e1, const Employee& e2){
        return e1.salary < e2.salary;
    } );

    



    return 0;
}




