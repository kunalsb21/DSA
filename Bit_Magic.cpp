#include <iostream>
#include<math.h>
#include <bits/stdc++.h> 

using namespace std;

//*** Check if kth bit is set or not ***//

//Naive
 // void isSet(int n, int k){
 //   int x = 1;
 //   for(int i=0; i< (k-1); i++)
 //     x = x*2;

 //   if((n%x)!=0)
 //     cout << "Yes";
 //   else
 //     cout<<"No";
 // }

// Efficient method 1

//** Left Shift
// void isSet(int n, int k){
//   if((n& (1<<(k-1)))!=0)
//     cout << "Yes";
//   else
//     cout<<"No";
// }

//** Right Shift
// void isSet(int n, int k){
//   if(((n>>(k-1))&1)==1)
//     cout << "Yes";
//   else
//     cout << "No";
// }

// Count Set Bits //

// int countSetBits(int n){
//   int res = 0;
//   while(n>0){
    // if((n%2)!=0){
    //   res++;
    //   n = n/2;
//------------------------------//
  //   if((n&1)==1)
  //     res++;
  //   n = n>>1;     
//-------------------------------//
  //   res = res + (n&1);
  //   n = n>>1;
  // }  
  //  return res;
  
//}

//*** Brian Kerningam's Algorithm ***//

// int countSetBits(int n){
//   int res = 0;
//   while(n>0){
//     n = n&(n-1);
//     res++;
//   }
//   return res;
// }

//***  Count SetBits using LookUp Table  ***//

// int tbl[256];

// void initialize(){
//   tbl[0] = 0;
//   for(int i=1; i<256; i++)
//     tbl[i] = tbl[i & (i-1)] +1; 
// }

// int countSetBits(int n){
//   return (tbl[n&255] + tbl[(n>>8)&255] + tbl[(n>>16)&255] + tbl[(n>>24)]);
// }

//*** Check if n is Power of 2 ***//

// bool isPow2(int n){
//   if(n==0)
//     return false;

//   while(n!=1){
//     if((n%2)!=0)
//       return false;
//     n = n/2;
//   }
//   return true;
// }

//  Using Brian Kerningam algo

// bool isPow2(int n){
//   if(n==0)
//     return false;
//   return ((n&(n-1))==0);
// }

// or

// bool isPow2(int n){
//   return (n!=0) && ((n&(n-1))==0);
// }


//*** Find only odd times occuring number ***//

//Naive

// int findOdd(int arr[], int n){
//   for(int i=0; i<n ; i++){
//     int count = 0;
//     for(int j = 0; j<n;j++){
//       if(arr[j]==arr[i])
//         count++;      
//     }
//     if((count%2)!=0)
//       cout << arr[i];
//   }
// }

//Efficient

// int findOdd(int arr[], int n){
//   int res = 0;
//   for(int i=0; i<n; i++)
//     res = res^arr[i];

//   return res;
//   }

//*** Find two odd appearing numbers in an array

// void oddAppearing(int arr[], int n){
//    int xors = 0, res1 = 0, res2 = 0; 

//           for (int i = 0; i < n; i++) 
//           xors = xors ^ arr[i]; 


//           int sn = xors & (~(xors - 1)); 


//           for (int i = 0; i < n; i++) 
//           { 
//               if ((arr[i] & sn) != 0) 
//                   res1 = res1 ^ arr[i]; 
//               else
//                   res2 = res2 ^ arr[i]; 
//           } 


//           cout <<  res1 << " " << res2;
//   }

//*** Power set using bitwise operators 

// void powerSet(string str){
//   int n = str.length();
//   //int powSize = pow(2,n);
//   int powSize = (1<<n);

//   for(int counter = 0; counter<powSize; counter++){
//     for(int j = 0; j<n; j++){
//       if((counter&(1<<j))!=0)
//         cout<<str[j]<<" ";      
//     }
//     cout<< "\n";
//   }  
// }

// Swap all odd and even bits

unsigned int swapBits(unsigned int N)
{
        // Get all even bits
        unsigned int even_bits = N & 0xAAAAAAAA; 

        // Get all odd bits of x 
        unsigned int odd_bits = N & 0x55555555; 

          // Right shift even bits 
        even_bits >>= 1;
        

          // Left shift odd bits 
        odd_bits <<= 1; 

          // Combine even and odd bits 
        return (even_bits | odd_bits); 
}






int main() {
  
  // int a = 1;
  // int b = 5;
  // unsigned int x = 1;
  // unsigned int y = 5;
  // cout<< (x&y) ;
  // cout<<(x|y);
  // cout<<(x^y);
  // cout<<(x<<1)<< " "<< (y<<1)<<endl;
  // cout<<(x>>1)<< " "<< (y>>1)<<endl;
  // cout << (~x) << " "<< (~y)<<endl;
  // cout << (~a) << " "<< (~b)<<endl;

  //isSet(5, 2);
  //cout << countSetBits(5);
  //cout << isPow2(16);

  // int arr[5] = {1,1,3,3,4};
  // cout<< findOdd(arr, 5);

  // int arr[]= {3, 4, 3, 4, 5, 4, 4, 6, 7, 7}, n = 10;
  // oddAppearing(arr, n);

  //powerSet("abc");

  //cout << swapBits(23);


  
  
  return 0;
} 