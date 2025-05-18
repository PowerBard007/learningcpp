//functions similar to c
//return similar to c
//overloaded functions : same name for functions that is differentiated by the function signatures(function parameters are different)
//variable scope - locals are declared within a function , while globals are declared outside the function
//global variables are less secure
//arrays 
//sizeof function ( the total memory used)
//foreach loop from beginning to end//kinda useless
//passing array to functions
//searching similar to java linear and binary


#include <iostream>

int j=1;

void wow(int grd[])
{
    for(int i=0;i<5;i++)
    {
        std::cout<<'\n'<<grd[i];
    }
    return;
}

int main()
{
    int j=4;
    std::cout<<j;
    std::cout<<::j;//uses global version of j

    std::string car[]={"Lambo","Bugatti","Porsche"};

    for(int i=0;i<3;i++)
        std::cout<<'\n'<<car[i]<<", ";

    int k=sizeof(car);

    std::cout<<k;

    int y=sizeof(car)/sizeof(std::string);

    std::cout<<y;
//Isn't the size of each element in the array different, since "Toyota", "BMW", and 
//"Ford" have different lengths? So how can sizeof(std::string) be the same for all?
//Short Answer:
//Yes, the string lengths differ, but the size of a std::string object is fixed — 
//because it only stores a pointer and some metadata, not the actual character data inline.

    int grd[]={1,2,3,4,5};
//foreachloop   // for(int grds: grd)
//{
//   std::cout<<grds<<'\n';
//}
     
    wow(grd);//passing an array
//when array is passed it decays to a pointer and size is no longer visible, therefore pass size as well 
    return 0;
}
//efef
