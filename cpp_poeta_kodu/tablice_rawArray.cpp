// tablice to zbiory zmiennych tego samego typu
// są int rawArray[3]; - surowa tablica
// oraz std::vector<int> samrtArray;- inteligentna tablica
//vector - dynamiczna tablice
//indeks to numer zmiennej w tablicy (nr szufladki); numeracja od zera!!!

#include<iostream>

int main()
{
    std::cout<<"--Tablica wynikow graczy--\n";

    int playerScore[] = { 130, 113, 74, 321, 545 }; //lista inicjalizacyjna opcjonalnie, jesli chcemy zainicjalizować tablicę zerami to trzeba zostawić pustemiejsce w klamrach

    constexpr int PlayerCount = sizeof(playerScore) / sizeof(int); 
    // stała PlayerCount jest wtedy znana podczas kompilacji, równa się 
    // sizeof()-rozmiarowi danej tablicy w bajtach przez rozmiar typu pojedynczego elementu

    for (int day=0; day<5; day++)  //generowanie kolejnego dnia (upływ czasu)
    
    {
        std::cout<<"# Dzien nr "<<day<<"\n";
        
        for (int playerNo=0; playerNo < PlayerCount; playerNo++) //genrowanie kolejnych nr graczy zgodnie z indeksem w tablicy
        {
            std::cout<<"Player "<< playerNo <<" "<< playerScore[playerNo] <<"\n";
        }
        
        for(int i=0; i<PlayerCount; i++) //zwiększanie wyniku 0 10 dla każdegogracza za każdy dzień gry
        {
            playerScore[i] += 10;
        }
    
        std::cin.get(); 
        //instrukcja (pobierz znak) która wygeneruje wyniki z danego dnia po wcisnieciu ENTER
    }
    return 0;
}