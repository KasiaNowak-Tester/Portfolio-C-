#include<iostream>
#include <vector>

int main()
{
   
    //tablica przechowująca srednią ocen
    std::vector <float> studentAverages;

    int option=0;

    while (option!=4)  //petla z menu która wykonuje sie dopoki nie wybierzemy opcji "wyjdz"
    {
        std::cout<<"Menu\n";
        std::cout<<"1. Wyswietl liste uczniow\n";
        std::cout<<"2. Dodaj ucznia do listy\n";
        std::cout<<"3. Usun ucznia z listy\n";
        std::cout<<"4. Wyjdz\n";
        std::cout<<"Wybierz opcje: ";

        std::cin >> option;

        switch (option)
        {
        case 1: 
        {
            std::cout<<"Obecna lista uczniow:\n"; 

            for(int i = 0; i < studentAverages.size(); i++)
            {
                std::cout<< "Uczen "<< i << ": " <<studentAverages[i]<<"\n";
            }
            
            break;
        }
        
        case 2: 
        {
            std::cout<<"Dodawanie ucznia do listy:\n"; 
            std::cout<<"Podaj srednia ucznia:\n"; 
            float avg;
            std::cin>>avg;

            studentAverages.push_back(avg);
            
            break;
        }   
            
        case 3: 
        {
            std::cout<<"Usuwanie ucznia z listy:\n"; 
            std::cout<<"Podaj indeks ucznia z listy: "; 
            int studentIndex;
            std::cin>>studentIndex;

            //petla to zabezpieczenie przed podaniem indeksu ktory nie istnieje
            if(studentIndex>=0 && studentIndex<studentAverages.size())
            {
                studentAverages.erase(studentAverages.begin() + studentIndex);
            }

            break;
        }    
            
        case 4: break;
        
        default: 
        {
            std::cout<<"Nieznana opcja, sprobuj jeszcze raz\n";
            break;
        }

        }
    }
    
    return 0;
}