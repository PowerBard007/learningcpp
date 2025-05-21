//objects have characteristics and attributes
//class acts as blueprint for object creation
//access modifiers -public, private, protected
//constructors special metod  called when object is instantiated

#include <iostream>

class Human
{
    public :
        std::string name,occupation;
        int age;

        void eat()//this is a method
        {
            std::cout<<"This person is eating";
        }
};

class Student
{
    public:
        std::string name;
        int age;
        double gpa;

    Student(std::string name, int age, double gpa)
    {
        this->name = name;
        this->age =age;
        this->gpa=gpa;
    }//this keyword is used only whent the parameter variable name is same as thee variable name in the class
/*
for example

Student(std::string x, int y, double z)
    {
        name=x;
        age =y;
        gpa=z;
    }
*/

};


int main()
{
    Human human1;

    human1.name="RICK";
    human1.occupation="DRIVER";
    human1.age=21;

    std::cout <<human1.name<<human1.occupation<<human1.age;
    human1.eat();

    Student student1("Spongebob",21,4.9);
    Student student2("Sandy",20,5);
    std::cout<<'\n'<<student1.name<<'\n';
    std::cout<<student1.age<<'\n';
    std::cout<<student1.gpa<<'\n';


     std::cout<<'\n'<<student2.name<<'\n';
    std::cout<<student2.age<<'\n';
    std::cout<<student2.gpa<<'\n';
    return 0;
}