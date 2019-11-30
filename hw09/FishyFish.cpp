//
//  FishyFish.cpp
//  Fish
//
//  Created by Bex A on 11/8/19.
//  Copyright © 2019 Bex A. All rights reserved.
//

#include "FishyFish.hpp"
#include <cmath>


FishyFish::FishyFish()


{

    std::cout<<"Both fish are starting at 0 "<<"\n";
    int random = rand()% 3;
    if( random == 0 ){
        std::cout<<"Your fish turned left "<<std::endl;
        
        
        if( random == 1 ){
            std::cout<<"Your fish turned right ";
            
            if(random == 2){
                std::cout<<"Your fish kept straight";
                
                
                
            }
        }
        
    }
    
    
    int x, y;
    
    std::cout<<"X coordinate is ";
    
    std::cin>>x;
    
    std::cout<<"Y coordinate is ";
    
    std::cin>>y;
    
    
    
    int rando = rand()% 100;
    std::cout<<"Your Fishy Fish's speed is "<<rando<<"\n";
}



FlippyPopulation::FlippyPopulation()

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
    
    


