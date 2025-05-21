//recursion- the same function calls itself (very useful in searching and tree algorithms prevensts the  )
//function template// to create overloaded functions with different datatypes for the same variable
//struct - stores related variables under one variable
// members can be accessed with "."  in struct is a class member access operator
//STRUCTS ARE PASS BY VALUE
//enums=enumerations- user defined data type that consists of paired named integer constants.
//Generallly switches cannot use string inputs but with enums it is possible

#include <iostream>

enum Day{sunday=0,monday=1,tuesday=2};

struct STUDENT 
{
    int clas;
    std::string edit;
    bool studying;
};

typedef struct STUDENT *node;

template <typename T>

T max(T x, T y)
{
    return  (x>y)?x:y;
}
//to pass any sort of datatype in which the process is the same; find the bigger number here;

void display(STUDENT student1)//this is the copy of student1
{
    std::cout <<student1.edit<<student1.clas<<student1.studying;

}

//to work with the actual value of the struct use
void displa(STUDENT &student1)
{
        std::cout <<student1.edit<<student1.clas<<student1.studying;
}

int main()
{
    std::cout<<max(1,2)<<'\n';
    std::cout<<max(1.1,2.5)<<'\n';
    std::cout<<max('a','b')<<'\n';

    STUDENT student1;
    student1.edit="DORORORO";
    student1.clas=10;
    student1.studying=false;

    display(student1);

    Day today= tuesday;

    switch(today)
    {
        case 0 : std::cout<<"IT IS SUNDAY.\n";
                        break;

        case 1 : std::cout<<"IT IS MONDAY.\n";
                        break;


        case tuesday : std::cout<<"IT IS TUESDAY.\n";
                        break;

        default :  std::cout<<"IT IS ANY OTHER DAY.\n";
                    break;
    }




    return 0;
}