#include <iostream>
//wygenerowac nazwy kolejnych graczy

int main()
{
    int liczba=0; 
    int numer_gracza=0;
    std::cout<<"Podaj ilosc graczy: ";
    std::cin>>liczba;

    do 
    {
        std::cout<<"Gracz_nr_"<<numer_gracza<<"\n";
        numer_gracza++;
    }
    while(numer_gracza !=liczba);

    return 0;
}

//do...while wykona sie conajmniej raz a potem spr warunku!
//!!! ten kod nie jest dobry bo jeśli użytkownik wpisze ZERO to pętla się nie skonczy