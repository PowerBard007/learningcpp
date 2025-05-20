//Call by Value and Call by Reference
//pointers store memory address of another variable
//&= address of operator
//*= dereference operator
//When we ass an array into a function it decays into a pointer
//Dynamic memory= Memory that is allocted after the program is already compiling and running
//use new operator


#include <iostream>

int main()
{
    std::string name="Aakansh";
    int age=10;
    bool stud=true;

   // std::cout<<&name<<'\n'<<&age<<'\n'<<&stud<<'\n';
    
    std::string school="DON BOSCO";
    std::string *p=&school;

    std::cout<<p;
    std::cout<<*p;

    std::string hotels[5]={"InterContinental","Marriot","HYATT","Belige","TRUMP"};
    std::string *p1=hotels;

    std::cout <<p1;
    std::cout <<*p1;
    std::cout <<*(p1+1);

    //NULLPTR = KEYWORD THAT REPERSENTS A NULL PINTER

    int *pp=nullptr;

    int x=123;

   // pp=&x;

    if(pp==nullptr)
    {
        std::cout<<"Address wa not assigned";
    //  std::cout<<*pp; --  USING THIS STATEMENT HERE WILL CREATE ERRORS THAT ARE UNDEFINED      
    }   
    else
    {
        std::cout<<"Address was assigned";
        std::cout<<*pp;        
    }

    int *pNum=NULL;
    
    pNum=new int;//dynamic allocation

    *pNum=21;

    std::cout<<'\n'<<"address: "<<pNum<<'\n';
    std::cout<<"value: "<<*pNum<<'\n'; 
    
    delete pNum;//to clear the heap after use, PREVENTS MEMORY LEAK

//EXAMPLE USE CASE WITH ALLOCATION AFTER PROGRAM IS RUNNING

    char *pGrades=NULL;

    int size;

    std::cout<< "Enter the number of grades\n";
    std::cin>>size;

    pGrades= new char[size];

    for(int i=0;i<size;i++)
    {
        std::cout<<"Enter Grade #"<<i+1<<": ";
        std::cin>>pGrades[i];
    }

    for(int i=0;i<size;i++)
        std::cout<<pGrades[i]<<" ";

    delete[] pGrades;

    return 0;
}