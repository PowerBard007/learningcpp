//inheritance - allows for code reuseability

#include <iostream>

class Animal
{
    public:
        bool alive=true;

    void eat()
    {
        std::cout<<"This animal is eating";
    }

};

class Dog : public Animal//dog inherits stuff from class Animal
{
    public:
        void bark()
        {
            std::cout<<"This animal barks too!";
        }
};

class Cat : public Animal//dog inherits stuff from class Animal
{
    public:
        void meow()
        {
            std::cout<<"This animal meows too!";
        }
};


int main()
{

    Dog dog1;

    std::cout<<dog1.alive<<'\n';
    dog1.eat();
    dog1.bark();

    Cat cat1;

    std::cout<<cat1.alive<<'\n';
    cat1.eat();
    cat1.meow();
    return 0;
}