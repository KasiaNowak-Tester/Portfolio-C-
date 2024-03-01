#include <iostream>
int wiek, cena=0;

int main()
{
    
    std::cout<<"Ile masz lat?\n";
    std::cin>>wiek;

    if(wiek<=4)

    {
        cena=0;
    }
    
    else if (wiek>4 && wiek<=12) //else f jest sprawdzany wyłącznie gdy poprzednie if i else if nie zostały spełnione
    {
        cena=6;
    }
    
    else if (wiek>12 && wiek<18)
    {
        cena=10;
    }
    
    else
    {
        cena=12;
    }

    std::cout<<"Cena za bilet na basen to "<<cena<<" PLN";

    return 0;
}