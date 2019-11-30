//
//  ImageClass.cpp
//  
//
//  Created by Bex A on 10/30/19.
//

#include "ImageClass.hpp"
#include <iostream>
 #include <cstdio>
//int main(int argc, const char * argv[])
//
//{
ImageClass::ImageClass()

{
    
}
ImageClass::~ImageClass()
{
    
}
void ImageClass::readPPM (const char* fileName)
{

    int size;
    char P6 [3];

    FILE* fp = fopen ("test.ppm", "rb");

    fscanf (fp, "%s", P6);
    printf ("%s\n", P6);


    fscanf(fp, "%d %d\n", &(this->width),  &(this->height));

    printf ("%d %d\n", width, height);

    fscanf (fp, "%d\n", &size);

    printf("%d\n", size);

    pixel = new  unsigned char [width * height * 3];
    fread (pixel, sizeof(unsigned char), width * height * 3, fp);

    fclose(fp);

}

void ImageClass::writePPM (const char* fileName)
{

    FILE* fp = fopen (fileName, "wb");


    fprintf (fp, "%s\n", "P6");

    
    std::cout<<"width, height"<<width<<height<<std::endl;
    fprintf (fp, "%d %d\n", width, height);
    
    


    fprintf(fp, "%d\n", 255);


    fwrite(pixel, sizeof(unsigned char), width * height * 3, fp);
    
    

    fclose (fp);


}

