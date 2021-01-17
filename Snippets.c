/*
Useful links:
  * https://www.youtube.com/watch?v=-CpG3oATGIs
  * https://cs1000.vercel.app/
*/

// %% Format string usage
#include <stdio.h>
int main() {
   printf("Integers: %d and %d\n", 32, 42); 
   printf("Float: %.2f\n", 32.0);  
   printf("Large int: %ld\n", 32); 
   printf("Large float: %lf\n", 32.0); 
   printf("Char: %c\n", 'c'); 
   printf("String: %s\n", "Hi");
   printf("Hex: %x\n", 16);
   return 0;
}

// %% Passing an integer casts it to 0 in printf
#include <stdio.h>
int main() {
   float myf = 32;
   printf("Float myf: %.2f \n", myf);
   printf("Float direct: %.2f \n", 32);
   return 0;
}

// %% puts also works for printing
#include <stdio.h>
int main() {
   puts("This is my c program");
   return 0;
}

// %% Data types, instantiation and assignment
#include <stdio.h>
int main() {
   int age;
   age = 21;
   float pi = 3.14;
   char c = 'a';
   double bpi = 3.140000000000000;
   printf("The age is %d \n", age);
   return 0;
}

// %% Division and modulus with casting
#include <stdio.h>
int main() {
    int a = 11, b = 2;
    int ci = a / b;
    int cm = a % b;
    float cf =  a / b;
    float cf2 = (float) a / b;
    double cd = a / b;

    printf("Integer: %d \n", ci); 
    printf("Float: %.2f \n", cf); 
    printf("Float2: %.2f \n", cf2); 
    printf("Double: %.2f \n", cd);
    printf("Modulus: %d \n", cm); 
    return 0;
}

// %% Conditionals and scanf user input
#include <stdio.h>
int main() {
   int age;
   puts("Want to buy alcohol?");
   printf("Please enter your age: ");
   scanf("%d", &age);
   if ( age > 18 ) {
      puts("Okay");
   } else if ( age == 18 ) {
      puts("Okay lil nippa");
   } else if ( age < 18 ) {
      puts("Nah bro");
   }
   return 0;
}

// %% Ternary operator 
#include <stdio.h>
int main() {
   int a = 10, b = 20;
   int c = (a < b) ? a : b;
   printf("Result: %d", c);
   return 0;
}

// %% Switch statements keep checking until break
#include <stdio.h>
int main() {
   int a = 2;
   switch(a) {
      case 1 :
         puts("one");
         break;
      case 2 :
         puts("two");
      case 2 | 3:
         puts("three?");
      default :
         puts("default");
   }
   return 0;
}

// %% While, do while and incrementing
#include <stdio.h>
int main() {
   int i = 0;
   while ( i < 10 ) {
      printf("Value of i: %d \n", i++);
   }
   puts("-------------");
   int j = 0;
   while ( j < 10 ) {
      printf("Value of j: %d \n", ++j);
   }
   puts("-------------");
   int k = 0;
   do {
      printf("Value of k: %d \n", k++);
   } while ( k < 0 );
   return 0;
}

// %% for loop 
#include <stdio.h>
int main() {
   for ( int i = 0; i < 10; i++ ) {
      printf("Value of i: %d \n", i);
   }
   puts("-------------");
   for ( int i = 0; i++ < 10; ) {
      printf("Value of i: %d \n", i);
   }
   puts("-------------");
   for ( int i = 0; ++i < 10; ) {
      printf("Value of i: %d \n", i);
   }
   return 0;
}

// %% Defining a void function with prototyping
#include <stdio.h>
void MyFunc(int a, int b);
int main() {
   MyFunc(1, 2);
   return 0;
}
void MyFunc(int a, int b) {
   printf("The numbers are %d and %d", a, b);
}

// %% Local and global variables with default values and side effects
#include <stdio.h>
int g; // global variable
int NumberReturn() {
   int y; // local variable
   g = g + 1;
   return y;
}
int main() {
   int x; // local variable
   printf("Default g: %d \n", g);
   printf("Default y: %d \n", NumberReturn());
   printf("g after function: %d \n", g);
   printf("Default x: %d \n", x);
   return 0;
}

// %% Arrays
#include <stdio.h>
int main() {
   int a1 [3] = {20,30,60};
   int a2 [4] = {20,30,60,55};
   int b = a1[0];
   printf( "int value = %d \n", b );
   puts("-------------");

   char c1 [2] = {'a', 'b'};
   c1[1] = 'c';
   for (int i = 0; i <= 1; i++ ) {
      printf( "char value %d = %c \n", i,  c1[i] );
   }
   puts("-------------");
   
   int d1 [2] [3] = { // 2x3 matrix-like array
      {1,2,3},
      {4,5,6}
   };
   for (int i = 0; i < 2; i++) {
      for (int j = 0; j < 3; j++) {
         printf("d1[%d][%d] = %d \n", i, j, d1[i][j]);
      }
   }
   return 0;
}

// %% Passing an array as a function argument
// Note method 1 and 3 are the same thing 
// because int arr[] is the same as int *arr
#include <stdio.h>
// Method 1
void ArraySum1(int *arr, int size) {
   // code
}
// Method 2
void ArraySum2(int arr[6]) {
   // code
}
// Method 3
void ArraySum3(int arr[], int size) {
   int sum = 0;
   for (int i = 0; i < size; i++ ) {
      sum += arr[i];
   }
   printf("The sum is %d", sum);
}
int main() {
   ArraySum3((int[]){1,2,3,4,5,6}, 6);
   return 0;
}

// %% Assign array to array
#include <stdio.h>
#include <string.h>
void printarray(int *arr, int size) {
   // See this tricky way to get array size
   for ( int i = 0; i < size; i++ ) {
      printf("value = %d \n", arr[i] );
   }
}
int main() {
   // Method 1 (may not always work? undefined?)
   //int arr [3];
   //memcpy(arr, (int[]){4,5,6}, sizeof arr ); 
   //printarray(arr, sizeof arr / sizeof arr[1]);

   // Method 2
   int arr2 [3]  = {1,2,3};
   int arr3 [3] = {4,5,6};
   memcpy(arr2, arr3, sizeof arr2);
   printarray(arr2, sizeof arr2 / sizeof arr2[1]);
   puts("-------------");

   // Method 3
   typedef struct {
      int array [3];
   } arr_t;
   arr_t arr4 = {1,2,3};
   arr_t arr5 = {4,5,6};
   arr4 = arr5;
   printarray(arr4.array, sizeof arr4.array / sizeof arr4.array[1]);
   return 0;
}

// %% Pointers and dereferencing
#include <stdio.h>
int main() {
   int val = 30;
   int *p = &val;
   printf("value of val = %d \n", val);
   printf("address of val = %x \n", &val); // print hex
   printf("value of p = %x \n", p);
   printf("value of *p = %d \n", *p);
   printf("address of p = %x \n", &p);
   return 0;
}

// %% Arrays of pointers
#include <stdio.h>
int main() {
   int varr [3] = {30,40,50};
   int *parr [3];
   for ( int i = 0; i < 3; i++ ) {
      parr[i] = &varr[i];
   }
   for ( int i = 0; i < 3; i++ ) {
      printf("value of varr[%d] = %d \n", i, *parr[i]);
   }
   return 0;
}

// %% Passing pointers as function arguments
#include <stdio.h>
void getValue(int *p) {
   *p = 10000; 
   return;
}
int main() {
   int get_me;
   getValue(&get_me);
   printf("Value of get_me = %d \n", get_me);
   return 0;
}

// %% Passing pointer arrays as function arguments
#include <stdio.h>
int getSum(int *a, int size) {
   int sum = 0;
   for ( int i = 0; i < size; i++ ) {
      sum += a[i];
   }
   return sum;
}
int main() {
   int arr [4] = {10,20,30,40};
   int mySum = getSum(arr, 4);
   printf("value of mySum = %d \n", mySum);
   return 0;
}

// %% Arrays are actually just pointers
#include <stdio.h>
int main() {
   int arr [4] = {10,20,30,40};
   printf("value of arr = %x \n", arr);
   printf("value of arr[0] = %d \n", *(arr+0));
   printf("value of arr[1] = %d \n", *(arr+1));
   printf("value of arr[2] = %d \n", *(arr+2));
   printf("value of arr[3] = %d \n", *(arr+3));
   printf("size of int = %d \n", sizeof 1);
   printf("int value of arr = %d \n", arr);
   printf("int value of arr + 1 = %d \n", arr + 1); // goes up by 4
   return 0;
}

// What is a string?
#include <stdio.h>
#include <string.h>
int main() {
   char *s0 = "Hello";
   char s1 [6] = {'H','e','l','l','o','\0'};
   char s2 [] = "Hello";
   char s3 [12] = "Hello";
   char s4 [12] = " world!";
   char s5 [12];
   strcpy(s5, s3); // s5 = s3 doesn't work
   strcat(s5, s4);
   puts(s5);
   printf("Size of s3 = %d \n", strlen(s3)); // not size 12
   printf("strcmp(s2, s3) = %d \n", strcmp(s2, s3)); // s2 = s3
   printf("strcmp(s3, s4) = %d \n", strcmp(s3, s4)); // s3 > s4
   printf("strcmp(s3, s4) = %d \n", strcmp(s4, s3)); // s4 < s3
   return 0;
}

// What is a structure?
#include <string.h>
struct student { // This struct will be size 28
   int id; // size 4
   char name[20]; // size 20
   float marks; // size 4
};
struct animal {
   int id;
   char name[20];
} pet1; // Create an instance straight away
int main() {
   struct student record1;
   printf("Size of student = %d", sizeof record1);
   record1.id = 1;
   strcpy(record1.name, "Jimmy");
   record1.marks = 87;

   pet1.id = 2; // didn't need to call struct animal for this
   struct animal pet2;
   pet2.id = 3;
   return 0;
}

// What is a union?
// Union uses the same memory allocation for all fields
#include <stdio.h>
union myUnion { // This union will be size 4
   int myInt; // 4
   char myChar; // 1
};
int main() {
   union myUnion uni;
   uni.myInt = 4;
   uni.myChar = 'a';
   printf("Size of uni = %d \n", sizeof uni);
   printf("uni.myChar = %c \n", uni.myChar);
   printf("uni.myInt = %c \n", uni.myInt); // myInt overwritten!
   return 0;
}