//
//  main.cpp
//  hw06
//
//  Created by Bex A on 10/16/19.
//  Copyright © 2019 Bex A. All rights reserved.
//

 #define ANGLE_HPP
#include <iostream>

int main(int argc, const char * argv[]) {

    char op;
    int num1, num2;
    std::cout << "Enter a + or - : ";
    std::cin >> op;
    std::cout << "Enter two numbers: \n";
    std::cin >> num1 >> num2;
    
    switch(op)
    {
        case '+':
            std::cout << num1+num2 <<"\n";
            break;
        case '-':
            std::cout << num1-num2<<"\n";
            break;
            
    }
    
    
    int solved1 = num1+num2 - 360;
    int solved2 = num1-num2 + 360;
    int solved3 = num1-num2 - 360;
    int solved4 = num1+num2 + 360;
    
    
    
    
    
    if( num1+num2 < 1000 ){
        std::cout<<"When I subtracted 360 from your answer I got "<<solved1<<std::endl;
        
        
        
        if( num1-num2 > 1000 ){
            std::cout<<"When I added 360 to your answer I got "<<solved3;
            
            if(num1-num2 < 1000){
                std::cout<<"When I subtracted 360 from your answer I got"<<solved2;
                
                if(num1+num2 > 1000){
                    std::cout<<"When I added 360 to your answer I got "<<solved4;
                    
                    
                    
                    
                }
                
            }
            
        }
    }
}





    
    

