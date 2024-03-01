#include <iostream>

float a,b,h;

int main()
{
    std::cout<<"PROGRAM OBLICZAJACY POLE TRAPEZU\n";
    std::cout<<"Podaj wartosc a=";
    std::cin>>a;
    std::cout<<"Podaj wartosc b=";
    std::cin>>b;
    std::cout<<"Podaj wartosc h=";
    std::cin>>h;

    if (a>0 && b>0 && h>0) //walidacja liczb ujemnych
    {
        std::cout<<"Pole trapezu wedlug wzoru: (a+b)*h/2 wynosi "<<(a+b)*h/2;
    }
    else 
    {
        std::cout<<"Wszystkie wartosci musza byc dodatnie!";
    }
    
    

    return 0;
}