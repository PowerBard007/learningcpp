#include <iostream>
//Namespace[two or more entities can share the same name]

namespace first
{
    int x=1;
}

namespace second
{
    int x=2;
}

int main()
{
    int x=0;

    std::cout << x;
    std::cout << first::x;
    std::cout << second::x;
/*
i can use 
"using namespace first;"
in int main so that when i type "std::cout << x;", 
it displays 1 and not 0[the value of x in namepsace first]
to display second namespace value use the same code"std::cout << second::x;"
*/
    return 0;

}

/*
using namespace std;
using std::cout;

reduces std::cout << x;
to cout<<x;

using std::string;
reduces std::string name = "aakansh";
to string name = "aakansh";

*/