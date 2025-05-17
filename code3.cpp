#include <iostream>
#include <vector>//will learn later

typedef std::vector<std::pair<std::string,int>> pairlist_t;
// typedef is used to create a new alias for a datatype[new identifier 
//to existing datatype, used for code readability]

typedef std::string text_t;

//but now, 'using' is more used instead of 'typedef' because of templates*/

using text_t = std::string;

int main()
{
    pairlist_t pair;
    text_t fname="aby";

    std::cout <<fname<<'\n';

    int studs =21;
    /*
    ALL Arithmetic operations
    studs+=3;
    studs-=2;
    studs++; or studs--;
    studs*=2;
    studs/=2;[int int decimal point is truncated]
    studs%=3;

    order of operations: parenthesis->multi/div->add/sub
    */

    std::cout << studs;

    //TypeConversion[implicit and explicit]

    double y=(int)3.14;//an example of explicit type conversion
    // implicit conversion is done automatically[when the div 
    //results in integers when int is used even though answers is in decimals]
    std::cout <<'\n'<< y;

    char c = 56;//ASCII implicit conversion[cause brackets are not given]
    std :: cout << '\n'<<c;
    std :: cout << '\n'<<(char) 99;//explicit conversion
    return 0;
}


