#include <iostream>

int main()
{
    std::string name, music,dummy;
    std ::cout << "What's your name?"<<'\n';
    std ::cin >> name;

    int age;
    std ::cout <<"What's your age?"<<'\n';
    std :: cin >> age;    

    // to read a string with spaces
    std::getline(std::cin, dummy);//dummy variable to flusht he buffer from new line characters or useless characters ig
    std ::cout <<"What's your favourite music?"<<'\n';
    std::getline(std::cin, music);
    // or you can use stdgetline(std::cin>>std::ws ,name); to remove the new lien from buffer
    std:: cout<< "So you are "<<name<<", who is "<<age<<"years old,\n and your fav music is "<< music<<".A";
    return 0;
}
// << insertion operator
// >> exttraction operator