#include <iostream>
#include <cmath>
#include <bits/stdc++.h> 
#include <climits>
#include <deque>
using namespace std;

// Binary Search (iterative solution)

// int binarySearch(int arr[], int n, int key){
//   int s = 0, e = n-1;
//   int mid = s + (e-s)/2;
//   while(s<=e){
//     if(key == arr[mid])
//       return mid;
//     if(key > arr[mid])
//       s++;
//     else
//       e--;
//     mid = s + (e-s)/2;
//   }
//   return -1;
// }


// Binary Search (Recursive solution)

// int binarySearch(int arr[], int s,int e, int key){

//     if(s > e)
//       return -1;
  
//     int mid = s + (e-s)/2;
  
//     if(key == arr[mid])
//       return mid;
//     else if(arr[mid] > key)
//       return binarySearch(arr, s, mid-1, key);
//     else
//       return binarySearch(arr, mid+1, e, key);
 
// }

// Index of first Occurrence in Sorted

//Naive 

// int firstOcc(int arr[], int n, int x){
//   for(int i=0; i<n; i++){
//     if(arr[i]==x)
//       return i
//   }
//   return -1
// }

// using Recursive 

// int firstOcc(int arr[], int s,int e, int key){
  
//       if(s > e)
//         return -1;

//       int mid = s + (e-s)/2;
        
//       if(arr[mid] > key)
//         return firstOcc(arr, s, mid-1, key);
        
//       else if(arr[mid] < key)
//         return firstOcc(arr, mid+1, e, key);

//       else{
//         if(mid==0 || arr[mid-1] != arr[mid])
//           return mid;
//         else
//           return firstOcc(arr, s, mid-1, key);
//       }

  
// }

// int firstOcc(int arr[], int n, int x){
//   int s = 0, e = n-1;
  
//   while(s<=e){
//     int mid = s+(e-s)/2;
//     if(x > arr[mid])
//       s = mid +1;
//     else if(x < arr[mid])
//       e = mid - 1;
//     else{
//       if(mid==0 || arr[mid-1]!= arr[mid])
//         return mid;
//       else
//         e = mid-1;
//     }
//   }
//   return -1;
// }


//Last Occurence

// int lastOcc(int arr[], int n, int x){
//   int s = 0, e = n-1;

//   while(s<=e){
//     int mid = s+(e-s)/2;
//     if(x > arr[mid])
//       s = mid +1;
//     else if(x < arr[mid])
//       e = mid - 1;
//     else{
//       if(mid==n-1 || arr[mid+1]!= arr[mid])
//         return mid;
//       else
//         s = mid+1;
//     }
//   }
//   return -1;
// }

// Count Occurences in sorted Array

// int countOcc(int arr[], int n, int x){
//   int first = firstOcc(arr,n,x);
//   if(first == -1)
//     return 0;
//   else
//     return (lastOcc(arr, n, x) - first + 1);
// }

// Count 1's in a sorted  binary array

// int countOnes(int arr[], int n){
//   int s=0, e=n-1;
//   while(s<=e){
//     int mid = s + (e-s)/2;
//     if(arr[mid]==0)
//       s=mid+1;
//     else{
//       if(mid==0 || arr[mid-1]==0)
//         return (n-mid);
//       else
//         return e = mid-1;
//     }
//   }
//   return 0;
// }

// Find Square root

// int sqrt(int n){
//   int i=1;
//   while(i*i <= n)
//     i++;
//   return (i-1);
// }

// int sqRootFloor(int x){
//   int s=1, e=x, ans=-1;
//   while(s<=e){
//     int mid = s + (e-s)/2;
//     int mSq = mid * mid;
//     if(mSq==x)
//       return mid;
//     else if(mSq > x)
//       e = mid - 1;
//     else{
//       s = mid + 1;
//       ans = mid;
//     }
//   }
//   return ans;
  
// }

// Search in an infinite size array

// int searchInfinite(int arr[], int x){
//   if(arr[0]==x)
//     return 0;
//   int i=1;
//   while(arr[i]<x)
//     i=i*2;
//   if(arr[i]==x)
//     return i;
//   return binarySearch(arr, x, i/2+1, i-1 );
    
// }

// Search in sorted and rotated array

// int searchRotated(int arr[], int n, int x){
//   int s=0, e=n-1;
//   while(s<=e){
//     int mid = s + (e-s)/2;
//     if(arr[mid]==x)
//       return mid;
//     if(arr[s]<arr[mid]){
//       if(x>=arr[s] && x<arr[mid])
//         e = mid-1;
//       else
//         s = mid+1;
//     }
//     else{
//       if(x>arr[mid] && x<=arr[e])
//         s=mid+1;
//       else
//         e=mid-1;
//     }
//   }  
//   return -1;
// }

// Find peak element in unsorted array

// int getPeak(int arr[], int n)
// {
//   if(n == 1)
//     return arr[0];
//   if(arr[0] >= arr[1])
//     return arr[0];
//   if(arr[n - 1] >= arr[n - 2])
//     return arr[n - 1];

//   for(int i = 1; i < n - 1; i++)
//     if(arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1])
//       return arr[i];
// }



// int getAPeak(int arr[], int n)
// {
//   int low = 0, high = n - 1;

//     while(low <= high)
//     {
//       int mid = (low + high) / 2;

//       if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
//         (mid == n - 1 || arr[mid + 1] <= arr[mid]))
//         return mid;
//       if(mid > 0 && arr[mid - 1] >= arr[mid])
//         high = mid -1;
//       else
//         low = mid + 1;
//     }
//   return -1;
// }


// // Determine whether there exists a pair of integers in the array that adds up to a given target value. 

// // Naive Approach
// bool isPair(int arr[], int n, int x)
// {
//   for(int i=0; i<n-1; i++)
//     for(int j=i+1; j<n; j++)
//       if(arr[i] + arr[j] == x)
//         return true;
//   return false;
// }


// // Two Pointer Approach

// bool isPair(int arr[], int n, int x){
//   int i=0, j=n-1;
  // while(i<j){
  //   if(arr[i]+arr[j] == x)
  //     return true;

  //   else if(arr[i]+arr[j]>x)
  //     j-=1;
  //   else
  //     i+=1;
    
  // }
  //   return false;
// }


// Find if there is a triplet with a given sum

//Naive

// bool isTriplet(int arr[],int n, int x){
//   for(int i=0; i<n-2; i++)
//     for(int j=i+1; j<n-1; j++)
//       for(int k = j+1; j<n; j++)
//         if(arr[i]+arr[j]+arr[k]==x)
//           return true;
//   return false;
// }


// Two pointers approach

// bool isPair(int arr[], int n, int x, int si){
//   int i=si, j=n-1;
//   while(i<j){
//     if(arr[i]+arr[j] == x)
//       return true;

//     else if(arr[i]+arr[j]>x)
//       j-=1;
//     else
//       i+=1;

//   }
//   return false;
// }

// bool isTriplet(int arr[], int n, int x){
//   for(int i=0; i<n-2;i++)
//     if(isPair(arr, n, x-arr[i], i+1))
//       return true;
//   return false;
// }


// //  Median of two sorted arrays

// double getMed(int a1[], int a2[], int n1, int n2)
// {
//   int begin1 = 0, end1 = n1;

//   while(begin1 <= end1)
//   {
//     int i1 = (begin1 + end1) / 2;
//     int i2 = (n1 + n2 + 1) / 2 - i1;

//     int min1 = (i1 == n1)?INT32_MAX:a1[i1];
//     int max1 = (i1 == 0)?INT32_MIN:a1[i1 - 1];

//     int min2 = (i2 == n2)?INT32_MAX:a2[i2];
//     int max2 = (i2 == 0)?INT32_MIN:a2[i2 - 1];

//     if(max1 <= min2 && max2 <= min1)
//     {
//       if((n1 + n2) % 2 == 0)
//         return ((double)max(max1, max2) + min(min1, min2)) / 2;
//       else
//         return (double)max(max1, max2);
//     }
//     else if(max1 > min2)
//       end1 = i1 - 1;
//     else 
//       begin1 = i1 + 1;
//   }
// }




// Repeating element

// Super Naive  O(n^2)
// int repeatedElement(int arr[], int n){
//   for(int i=0; i<n-1; i++){
//     for(int j = i+1; j<n; j++)
//       if(arr[i]==arr[j])
//         return arr[i];
//   }
//   return -1;
// }


// Efficient Solution


// int repeatedElement(int arr[], int n){
//   int slow = arr[0]+1, fast = arr[0]+1;
//   do{
//     slow = arr[slow] + 1;
//     fast = arr[arr[fast]+1]+1;
//   } while(slow!=fast);
//   slow = arr[0]+1;
//   while(slow!=fast){
//     fast = arr[fast]+1;
//     slow = arr[slow]+1;
//   }
//   return slow-1;
// }


// Allocate Min no of pages // 

// bool isFeasible(int arr[], int n, int k, int ans){
//   int req = 1, sum = 0;
//   for(int i=0; i<n; i++){
//     if(sum + arr[i]>ans){
//       req++;
//       sum = arr[i];
//     }
//     else
//       sum += arr[i];
//   }
//   return (req <= k);
// }

// int minPages(int arr[], int n, int k){
//   int sum = 0, mx = 0;

//   //compute sum and max of array
//   for(int i=0; i<n; i++){
//     sum += arr[i];
//     mx = max(mx,arr[i]);
//   }

//   int low = mx, high = sum, res = 0;
//   while(low<=high){
//     int mid = (low + high)/2;
//     if(isFeasible(arr, n, k, mid)){
//       res = mid;
//       high = mid-1;
//     }
//     else
//       low = mid+1;
//   }
//   return res;
  
// }

















int main() {
  int n=8;
  int arr[] = {10,5,30,1,2,5,10,10};
  
  // cout << binarySearch(arr, 0, 4 , 3);
  // cout << firstOcc(arr, 0,6,10 );
  // cout << firstOcc(arr, n, 20);
  // cout << lastOcc(arr, n, 20);
  // cout << countOcc(arr, n, 20);
  //cout<<countOnes(arr, n);
  //cout << sqRootFloor(9);
  // cout << searchRotated(arr, n, 8);
   //cout << getAPeak(arr,  n);

   //cout << isPair(arr,n,14);
  // cout << isTriplet(arr,n,21);

  //cout << repeatedElement(arr,  n);

  // cout << minPages(arr, n, 3);
  
  return 0;
}