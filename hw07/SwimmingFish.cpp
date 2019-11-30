//
//  SwimmingFish.cpp
//  
//
//  Created by Bex A on 10/21/19.
//

#include "SwimmingFish.hpp"
#include <cstdlib>
#include <cmath>
#include <list>
#include <vector>
#define PI 3.14159265


SwimmingFish::SwimmingFish ()



{
    int x;
    int y;
    std::cout<<"Enter x value: ";
    std::cin>>x;
    std::cout<<"Enter y value: ";
    std::cin>>y;
    
    std::cout<<"\n";
    
    std::cout<<"Sin("<<x<<"PI/"<<y<<") "<<(x*PI)/180.0;
    
    std::cout<<"\nCos("<<x<<"PI/"<<y<<")"<<(x*PI)/180.0<<"\n";
    
}

Fish::Fish ()
{
    std::cout<<"\n";
    
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
    
    
    
    int speed = rand()% 100;
    std::cout<<"\n";
    std::cout<<"Your fish's speed is "<<speed<<"\n";
    
    for ( int i = 0; i<1; i++)
        
    {
        std::cout<<"\n";
        
        std::string fishes[] = {"Siamese Fighting fish", "Betta fish", "Blue Tang", "Oscar fish", "Eel", "Shark", "Alaska Pollock", "Clownfish", "Whale", "Dolphin", "Puffer Fish"};
        
        int randdirect = rand()% 100;
        
        int fished = rand() % 1;
        if(     fished > 20) std::cout<<"Your " <<fishes[10] <<" swam in the left direction, at an angle of "<<randdirect<<"\n";
        
        else if(fished < 21) std::cout<<"Your " <<fishes[10] <<" swam in the right direction, at an angle of "<<randdirect<<"\n";
        
        
        int turn_rate=0;
        int direction=0;
        
        int choice = rand() % 3;
        if(     choice == 0) direction -= turn_rate;
        else if(choice == 2) direction += turn_rate;
        x += speed * direction *(x*PI)/180.0;
        y += speed * direction *(x*PI)/180.0;
        
        
    }
}


Population::Population()

{
    
    Fish** maxFish;
    
    maxFish = new Fish*[40];
    
    
    std::cout<<"\n";
    
    
    {
        int array[40], position, c, n;
        
        printf("Enter number of fishes in array\n");
        scanf("%d", &n);
        
        printf("Enter %d fishes that you want to delete\n", n);
        
        for ( c = 0 ; c < n ; c++ )
            scanf("%d", &array[c]);
        
        printf("Enter the location where the fish that you want to delete is\n");
        scanf("%d", &position);
        
        if ( position >= n+1 )
            printf("Cannot delete a non existing element.\n");
        
        else
        {
            for ( c = position - 1 ; c < n - 1 ; c++ )
                array[c] = array[c+1];
            
            printf("Your new array is\n");
            
            for( c = 0 ; c < n - 1 ; c++ )
                printf("%d\n", array[c]);
            
            std::cout << "Size of this array is : "<<sizeof(n)<<std::endl;
            std::cout<<"\n";
            
            //        delete fishes;
            
            
        }
    }
    
    
    
    
    
    }





