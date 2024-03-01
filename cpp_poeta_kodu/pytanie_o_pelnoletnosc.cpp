#include <iostream>

int wiek;

int main ()
{
    std::cout<<"Ile masz lat? \n";
    std::cin>>wiek;
    if (wiek<18)
    {
        std::cout<<"Jestes niepelnoletni";
    }
    else if (wiek>=18)
    {
        std::cout<<"Jestes pelnoletni";
    }

    return 0;
}