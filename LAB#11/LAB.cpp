#include <iostream>
#include <string>
using namespace std;

// Base class
class Person
{
protected:
    string name;
    int age;

public:
    // Constructor
    Person(string n, int a)
    {
        name = n;
        age = a;
    }
};

// Derived class Student
class Student : public Person
{
private:
    int rollNo;
    string department;

public:
    // Constructor
    Student(string n, int a, int r, string d)
        : Person(n, a)
    {
        rollNo = r;
        department = d;
    }

    // Display function
    void display()
    {
        cout << "Student Information" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Department: " << department << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    // Create two Student objects
    Student s1("Ali", 20, 101, "Computer Science");
    Student s2("Ahmed", 22, 102, "Software Engineering");

    // Display data for both students
    s1.display();
    s2.display();

    return 0;
}