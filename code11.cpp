//recursion- the same function calls itself (very useful in searching and tree algorithms prevensts the  )
//function template
#include <iostream>

template <typename T>

T max(T x, T y)
{
    return  (x>y)?x:y;
}
//to pass any sort of datatype in which the process is the same; find the bigger number here;

int main()
{
    std::cout<<max(1,2)<<'\n';
    std::cout<<max(1.1,2.5)<<'\n';
    std::cout<<max('a','b')<<'\n';

    return 0;
}