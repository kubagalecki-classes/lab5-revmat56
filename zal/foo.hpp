#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    // Twoja implementacja tutaj
    
    std::vector<char> wektor (people.size()); //stworzenie pustego wektora obiektow typu char 

    for (auto it = people.begin(); it != people.end(); ++it)
    {
        it -> birthday();
        
    } // petla aktywuje metode birthday dla wszystkich pol age podanej listy

    int i = 0;
    for (auto it = people.end(); it != people.begin();)
    {
      
        --it;
        if (it->isMonster() == true)
        {
            wektor[i]='n';
        }
        else
        {
            wektor[i]='y';
        }

        ++i;

    } // petla do zwracanego wektora wpisuje znaki y lub n w zaleznosci od tego co wskaze is Monster, lista odczytuje sie od tylu

    
    return wektor;
}
