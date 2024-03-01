//zadanie switch, liczba <0;20>, czy liczba jest pierwsza?
#include <iostream>

int main()
{
    int liczba=0;

    std::cout<<"Podaj liczbe calkowita z zakresu od 0 do 20: ";
    std::cin>>liczba;

    if (liczba>=0 && liczba<=20)
    {
        switch (liczba)
    {
        case 2: 
        case 3: 
        case 5: 
        case 7: 
        case 11: 
        case 13: 
        case 17: 
        case 19: 
                std::cout<<"Liczba "<<liczba<<" jest liczba pierwsza"; 
                break;
        default: 
                std::cout<<"To nie jest liczba pierwsza";
    }
    }
    else
    {
        std::cout<<"Liczba nie jest z zakresu od 0d 20!";
    }

    return 0;
}