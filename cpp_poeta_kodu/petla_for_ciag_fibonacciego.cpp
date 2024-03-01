//petla for (inic; warunek; iter) {kod}
#include <iostream>

int main()
{
    int liczba;
    std::cout<<"Podaj ile liczb ciagu Fibonacciego chcesz zobaczyc: ";
    std::cin>>liczba;

    int poprzednia_wart = 0;
    int obecna_wart = 1;

    for (int i =0; i<liczba; i++)
    {
        std::cout<<obecna_wart<<" ";

        int zachowana_wart = obecna_wart;
        obecna_wart+=poprzednia_wart;
        poprzednia_wart = zachowana_wart;
    }

    return 0;
}