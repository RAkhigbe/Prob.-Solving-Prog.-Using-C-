//
//  ImageClass.hpp
//  
//
//  Created by Bex A on 10/30/19.
//

#ifndef IMAGECLASS_hpp
#define IMAGECLASS_hpp

#include <stdio.h>
#include <iostream>


class ImageClass {
    
private:
    
    int width;
    int height;
    unsigned char* pixel;
        
    
    
public:
    
    ImageClass ();
    ~ImageClass();

    
    
   void  readPPM(const char* fileName);
    
    void writePPM (const char* fileName);

    
    
    
    
};




#endif /* ImageClass_hpp */
