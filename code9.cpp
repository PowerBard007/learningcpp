//fill function: fills the range of elements witha specific value
//displaying array only till the value are inputted


#include <iostream>

int main()
{
    int i,j;
    std::string food[100];

    const int Size=100;

    fill(food, food+100, "pizza");

    for(i=0;i<100;i++)
        std::cout<<food[i]<<"  "<<i<<"\n";

    std::string cars[10]={"Porsche","Lambo","Puegeot","Ferrari","Mercedes"};

    for(i=0;!cars[i].empty();i++)
        std::cout<<cars[i]<<" "<<i<<"\n";

    int matrix[3][3]={{1,2,3},{4,5,6},{7,8,9}};

//  matrix={{1,2,3},{4,5,6},{7,8,9}};  I cannot assign like this

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            std::cout<<matrix[i][j]<<" ";
        }
        std::cout<<'\n';
    }
        
    return 0;
}