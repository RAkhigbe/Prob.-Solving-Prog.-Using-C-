//
//  main.cpp
//  Hw05
//
//  Created by Bex A on 9/30/19.
//  Copyright © 2019 Bex A. All rights reserved.
//

#include "jpeg.hpp"
#include <cstdio>


//unsigned char* readPPM (char* fileName, int width, int height) {




int  main(int argc, const char * argv[]) {
    int width = 50;
    int height = 30;
    unsigned char* pixels = new unsigned char [width * height * 3];
    
    printf ("%s", pixels);
    
    
    for ( int i=0; i<width * height * 3; i+=3)
        
    {
        pixels[i]=90;
        pixels[i+1]=140;
        pixels[i+2]=i%256;
    }
     write_jpeg_file( "practice.jpeg",  width,  height, pixels);
    
 
    int size = 0;
    //char P6 [3];
    
    FILE* fp = fopen ("test.ppm", "rb");
  
    
    fscanf (fp, "%d", &size);
    
    printf("%d\n", size);
    
    
    unsigned char* image = new unsigned char[size];
    
    
    fread (image, sizeof(char), size, fp);
    
    
    
    fclose(fp);


    
    
}

    
    









    
    
    
    // insert code here...
    
    
    //File* fp = fopen ("test.ppm", "rb");
    
   // int write_jpeg_file( char *filename )
   // {
    
    
        
       // struct height;
      //  struct weight;
        
        
    //    Image
        
   // };
    
  //  Struct Image a;
    
 //   a.height = 652;
  //  a.width = 650;
    
    
    
    
   // extern int height;
   // extern int width;
    
    

//int read_jpeg_file( char *filename )


   // image = new image;
    
     //   fclose(fp);
       // return 0;
//}
