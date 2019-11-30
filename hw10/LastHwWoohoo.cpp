//
//  LastHwWoohoo.cpp
//  
//
//  Created by Bex A on 11/18/19.
//

#include "LastHwWoohoo.hpp"
#include <cmath>
#include <list>


LastHwWoohoo::LastHwWoohoo()

{
    std::cout<<"\n";
    
    std::cout<<"Eye Eye kids its ye Pirate Pepe. Me 'n me lads are going to go fishing for some dinner. Let's see if we can catch a fish and how many.";
    
    std::cout<<"\n";
    
    
    
    for ( int i = 0; i<1; i++)
        
    {
        std::cout<<"\n";
        
        int fished = rand() % 1;
        if(     fished > 20) std::cout<<"Your fish is still alive! It escaped the hook."<<"\n";
        
        else if(fished < 21) std::cout<<"Your fish number "<<fished<<" has been captured for super."<<"\n";
        
        
        int caughtFish=rand() % 50;
        
        std::cout<<"\n";
        
        std::cout<<"Pepe and him lads caught themselves "<<caughtFish<<" fish for dinner. \n";
        
        std::cout<<"\n";
        
        
        
        
        list<int> demoList;
        
        
        demoList.push_back(1);
        demoList.push_back(2);
        demoList.push_back(3);
        demoList.push_back(4);
        demoList.push_back(5);
        
        
        std::cout << "What your list looks like now ";
        for (auto itr = demoList.begin();
             itr != demoList.end(); itr++) {
            std::cout << *itr << " ";
        }
        
        
        list<int>::iterator itr1, itr2;
        itr1 = demoList.begin();
        itr2 = demoList.begin();
        
        
        advance(itr2, 10);
        
        
        demoList.erase(itr1, itr2);
        
        
        std::cout << "\n What it looks like after removing those elemnts ";
        for (auto itr = demoList.begin();
             itr != demoList.end(); itr++) {
            std::cout << *itr << " ";
        }
        
        
        
        
        
    }
    
    
    
    
    
}

