#include <iostream>
#include <ctime>

int main()
{
    //pseudo-random= NOT truly random but close

    srand(time(NULL));//current calendar time as seed

   // int num=rand();//num between 0 and 32767
    int num;
    std::cout<<num;

    num=(rand()%6)+1;//a die that gives number between 1 and 6
        // for random events to occur you can use random along with swtich to do this
    std::cout <<num;
    return 0;
}