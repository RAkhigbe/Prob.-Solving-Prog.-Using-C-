#include <cstdio>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    void function (int);
    
    int b, c;
     printf("Enter a letter");
    scanf("%d\n", &b);
      printf("Enter a letter");
      scanf("%d\n", &c);
    
    printf("Here are your numbers backwards %d\n & %d\n", b, c);
     return 0;
        
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
