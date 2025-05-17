#include <iostream>
#include <cmath> 

int main()
{
    double x=3,y=4,z;

    z=std::max(x,y);
    std::cout <<z <<"\n";

    z=std::min(x,y);
    std::cout <<z << "\n";
    
    z=pow(2,4);
    std::cout <<z << "\n";

    z=sqrt(9);
    std::cout <<z << "\n";

    z=abs(-3);
    std::cout <<z << "\n";

    z=round(3.125);
    std::cout <<z << "\n";

    z=ceil(3.125);
    std::cout <<z << "\n";

    z=floor(3.125);
    std::cout <<z << "\n";


    int age;

    std::cout<<"Enter your age:";
    std::cin>>age;

    if(age>=18)
        std::cout<<"You are an Adult";
    else
        std::cout<<"You are a teeny tiny human being";

    switch(age)
    {
        case 18 : std::cout<<"Congrats on levelling up ";
                    break;

        default : std::cout<<"Nothing special here!";
                    break;
    }

    (age>100)?std::cout<<"Damn, you old":std::cout<<"Still time left to kick the bucket";
    age%2?std::cout<<"Odd Aged SUS uwu":std::cout<<"Even Aged";
    //here 1 results in true and 0 results in false
    //also the && || and ! operators: just like in c and java
    return 0; 
}

//for more math functions visit https://cplusplus.com/reference/cmath