//
//  main.cpp
//  
//
//  Created by Bex A on 9/23/19.
//

#include "main.hpp"
#include "image copy.cpp"
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
    
        
        //2D
        
        //void method(int array[650][652]) {
        
            
       // int** array = new int*[size];
    
          //  for int
        
        }
        
        
        
        
    }
    
    
    
    
    
    fclose(fp);
    
    return 0;
    
}
