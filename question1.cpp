#include <algorithm>
#include <array>
#include <iostream>

using value_type = int;

value_type *MinLocal(value_type *first, value_type *last)
{

    value_type *meio = first + (last - first) / 2;

    while( *meio > *(meio + 1) || *meio > *(meio - 1))
    {
        if(meio+1 == last)
        {
            return meio;
        }
        if(first > meio)
        {
            return meio;
        }

        if(*(meio+1) > *(meio - 1))
        {
            --meio;
        }
        else 
        {
            ++meio;
        }
    }

    return meio;
}

void Revese(value_type *first, value_type *last)
{
    --last;
    while(last > first)
    {
        std::iter_swap(first, last);
        ++first;
        --last;
    }
}

int main()
{
    std::array<value_type, 5> Array{1,2,3,4,5};
    std::cout << *MinLocal( Array.begin() , Array.end()) << "\n";
    Revese(Array.begin() , Array.end());
    std::cout << *MinLocal( Array.begin() , Array.end()) << "\n";
    Array = {2,3,7,5,4};
    std::cout << *MinLocal( Array.begin() , Array.end()) << "\n";

    // if(*MinLocal(Array.begin(), Array.end()) == 2)
    // {
    //     std::cout << "Parabens você acertou" << std::endl;
    // }
    return 0;
}