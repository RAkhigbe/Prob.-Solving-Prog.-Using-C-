//
//  main.cpp
//  
//
//  Created by Bex A on 9/25/19.
//

#include <stdio.h>
#include "image.hpp"

int main(int argc, char** argv) {
    
    
    int width = 0;
    int height = 0;
    
   const char* fileName = ("test.ppm");
    unsigned char* pixels = readPPM(fileName,  &width,  &height);
    
    const char* fileName2 = ("picture.ppm");
    writePPM (fileName2, width, height, pixels);
    
    
    
    
    delete [] pixels;
    
    
//    printf ("%s", readPPM);
//
//    int size = 423800;
//
//    for ( int i = 0; i < size; i++ )
//
//        for ( int j = 0; j < size; j++ )
//
//    int row[1] = {
//
//        {0, size}
//
//    };
//
//
//    return 0;
//
}


//1. What is the problem with two-dimensional arrays in C/C++?

    //One main problem is the size of the pointers. Everything has to have an exact thing thatis being declared into the pointer, with no spacefor err. Also, it can be difffult to pass a function due to this.

//2. Describe two ways to work around C/C++’s problems with two dimensional arrays.

     //One way to work around the aeas is to use the secret formula. Another way to avoid the issue is to create a fflat or just create a 1D array instead.

//3. Is your computer big endian or little endian? Hint: write a small program to find out.

     // My computer is little endian.


