#include <iostream>
#include <vector>

int main()
{
    std::cout<<"Tablica wynikow graczy\n";

    std::vector<int> playerScore = { 130, 113, 74, 321, 545 };

    for (int day=0; day<5; day++)
    {
        std::cout<<"Dzien nr "<<day<<"\n"; //upływ czasu, kolejne 5 dni

        if(day==3)
        {
            std::cout<<"Do gry dolacza nowy gracz!\n";
            playerScore.push_back(0); // dodanie nowego elementu do tablicy na samym jej końcu - metodą .pushback()- w nawiasie podajemy jaka ma byc wartosc zmiennej
        }

        for(int playerNo=0; playerNo<playerScore.size(); playerNo++) //wygenerowanie kolejnych numerow graczy
        {
            std::cout<<"Player "<<playerNo<<" "<<playerScore[playerNo]<<"\n";
        }

        for(int i=0; i<playerScore.size(); i++) // zwiększenie punktów o 10 za każdy dzień gry
        {
            playerScore[i] += 10;
        }

//dla tablicy typu vector - jej rozmiar pobiera sie metodą z klasy vector: .size()
        std::cin.get();
    }
    return 0;
}