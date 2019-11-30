//
//  main.cpp
//  ImageClass
//
//  Created by Bex A on 10/30/19.
//  Copyright © 2019 Bex A. All rights reserved.
//

#include <iostream>
#include "ImageClass.hpp"
#include "JPEGClass.hpp"
#include <cstdio>

int main(int argc, const char * argv[]) {

    ImageClass ppm;
    JPEGClass jpeg;

    const char* fileName = ("test.ppm");
    ppm.readPPM(fileName);

    const char* fileName2 = ("picture.ppm");
    ppm.writePPM(fileName2);
}











































//   int main(int argc, const char * argv[]) {
//        
////            ImageClass classy;
////        int width = 0;
////        int height = 0;
//        
////        const char* fileName = ("test.ppm");
////        unsigned char* pixels = readPPM(fileName,  width,  height);
////
////        const char* fileName2 = ("picture.ppm");
////        writePPM (fileName2, width, height, pixels);
//        
//        
//        
//        
////        delete [] pixels;
//   
//}
