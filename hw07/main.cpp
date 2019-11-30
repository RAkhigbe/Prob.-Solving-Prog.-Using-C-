//
//  main.cpp
//  hw07
//
//  Created by Bex A on 10/21/19.
//  Copyright © 2019 Bex A. All rights reserved.
//

#include <iostream>
#include "SwimmingFish.hpp"
#include <cstdlib>
#include <cmath>

int main(int argc, const char * argv[]) {
    
    int n=0;
    
    
    while( n <= 20){
        SwimmingFish fishy;
        
        Fish fish1;
        Population fishPop;
        
        
        
        {
            
            std::cout<<"\n";
            
            
            
            std::cout<<"Both fish are starting at (0,0), If your fish turns right they die. If the turn left they live.\n";
            std::cout<<"\n";
            
            for ( int i = 0; i<1; i++)
            {
                
                int fished = rand() % 1;
                if(     fished > 1) std::cout<<"Your fish turned right and died.\n";
                else if(fished < 2) std::cout<<"Your fish turned left and wandered into a random prallel universe!"<<"\n";
                
                
                
            }
        }
    }
    
}
