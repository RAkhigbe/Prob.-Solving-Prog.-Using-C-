//
//  DrunkenFish.cpp
//  
//
//  Created by Bex A on 11/3/19.
//

#include "DrunkenFish.hpp"
#include <cmath>

//DrunkenFish::DrunkenFish()
//
//{
//
//}

DrunkenFish::DrunkenFish()


{
    
    
    
    int y=0;
    int x=0;
    int speed =0;
    int choice = rand() % 4;
    if(     choice == 0) x += speed;
    else if(choice == 1) y += speed;
    else if(choice == 2) x -= speed;
    else                 y -= speed;
    
    std::cout<<"Your Drunken Fish's random walk is "<<choice<<std::endl;
}

DrunkenPopulation::DrunkenPopulation()
{
    
    
    
    int swimmer=rand() % 1000000000000;
    
    std::cout<<"The Drunken fish that is swimming is number "<<swimmer<<"\n";
    
    for ( int i = 0; i<1; i++)
    {
        
        int fished = rand() % 1;
        if(     fished > 100) std::cout<<"Your fish is still alive."<<"\n";
        else if(fished < 101) std::cout<<"Your fish has died. Boohoo."<<"\n";
        
        
        int lastFish=rand() % 1000000000000;
        
        std::cout<<"The last fish left is "<<lastFish<<"\n";
        
        
        
        
        
    }
    
    
}
