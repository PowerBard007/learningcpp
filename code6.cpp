#include <iostream>

int main()
{
    std::string name;

    std::cout<<"Enter your name"<<"\n";
    std::getline(std::cin>>std::ws , name);

    std::cout<< name.length()<<"\n";
    std::cout<< name.empty()<<"\n";//returns 1 if name is empty
    std::cout<< name.append("@gmail.com")<<"\n";
    std::cout<< name.at(1)<<"\n";
    
    std::cout<< name.insert(1,"HOLY")<<"\n";
    std::cout<< name.find(' ')<<"\n";//index of first character
    std::cout<< name.erase(0,3)<<"\n";//erases 0 to 2

    name.clear();
    std::cout<<"Hello" <<name<<"long";

    int n=9,i;

    while(n>0)
    {
        std::cout << n--;
    }

    n=9;
    do
    {
        std::cout << n--;
    } while (n>0);


    for(i=9;i>=n;i--)
    {
        std::cout << i;
    }
    
    //break is used to exit from a loop and continue is used to skip the concerned iteration

    return 0;
}

//for more info on string go to https://cplusplus.com/reference/string/string/