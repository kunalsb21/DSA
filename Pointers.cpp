#include <iostream>
using namespace std;

// // Pointer Functions
// void print(int *p){
//   cout << *p << endl;
// }

// void update(int *p){
//  // p = p+1;
//   *p = *p + 1;
// }

// int getSum(int *arr, int n){
  
//   //cout << endl << "Size :"<< sizeof(arr) << endl;

//   int sum = 0;
//   for(int i=0; i<n; i++)
//     sum+=arr[i];

//   return sum;
// }

// void fun(int a[]) {
//     cout << a[0] << " ";
// }

// void square(int *p){
//  int a = 10;
//  p = &a;
//  *p = (*p) * (*p);
// }





int main() {
  // int num = 5;
  // cout << num;

  // // address of oprator

  // cout << " Address of num is "<< &num << endl;

  // // Pointer: Stores address

  // int *ptr = &num; // Created pointer stored address of num to it;

  // cout << "Data of ptr is "<< *ptr << endl;
  // cout << "Address of ptr is "<< ptr << endl;

  // cout << endl;
  
  // double d = 4.2;
  // double *p = &d;
  
  // cout << "Data of p is "<< *p << endl;
  // cout << "Address of p is "<< p << endl;

  // cout << endl;

  // cout << "Size of integer is "<< sizeof(num) <<endl;
  // cout << "Size of pointer ptr is "<< sizeof(ptr) << endl;
  // cout << "Size of pointer p is "<< sizeof(p) << endl;

  // cout << endl;

  // int i = 10;
  // //int *a = &i;
  // int *a = 0;
  // a = &i;

  // cout << a << endl;
  // cout << *a << endl;

  // int n = 12;
  // int b = num;
  // b++;

  // cout << n << endl;

  ////Pointer Arrays

  // int arr[10];

  // cout << "Address of first memory block is "<< arr << endl;

  // cout << "Address of first memory block is "<< &arr[0] << endl;

  // cout << "Data of first memory block is "<< *arr << endl;

  // cout << "4th "<< *arr + 1 << endl;

  // cout << "5th "<< *(arr + 1)  << endl;

  // cout << "6th "<< (*arr)+1 << endl;

  // cout << "7th "<< arr[2] << endl;

  // // arr[i] = *(arr+i)
  // //       or
  // // i[arr] = *(i+arr)

  // int i = 2;
  // cout << "8th "<< i[arr] << endl;

  // // Differences between arrays and pointers

  // int temp[10];
  // cout << sizeof(temp) << endl;
  // cout << sizeof(*temp) << endl;
  // cout << sizeof(&temp) << endl;

  // cout << endl;

  // int *ptr = &temp[0];
  // cout << sizeof(ptr) << endl;
  // cout << sizeof(*ptr) << endl;
  // cout << sizeof(&ptr) << endl;

  
  // int a[20] = {1,2,3,4,5};
  // cout << a << endl;
  // cout << &a << endl;
  // cout << &a[0] << endl;
  
  // cout << endl;
  
  // int *p = &a[0];
  // cout << p << endl;
  // cout << *p << endl;
  // cout << &p << endl;

  //int arr[10];
   // Error
       //arr = arr + 1;

  // int *ptr = &arr[10];
  // cout << ptr << endl;
  // ptr = ptr + 1;
  // cout << ptr << endl;


  // // Character Arrays

  // int arr[5] = {1,2,3,4,5};
  // char ch[6] = "abcde";

  // cout << arr << endl;
  // cout << ch << endl;

  //  //Implementation of cout function is diff for int and char array

  // char *c = &ch[0];
  // cout << c << endl;

  //  // Pointer Functions

  // int value = 5;
  // int *p = &value;

  // // print(p);
  
  // cout << "Before "<< *p << endl;
  // update(p);
  // cout << "After "<< *p << endl;

  
  // int arr[5] = {1,2,3,4,5};

  // cout << "Sum is "<< getSum(arr, 5) << endl;

  //  cout << "Sum of last three elements "<< getSum(arr+2, 3) << endl;
  
  // float f = 10.5;
  // float p = 2.5;
  // float* ptr = &f;
  // (*ptr)++;
  // *ptr = p;
  // cout << *ptr << " " << f << " "<< p;
  // // ptr points to f. f is incremented by 1 through ptr (f = 11.5 now). 
  // // f = p using ptr (f = 2.5 now).

  // int a = 7;
  // int *c = &a;
  // c = c + 1;
  // cout  << a << "  " << *c << endl;


// Refer to pointers problems: https://www.naukri.com/code360/guided-paths/pointers
//   int arr[] = {4, 5, 6, 7};
//   int *p = (arr + 1);
//   cout << *arr + 9;
//   return 0;
  
  // char s[]= "hello";
  // char *p = s;
  // cout << s[0] << " " << p[0];

  // Double Pointer

  // int i = 5;
  // int* p = &i;
  // int** p2 = &p;
  // int*** p3 = &p2;

  // cout << p << " " << p2 << endl;
  // cout << *p << " " << *p2 << *p3 << endl;

  // //Printing value of i
  // cout << i << " " << *p << " "<<  **p2 <<" "<<  ***p3 << endl;


  // char arr[20];
  // int i;
  // for(i = 0; i < 10; i++) {
  //   *(arr + i) = 65 + i;
  // }
  // *(arr + i) = '\0';
  // cout << arr;
  // return 0;


  // int numbers[5];
  // int * p;
  // p = numbers; 
  // *p = 10;
  // p = &numbers[2]; 
  // *p = 20;
  // p--; 
  // *p = 30;
  // p = numbers + 3;
  // *p = 40;
  // p = numbers;
  // *(p+4) = 50;
  // for (int n=0; n<5; n++) {
  //    cout << numbers[n] << ",";
  // }

  //Solution: 
  
  // 1. p is assigned to the address of the first element of the array, and *p = 10 sets the first element to 10.
  // 2. p is assigned to the address of the third element, and *p = 20 sets the third element to 20.
  // 3. p is decremented, pointing to the second element, and *p = 30 sets the second element to 30.
  // 4. p is assigned to the address of the fourth element, and *p = 40 sets the fourth element to 40.
  // 5. p is assigned to the address of the first element, and *(p+4) = 50 sets the fifth element to 50.
  // So, the output is "10 30 20 40 50".

  // char st[] = "ABCD";
  // for(int i = 0; st[i] != '\0'; i++) {
  //    cout << st[i] << *(st)+i << *(i+st) << i[st];
  // }

  //st[i] is equivalent to *(st+i) and i[st], so all three will print the same thing that is the ith character of the given string.
  // *(st)+i: prints the ASCII value of the first character ('A') plus the index i as when character and integer are added, implicit typecasting to integer is done.
  // So, the output is "A65AAB66BBC67CCD68DD".

  // char s[] = "abcd";
  // for(int i=0;s[i] != '\0';i++){
  //   cout << *(s)+i << " " << endl;
  // }


  // int a[] = {1, 2, 3, 4};
  // fun(a + 1);
  // cout << a[0];


  // int a = 10;
  //  square(&a);
  //  cout << a << endl;


  // int a = 10;
  // int *p = &a;
  // int **q = &p;
  // int b = 20;
  // *q = &b;
  // (*p)++;
  // cout << a << " " << b << endl;

  // int ***r, **q, *p, i=8;
  // p = &i;
  // (*p)++;
  // q = &p;
  // (**q)++;
  // r = &q;
  // cout<<*p << " " <<**q << " "<<***r;
  // return 0;

  // // Pointer MCQs // //
  
  // int first = 8;
  // int second = 18;
  // int *ptr = &second;
  // *ptr = 9;
  // cout << first << " " << second << endl;

  
  // int first = 6;
  // int *p = &first;
  // int *q = p;
  // (*q)++;
  // cout << first;

  // int first = 8;
  // int *p = &first;
  // cout << (*p)++ << " ";
  // cout << first << endl;

  // int *p = 0;   // Null pointer
  // int first = 110;
  // *p = first;
  // cout << *p << endl;

  int first = 8;
  int second = 11;
  int *third = &second; 
  first = *third;
  *third = *third + 2;
  cout  << first << "  " << second << endl;
  
}