//
//  image.hpp
//  
//
//  Created by Bex A on 9/17/19.
//

#ifndef image_hpp
#define image_hpp

unsigned char* readPPM (const char* fileName, int* width, int* height);

void writePPM (const char* fileName, int width, int height, unsigned char* image);



#endif /* image_hpp */
