//
//  image.cpp
 #include <cstdio>
//
//  Created by Bex A on 9/17/19.
//

#include "image.hpp"

int main() {
    
    int height = 0;
   int width = 0;
    int size = 0;
    char P6 [3];
  
    
    FILE* fp = fopen ("test.ppm", "rb");
  
    
    fscanf (fp, "%s", P6);
    
    printf ("%s\n", P6);
    
    
    fscanf(fp, "%d %d\n", &width,  &height);
    
    printf ("%d %d\n", width, height);
    
    fscanf (fp, "%d", &size);
    
    printf("%d\n", size);
    
    
    unsigned char* image = new unsigned char[size];
    
    
    fread (image, sizeof(char), size, fp);
    

    
    fclose(fp);
    
    return 0;
    
}



//What is wrong with the following code, and how would you fix it?
//void swap(int* a, int* b) {
   // int* tmp = a;
    //a = b;
  //  b = tmp;
//} // end of swap method

//Answer**
//You can not make a=b and then have b = tmp. To fix this I woul just make a = tmp.


//2. Suppose you have a function that takes an array as an argument in the usual way, which is declared as:
//void f(int* array, int length);
//Suppose you also have an array declared as:
//int a[128];
//How would you pass a sub-array containing only the third through sixth elements of a to the
//function f?

//Answer**
//I would create an unsigned char that pushes a value into it.

//3. What is wrong with the following code and how would you fix it?
//double* allocateArray(int length) {
  //  double array[length];
    //return array;
//}

//Answer**
//You can not return an array instead, return the value of 0. Also, length can not be changed from and int and then declared as a double.
//Instead declare the original array a double.


//4. What is wrong with the following code, and how would you fix it?
//char string[5];
//string[0] = ’h’;
//string[1] = ’e’;
//string[2] = ’l’;
//string[3] = ’l’;
//string[4] = ’o’;
//printf("%s\n", string);

//Answer**
// String 2 & 3 are made ints instead off strings. Also the char is missing a * at the end of it.






   // unsigned char* image = new unsigned char[image2];


//printf("%d\n", &image);

    //fread(array, sizeof(int), 400, fp);


  //  fclose(fp);


//return 0;




    //unsigned char* image = const char *(fp, "%d %d %d",&width, &height, &size);

  //  printf ("%d\n", *image);

    //return ;


  //  **reprint P6
    //
    
    
   // int* flat = new int [width * height];
    
  //  for (int i = 0; i< 255; i++)
    
   // {
    //    int* array = width * length;
    //    printf ("%lg\n", array[i]);
        
  //  }
    
    















//for (int i=1; i<height; i++)

//a
