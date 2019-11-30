//
//  JPEGClass.hpp
//  
//
//  Created by Bex A on 10/30/19.
//

#ifndef JPEGCLASS_hpp
#define JPEGCLASS_hpp

#include <stdio.h>
#include <iostream>

class JPEGClass {
    
public:
    
    JPEGClass ();
    
    int write_jpeg_file( const char *filename, int width, int height, unsigned char* raw_image);
    
    
    
    
};



#endif /* JPEGClass_hpp */
