#include <iostream>

class Person // Base Class
{
public:
    Person(std::string name, int age): m_name(name), m_age(age)
    {
        std::cout<<"Person with "<<m_name<<" and age "<<m_age<<" Initialized "<<std::endl;
    }

    std::string getName() const
    {
        return m_name;
    }

    void printProfession()
    {
        std::cout<<getName()<<" is a person."<<std::endl;
    }

private:
    std::string m_name;
    int m_age;
};

class SoftwareEngineer: public Person // Derived class
{
public:
    SoftwareEngineer(std::string name, int age, int salary, int workingHours):Person(name, age), m_salary(salary), m_workingHours(workingHours)
    {
        std::cout<<"SoftwareEngineer Constructor"<<std::endl;
    }

    void printProfession()
    {
        std::cout<<getName()<<" is a Software Engineer."<<std::endl;
    }

public:
    int m_salary;
    int m_workingHours;
};

class Teacher: public Person // Derived Class
{
public:
    Teacher(std::string name, int age, int salary, int studentStrength):Person(name, age), m_salary(salary),m_studentStrength(studentStrength)
    {
        std::cout<<"Appointed as a Teacher with salary Rs"<<m_salary<<" and have to handle "<<m_studentStrength<<" students."<<std::endl;
    }

    int getSalary() const
    {
        return m_salary;
    }

    void printProfession()
    {
        std::cout<<getName()<<" is a Teacher."<<std::endl;
    }


private:
    int m_salary;
    int m_studentStrength;
};


int main()
{
    Teacher Ashok("Ashok", 40, 30000, 150);
    SoftwareEngineer Chethan("Chethan", 25, 50000, 8);

    Ashok.printProfession();
    Chethan.printProfession();
    return 0;
}
