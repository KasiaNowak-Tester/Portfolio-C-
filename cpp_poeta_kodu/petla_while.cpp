#include <iostream>
//wygenerowac nazwy kolejnych graczy

// w petli while najpierw sprawdza się warunek a potem wykonuje się instrukcja

int main()
{
    int liczba=0; 
    int numer_gracza=0;
    std::cout<<"Podaj ilosc graczy: ";
    std::cin>>liczba;

     while(numer_gracza !=liczba)
    {
        std::cout<<"Gracz_nr_"<<numer_gracza<<"\n";
        numer_gracza++;
    }
   

    return 0;
}
