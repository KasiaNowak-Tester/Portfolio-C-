#include <iostream>

int main()
{
    int ingredient = 0;
    std::cout<<"Podaj numer skladnika (0: 3 PLN / inny 5 PLN): ";
    std::cin>>ingredient;

    /*if(ingredient == 0)
    {
        ingredient = 3;
    }
    else 
    {
        ingredient = 5;
    }

    std::cout<<"Koszt skladnika wynosi "<<ingredient<<" PLN";
    */

    int price = ingredient == 0 ? 3 : 5;
    std::cout<<"Koszt skladnika wynosi "<<price<<" PLN";
    return 0;
}

// operator trojargumentowy przykład - to jest skrócony if z else
// zamiast if/else piszemy:
// warunek ? wartosc_jesli_prawda : wartosc_jesli_fałsz

// int price = intgredient == 0 ? 3 : 5;
// std::cout<<"Koszt skladnika wynosi "<<price<<" PLN";