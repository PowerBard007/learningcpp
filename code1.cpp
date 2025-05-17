#include <iostream> // header filer that contains functions for basic input and output

int main()
{
    std::cout<< "I like pizza.";// standard :: character output << "Text to be displayed"
    std::cout<< " I hate pineapples tho!" <<std::endl;// use <<std::endl; or '\n' for new line
                                                        // [\n is better performance wise and it also flushes output bufer]
    std::cout<< "My name is Joshua"<<'\n';
    std::cout<< "My surname is Nothing";

    int x=5,y=8;
    int sum=x+y;
    std::cout <<'\n'<< x << y << sum;
    /*other datatypes are  double[double a=9.8;], char[char c='a';], boolean(bool a=true or false)
    // strings[std::string name ="Aakansh";]
    */

    //variable value is fixed with const
    const double pi=3.1419;
    //any attempt to change the value returns in an error
    std::cout << pi;


return 0;
}


/*
A bit about *Flushing the Output Buffer*
A lot of I/O is buffered.
This means that data is not immediately sent to the target;
instead it is stored in a buffer and sent only when 
explicitly requested or when the buffer is full.
Sending data in large chunks slightly delays it but 
is very optimal in terms of time spend for system/driver calls.

Let's say you have 10 lines to print.
Let's say sending one line takes 1 ms for the copy and flushing 
the buffer also takes 1 ms. If you flush after each line, printing
everything will take 20 ms ( each line will take 2 ms), 
if you flush once after everything is written to the buffer,
it will take 11ms.

So, flushing frequently will make individual lines appear much faster 
(2ms vs 11ms) but printing everything will be much slower (20ms vs 11ms).

It's not that one solution is better than the other, both have their uses.
If you don't care about overall performance, but need a low latency system, 
flush frequently. If you need to send lots of data, flush only when required.
*/