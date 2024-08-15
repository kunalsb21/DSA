#include <iostream>
using namespace std;

// Log 2 base n
// int fun(int n){
//   if(n==1)
//     return 0;
//   else
//     return 1+fun(n/2);
// }

//Decimal to binary
// void fun(int n){
//   if(n==0)
//     return;
//   fun(n/2);
//   cout<<(n%2);
// }

// Print n to 1 using recursion

// void printNto1(int n){
//   if(n==0)
//     return;
//   cout << n << " ";
//   printNto1(n-1);
// }

// print 1 to n

// void print1toN(int n){
//   if(n==0)
//     return;
//   print1toN(n-1);
//   cout << n << " ";
// }

// Factorial of n
// int fact(int n){
//   if(n==0)
//     return 1;
//   return n*fact(n-1);
// }

// Nth Fibonacci number
// int fib(int n){
//   if(n==0)
//     return 0;
//   if(n==1)
//     return 1;
//   return fib(n-1)+fib(n-2);
// }

// Sum of N natural nos

// int sum(int n){
//   if(n==0)
//     return 0;
//   return n+sum(n-1);
// }

// Palindrome check using recursion

// bool isPalindrome(string &str, int start, int end){
//   if(start>=end)
//     return true;
//   return ((str[start]==str[end]) && isPalindrome(str, start+1, end-1));
// }


// Sum of Digits using recursion

// int getSum(int n){
//   if(n<=9)
//     return n;
//   return getSum(n/10)+(n%10);
// }

//using iterative solution

// int getSum(int n){
//   int res = 0;
//   while(n>=0){
//     res = res + n%10;
//     n = n/10;
//   }
//   return res;
// }

//*** Rope Cutting Problem ***//

/*
int maxPieces(int n, int a, int b, int c){
  if(n==0)
    return 0;
  if(n<=-1)
    return -1;
  int res = max(maxPieces(n-a, a, b, c), max(maxPieces(n-b, a, b, c), maxPieces(n-c, a, b, c)));

  if(res==-1)
    return -1;
  return res+1;
}

*/

//*** Generate Subsets ***//

// void subsets(string s, string curr="", int i=0){
//   if(i==s.length()){
//     cout<<curr<<" ";
//     return;
//   }
//   subsets(s,curr,i+1);
//   subsets(s, curr+s[i], i+1);
// }

// void powerSetUtil(string &str, vector<string>&v,int index = 0,string curr = "")
// {
//     int n = str.length();

//     //base case
//     if (index == n)
//     {
//        v.push_back(curr);    
//        return;
//     }   
//     //Two cases for every character
//     //(i) We consider the character as part of current subset.
//     //(ii) We do not consider current character as part of current subset.

//     //Calling the function recursively for both cases.
//     powerSetUtil(str, v, index+1, curr);
//     powerSetUtil(str, v, index+1, curr+str[index]);
// }

//*** Tower of Hanoi ***//

// void toh(int n, char A, char B, char C){
//   if(n==1){
//     cout<< "Move 1 from " << A << "to " << C << endl;
//     return;
//   }
//   toh(n-1,A,C,B);
//   cout<< "Move "<< n << " from " << A << "to " << C << endl;
//   toh(n-1,B,A,C);
// }


//*** Josephus Problem

// int jos(int n, int k){
//   if(n==1)
//     return 0;
//   else
//     return (jos(n-1,k)+k)%n;
// }

//*** Subset sum problem

// int countSubsets(int arr[],int n, int sum){
//   if(n==0)
//     return (sum==0)? 1:0;
//   return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum-arr[n-1]);
// }

//*** Printing all permutations of a string

// void permute(string s, int i=0){
//   if(i==s.length()-1){
//     cout<< s << " ";
//     return;
//   }
//   for(int j=i; j<s.length(); j++){
//     swap(s[i],s[j]);
//     permute(s,i+1);
//     swap(s[i],s[j]);
//   }
// }

//*** Fibonacci using recursion
// int fibonacci(int n)
// {
//     if(n<=1)
//         return n;
//     return fibonacci(n-1) + fibonacci(n-2);
// }

//*** Count Total Digits in a Number
// int countDigits(int n)
// {
//    if(n<=9){
//        return 1;
//    }
//    return countDigits(n/10) + 1;
// }





int main() {
  //cout << fun(16);
  //fun(10);
  //printNto1(8);
  //print1toN(8);
  //cout<<fact(5);
  //cout << fib(4);
  //cout << sum(4);
  // string s ="abbcbba";
  // cout << isPalindrome(s, 0, s.length() -1);

  //cout<<getSum(253);
  //cout << maxPieces(23, 12, 9, 11);
  //subsets("AB");

  //TowerofHanoi
  // int n=4;
  // toh(n,'A','B','C');
  // return 0;

  // cout<<jos(4,2);

  // int n = 5;
  // int arr[] = {10,5,2,3,6};
  // cout<<countSubsets(arr, n, 8);

  //permute("ABC");

  
}