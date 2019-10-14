#include <cstdio>
#include <unistd.h>
#include <sys/file.h>



    int main(int argc, const char * argv[]){
    int counterTool;
    if ((counterTool = open ("/tmp/myappname.counter", O_CREAT | O_RDWR, 100)) < 1) {
        return -1;
    }
    if (flock (counterTool, LOCK_EX | LOCK_NB) < 0) {
        return -1;
    }
    FILE* fp = fdopen(counterTool, "w+");
    int count;
    size_t number;
    number = fread(&count, sizeof(count), 1, fp);
    
  

    if (number < 1) {
        count = 1;
        fwrite(&count, sizeof(count), 1, fp);
    } else{
        count++;
        rewind(fp);
        fwrite(&count, sizeof(count), 1, fp);
    }
    fflush(fp);
    printf("Program has been run %d times.\n", count);
    
    flock (counterTool, LOCK_UN);
    close(counterTool);
}
//1. What is the difference between int and const int?

// Const only reads while, withban int you can read and write.


//2. What is the difference between a function declaration and a function definition?

// Function definition states where something is stored. Function declaration gives details about what is stored.


//3. What is wrong with the following C++ code? How would you fix it?

//int sum;
//for(int i=0; i<1000; ++i) {
   // sum += i; }
//printf("Sum of 0 to 999 is %d\n", sum);

// - The sum can not be += to i.
// - Needs an closing bracket
// - improper looping


//4. What is wrong with the following code and how would you fix it?

//int n = 1;
//if(n = 0) {
  //  print("n is zero\n");
//}

// - Needs a printf
// - Needs an closing bracket
// - n should have two equal signs beore zero
// - improper if statement


//5. What is wrong with the following code and how would you fix it?

//int* ptr = nullptr;
//scanf("%d", ptr);
//printf("You entered %d", *ptr);

// - Needs an closing and beginning bracket
// - int* ptr can not equal nullptr


//6. What is the difference between the * and & operators?

// An ampersand obtain an address while an astrid holds it in its memory.


//7. Describe what each of the following declare:
//
//(a) int* a; Tells us its a pointer.

//(b) const int b; Points to an int.

//(c) const int* c; Pointer that consists of a const int

//(d) int* const d; It is a const pointer to a non const.

//(e) const int* const e; It's a const pointer to a const int.
