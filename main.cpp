
#include <iostream>
#include <string>
int main()
{
    std::string palavra{"Oi"};
    std::cout << palavra.length() << "\n";
    while (true) 
    {
        if(palavra.length() == 2)
        {
            break;
        }        
    }

    return 0;
}