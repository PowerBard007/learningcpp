//overloaded constructors
//data abstraction
//getters= functions that make private attribute readable
//setters= functions that make private attribute writeable

#include <iostream>

class Pizza
{
    public:
        std::string topping1,topping2;
    

    Pizza(std::string topping1)
    {
        this->topping1=topping1;
    }

    Pizza(std::string topping1, std::string topping2)
    {
        this->topping1=topping1;
        this->topping2=topping2;
    }

    Pizza()
    {

    }

    int getTemp()
    {
        return temperature;
    }

    void setTemp(int temperature)//this acn alos be done in constructors as well
    {
        if(temperature<0)
        {
            this->temperature=0;
        }
        else
        this->temperature=temperature;
    }

    private:
        int temperature=100;
};

int main()
{
    Pizza pizza1("pepperoni");
    Pizza pizza2("olives","mushrooms");
    Pizza pizza3;//no toppings

    std::cout<<'\n'<<pizza1.topping1<<'\n';
    std::cout<<'\n'<<pizza2.topping1<<pizza2.topping2<<'\n';

    Pizza stove;

    //stove.temperature=100000;
    std::cout<<"The current heat is set to "<<stove.getTemp();

    stove.setTemp(100000);
    std::cout<<"The current heat is set to "<<stove.getTemp();

    return 0;
}