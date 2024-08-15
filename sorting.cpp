#include <algorithm>
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;

// struct Point{
//   int x, y;
// };

// bool myCmp(Point p1, Point p2){
//   return (p1.x < p2.x);
// }

// ** Bubble Sort ** //

// void bubbleSort(int arr[], int n){
//   for(int i=0; i<n; i++)
//     for(int j=0; j<n-i-1; j++)
//       if(arr[j]>arr[j+1])
//         swap(arr[j],arr[j+1]);
// }

// Optimized bubble sort

// How Bubble Sort Works

// The algorithm repeatedly steps through the list, comparing adjacent elements
// and swapping them if they are in the wrong order. After each pass, the
// largest unsorted element "bubbles up" to its correct position. The outer loop
// ensures that the algorithm iterates through the array until the entire list
// is sorted. The early termination check makes the algorithm more efficient by
// stopping if no swaps occur in a pass, indicating the array is already sorted.
// This implementation of Bubble Sort is considered "optimized" due to the early
// termination check, which can improve its performance in cases where the array
// is partially or fully sorted.

// void bubbleSort(int arr[], int n){
//   bool swapped;
//   for(int i=0; i<n-1; i++){
//     swapped = false;
//     for(int j=0; j<n-1; j++)
//       if(arr[j]>arr[j+1]){
//         swap(arr[j],arr[j+1]);
//         swapped = true;
//       }
//     if(swapped==false)
//       break;
//   }

// }

// *** Selection Sort *** //

// Naive

// void selectionSort(int arr[], int n){
//   int temp[n];
//   for(int i=0; i<n; i++){
//     int min_ind = 0;
//     for(int j=1; j<n; j++){
//       if(arr[j]<arr[min_ind]){
//         min_ind = j;
//       }
//     }
//     temp[i]=arr[min_ind];
//     arr[min_ind] = INT32_MAX;
//   }
//   for(int i=0; i<n; i++)
//     arr[i]=temp[i];
// }

// In Place implementation'

// void selectionSort(int arr[],int n){
//   for(int i=0; i<n-1; i++){
//     int min_ind = i;
//     for(int j=i+1; j<n; j++)
//       if(arr[j]<arr[min_ind])
//         min_ind = j;
//     swap(arr[min_ind], arr[i]);
//   }
// }

// *** Insertion Sort *** ///

// void insertSort(int arr[], int n){
//  for(int i=1; i<n; i++){
//    int key =arr[i];
//    int j = i-1;
//    while(j>=0 && arr[j]>key){
//      arr[j+1]=arr[j];
//      j--;
//    }
//    arr[j+1] = key;
//  }
// }

// *** Merge Sort *** //

// Mege two sorted arrays

// void merge(int a[], int b[], int m, int n){
//   int c[m+n];
//   for(int i=0; i<m; i++)
//     c[i] = a[i];
//   for(int i=0; i<n; i++)
//     c[m+i] = b[i];
//   sort(c,c+m+n);
//   for(int i=0; i<(m+n);i++)
//     cout << c[i] << " ";
// }

// Efficient

// void merge(int a[], int b[], int m, int n){

//     int i=0,j=0;
//     while(i<m && j<n){
//         if(a[i]<b[j])
//             cout<<a[i++]<<" ";
//         else
//             cout<<b[j++]<<" ";
//     }
//     while(i<m)
//         cout<<a[i++]<<" ";
//     while(j<n)
//         cout<<b[j++]<<" ";
// }

// Merge function of merge sort

// void merge(int a[], int low, int mid, int high){
//   int n1 = mid - low + 1, n2 = high - mid;
//   int left[n1], right[n2];
//   for(int i=0; i<n1; i++)
//     left[i] = a[low+i];
//   for(int i=0; i<n2; i++)
//     right[i] = a[mid+i+1];

//   int i=0, j=0, k=low;
//   while(i<n1 && j<n2)
//     if(left[i]<=right[j])
//       a[k++]=left[i++];
//     else
//       a[k++]=right[j++];

//   while(i<n1)
//     a[k++]=left[i++];
//   while(j<n2)
//     a[k++]=right[j++];

// }

// Merge Sort Agorithm

// void mergeSort(int a[], int l, int r){
//   if(r>l){
//     int m = l + (r-l)/2;
//     mergeSort(a, l,m);
//     mergeSort(a,m+1,r);
//     merge(a,l,m,r);
//   }
// }

// *** Intersection of two sorted arrays *** //

// Naive

// void intersection(int a[], int b[], int m, int n){
//   for(int i=0; i<m; i++){
//     if(i>0 && a[i]==a[i-1])
//       continue;
//     for(int j=0; j<n; j++){
//       if(a[i]==b[j]){
//         cout << a[i] << " ";
//         break;
//       }

//     }
//   }
// }

// Efficient

// void intersection(int a[], int b[], int m, int n){
//   int i=0, j=0;
//   while(i<m && j<n){
//     if(i>0 && a[i-1]==a[i]){
//       i++;
//       continue;
//     }
//     if(a[i]<b[j])
//       i++;
//     else if(a[i]>b[j])
//       j++;
//     else{
//       cout << a[i] << " ";
//       i++;
//       j++;
//     }
//   }
// }

// Union of two arrays

// Naive

// void printUnion(int a[], int b[], int m, int n){
//   int c[m+n];
//   for(int i=0; i<m; i++)
//     c[i] = a[i];
//   for(int i=0; i<n; i++)
//     c[m+i] = b[i];
//   sort(c,c+m+n);
//   for(int i=0; i<m+n; i++)
//     if(i==0 || c[i]!=c[i-1])
//       cout << c[i] <<" ";
// }

// Efficient

// void printUnion(int a[], int b[], int m, int n){
//   int i=0, j=0;
//   while(i<m && j<n){
//     if(i>0 && a[i]==a[i-1]){
//       i++;
//       continue;
//     }
//     if(j>0 && b[j]==b[j-1]){
//       j++;
//       continue;
//     }
//     if(a[i]<b[j])
//       cout << a[i++] << " ";
//     else if(a[i]>b[j])
//       cout << b[j++] << " ";
//     else{
//       cout << a[i] << " ";
//       i++;
//       j++;
//     }
//   }

//   while(i<m)
//     if(i>0 && a[i]!=a[i-1])
//       cout << a[i++] << " ";

//   while(j<n)
//     if(j>0 && b[j]!=b[j-1])
//       cout << b[j++] << " ";
// }

// Count inversions in an array

// Naive

// int countInv(int a[], int n){
//   int res = 0;
//   for(int i=0 ;i<n-1; i++){
//     for(int j=i+1; j<n; j++)
//       if(a[i]>a[j])
//         res++;
//   }
//   return res;
// }

// EfficieNT

// int countandMerge(int arr[], int l, int m, int r){
//   int n1 = m-l+1, n2 = r-m;
//   int left[n1], right[n2];
//   for(int i=0; i<n1; i++)
//     left[i] = arr[l+i];
//   for(int i=0; i<n2; i++)
//     right[i] = arr[m+1+i];

//   int res=0, i=0, j=0, k=l;
//   while(i<n1 && j<n2){
//     if(left[i] <= right[j])
//       arr[k++] = left[i++];
//     else{
//       arr[k++] = right[j++];
//       res = res + (n1-i);
//     }
//   }

//   while(i < n1)
//     arr[k++] = left[i++];
//   while(j<n2)
//     arr[k++] = right[j++];
//   return res;
// }

// int countInv(int arr[], int l, int r){

//   int res=0;
//   if(l<r){
//     int m = l + (r-l)/2;
//     res += countInv(arr,l,m);
//     res += countInv(arr,m+1,r);
//     res += countandMerge(arr,l,m,r);
//   }
//   return res;

// }

// *** Partition of a given array *** //

// void partition(int arr[], int l, int h, int p){
//   int temp[h-l+1], index=0;
//   for(int i=0; i<=h; i++)
//     if(arr[i]<=arr[p] && i!=p){
//       temp[index] = arr[i];
//       index++;
//     }
//   temp[index++]=arr[p];
//   for(int i=l; i<=h; i++)
//     if(arr[i]>arr[p]){
//       temp[index]=arr[i];
//       index++;
//     }
//   for(int i=0; i<=h; i++)
//     arr[i]=temp[i-l];
// }

// Lomuto Partition

// int lpartition(int arr[], int l, int h){
//   int pivot = arr[h];
//   int i = l-1;
//   for(int j=l; j<=h-1; j++){
//     if(arr[j]<pivot){
//       i++;
//       swap(arr[i],arr[j]);
//     }
//   }
//   swap(arr[i+1],arr[h]);
//   return (i+1);  // returns the index of pivot at its correct position
// }

// Hoare's Partition

// int hPartition(int arr[], int l, int h){
//   int pivot = arr[l];
//   int i=l-1, j=h+1;
//   while(true){
//     do{
//       i++;
//     } while(arr[i]<pivot);
//     do{
//       j--;
//     } while(arr[j]>pivot);
//     if(i>=j)
//       return j;
//     swap(arr[i], arr[j]);
//   }
// }

// *** QuickSort *** //

// 1.  using Lomuto partition

// void qSort(int arr[], int l, int h){
//   if(l<h){
//     int p = lpartition(arr,l,h);
//     qSort(arr,l,p-1);
//     qSort(arr,p+1,h);
//   }
// }

// 2. Tail call elimination in quicksort

// void qSort(int arr[],int l,int h){
//     Begin:
//     if(l<h){
//         int p=hPartition(arr,l,h);
//         qSort(arr,l,p);
//         l=p+1;
//         goto Begin;
//     }
// }

// *** Kth smallest element *** //

// Naive

// int kthSmallest(int arr[], int n, int k){
//   sort(arr, arr+n);
//   return arr[k-1];
// }

// int partition(int arr[], int l, int h)
// {
//     int pivot=arr[h];
//     int i=l-1;
//     for(int j=l;j<=h-1;j++){
//         if(arr[j]<pivot){
//             i++;
//             swap(arr[i],arr[j]);
//         }
//     }
//     swap(arr[i+1],arr[h]);
//     return i+1;
// }

// int kthSmallest(int arr[],int n,int k){
//     int l=0,r=n-1;
//     while(l<=r){
//         int p=partition(arr,l,r);
//         if(p==k-1)
//             return p;
//         else if(p>k-1)
//             r=p-1;
//         else
//             l=p+1;
//     }
//     return -1;
// }

// *** Minimum difference in an array *** //

// Naive

// int getMinDiff(int arr[], int n){
//   int res = INT32_MAX;
//   for(int i=1; i<n; i++)
//     for(int j=0; j<i; j++)
//       res = min(res, abs(arr[i]-arr[j]));
//   return res;
// }

// Efficient

// int getMinDiff(int arr[], int n){
//   sort(arr,arr+n);
//   int res = INT32_MAX;

//   for(int i=1; i<n; i++){
//     res = min(res, arr[i]-arr[i-1]);
//   }
//   return res;
// }

// *** Chocolate distribution problem *** //

// int minDiff(int arr[], int n, int m){
//   if(m>n)
//     return -1;
//   sort(arr,arr+n);
//   int res = arr[m-1]-arr[0];
//   for(int i=1; (i+m-1)<n; i++)
//     res = min(res,arr[i+m-1]-arr[i]);
//   return res;
// }

// *** Sort an array with two types of elements *** //

// Naive

// void segregate(int arr[], int n){
//   int temp[n], i=0;
//   for(int j=0; j<n; j++){
//     if(arr[j]<0){
//       temp[i]=arr[j];
//       i++;
//     }
//   }

//   for(int j=0; j<n; j++){
//     if(arr[j]>=0){
//       temp[i]=arr[j];
//       i++;
//     }
//   }

//   for(int j=0; j<n; j++)
//     arr[j]=temp[j];

//   //sort(arr,arr+n);
// }

// Efficient

// void segregate(int arr[], int n){
//   int i=-1, j=n;
//   while(true){
//     do{
//       i++;
//     }while(arr[i]<0);

//     do{
//       j--;
//     }while(arr[j]>=0);

//     if(i>=j)
//       return;
//     swap(arr[i], arr[j]);
//   }
// }

// *** Sort an array with three types *** //

// Naive

// void Sort012(int arr[], int n){
//   int temp[n], i=0;
//   for(int j=0; j<n; j++){
//     if(arr[j]==0){
//       temp[i]=arr[j];
//       i++;
//     }
//   }

//   for(int j=0; j<n; j++){
//     if(arr[j]==1){
//       temp[i]=arr[j];
//       i++;
//     }
//   }

//   for(int j=0; j<n; j++){
//     if(arr[j]==2){
//       temp[i]=arr[j];
//       i++;
//     }
//   }

//   for(int j=0; j<n; j++)
//     arr[j]=temp[j];
// }

// Efficient

// void Sort012(int arr[], int n){
//   int l = 0, m = 0, h = n-1;
//   while(m<=h){
//     if(arr[m]==0){
//       swap(arr[l],arr[m]);
//       l++;
//       m++;
//     }
//     else if(arr[m]==1)
//       m++;
//     else{
//       swap(arr[h],arr[m]);
//       h--;
//     }
//   }
// }

// *** Merge overlapping intervals *** //

// struct interval {
//   int s, e;
// };

// bool myCmp(interval a, interval b){
//   return (a.s < b.s);
// }

// void mergeIntervals(interval arr[], int n){
//   sort(arr,arr+n, myCmp);
//   int res = 0;
//   for(int i=1; i<n; i++){
//     if(arr[res].e >= arr[i].s){
//       arr[res].e = max(arr[res].e, arr[i].e);
//       arr[res].s = min(arr[res].s, arr[i].s);
//     }
//     else{
//       res++;
//       arr[res]=arr[i];
//     }
//   }
//   for(int i=0; i<=res; i++){
//     cout << arr[i].s << " " << arr[i].e << endl;
//   }
// }

// *** Meeting maximum guests *** //

// You are given arrival and departure times of the guests, you need to find the minimum time interval to attend the party so that there are maximum people at the party.



// int maxGuests(int arr[], int dep[], int n){
//   sort(arr,arr+n);
//   sort(dep,dep+n);

//   int i=1,j=0,res=1,curr=1;
//   while(i<n && j<n){
//     if(arr[i++] <= dep[j])
//       curr++;
//     else{
//       curr--;
//       j++;
//     }
//     res = max(res,curr);
//   }
//   return res;
// }


// *** Cycle Sort *** //

// void cycleSortDistinct(int arr[], int n){
//   for(int cs=0; cs<n-1; cs++){
//     int item = arr[cs];
//     int pos = cs;
//     for(int i=cs+1; i<n; i++)
//       if(arr[i]<item)
//         pos++;
//     swap(item,arr[pos]);
//     while(pos!=cs){
//       pos=cs;
//       for(int i=cs+1; i<n; i++)
//         if(arr[i]<item)
//           pos++;
//       swap(item,arr[pos]);
//     }
//   }
// }


// *** Heap Sort *** //



// void heapify(int arr[], int n, int i){
//   int largest = i, left = 2*i+1, right = 2*i+2;
//   if(left<n && arr[left]>arr[largest])
//     largest = left;
//   if(right<n && arr[right]>arr[largest])
//     largest = right;

//   if(largest!=i){
//     swap(arr[largest],arr[i]);
//     heapify(arr, n, largest);
//   }
// }

// void buildHeap(int arr[],int n){
//   for(int i=(n-2)/2; i>=0; i--)
//     heapify(arr,n,i);
// }

// void heapSort(int arr[], int n){
//   buildHeap(arr, n);
//   for(int i=n-1; i>=1; i--){
//     swap(arr[0],arr[i]);
//     heapify(arr,i,0);
//   }
// }


// Counting Sort

// Naive

// void countSort(int arr[], int n, int k){
//   int count[k];
//   for(int i=0; i<k; i++)
//     count[i]=0;
//   for(int i=0; i<n; i++)
//     count[arr[i]]++;

//   int index = 0;
//   for(int i=0; i<k; i++){
//     for(int j=0; j<count[i]; j++){
//       arr[index]=i;
//       index++;
//     }
//   }
// }

// General Purpose Implementation

// void countSort(int arr[],int n, int k){
//   int count[k];
//   for(int i=0; i<k; i++)
//     count[i]=0;
//   for(int i=0; i<n; i++)
//     count[arr[i]]++;

//   for(int i=1; i<k; i++)
//     count[i] = count[i-1] + count[i];

//   int output[n];
//   for(int i=n-1; i>=0; i--){
//     output[count[arr[i]]-1]=arr[i];
//     count[arr[i]]--;
//   }

//   for(int i=0; i<n; i++)
//     arr[i]=output[i];
// }


// *** Radix Sort *** //

// void countingSort(int arr[], int n, int exp) 
// { 
//     int output[n];  
//     int count[10] = { 0 }; 
//     for (int i = 0; i < n; i++) 
//         count[(arr[i] / exp) % 10]++; 

//     for (int i = 1; i < 10; i++) 
//         count[i] += count[i - 1]; 

//     for (int i = n - 1; i >= 0; i--) { 
//         output[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
//         count[(arr[i] / exp) % 10]--; 
//     } 

//     for (int i = 0; i < n; i++) 
//         arr[i] = output[i]; 
// }  

// void radixSort(int arr[], int n) 
// { 
//     int mx = arr[0]; 
//     for (int i = 1; i < n; i++) 
//         if (arr[i] > mx) 
//             mx = arr[i]; 

//     for (int exp = 1; mx / exp > 0; exp *= 10) 
//         countingSort(arr, n, exp); 
// } 


// Bucket Sort

// void bucketSort(int arr[], int n, int k){
//   int max_val = arr[0];
//   for(int i=1; i<n; i++){
//     max_val = max(max_val,arr[i]);
//   }
//   max_val++;
//   vector<int> bkt[k];
//   for(int i=0; i<n; i++){
//     int bi = (k*arr[i])/max_val;
//     bkt[bi].push_back(arr[i]);
//   }
//   for(int i=0; i<k; i++)
//     sort(bkt[i].begin(),bkt[i].end());
//   int index = 0;
//   for(int i=0; i<k; i++)
//     for(int j=0; j<bkt[i].size();j++)
//       arr[index++] = bkt[i][j];
// }















int main() {
  // int n = 4;
  // int arr[] = {10,20,5,7};
  // sort(arr, arr+n);
  // for(int x : arr)
  //   cout << x << " ";
  // sort(arr, arr+n, greater<int>()); // sorts in decreasing order
  // cout << endl;
  // for(int x: arr)
  //   cout << x << " ";

  // vector<int> v = {5,7,20,10};
  // sort(v.begin(), v.end());
  // for(int x:v)
  //   cout << x <<" ";
  // sort(v.begin(), v.end(), greater<int>());
  // cout << endl;
  // for(int x:v)
  //   cout << x <<" ";

  // Point arr[] = {{3,10}, {2,8}, {5,4}};

  // int n=sizeof(arr)/sizeof(arr[0]);
  // sort(arr, arr+n, myCmp);

  // for(auto i: arr){
  //   cout << i.x << " "<< i.y << endl;
  // }

  // Bubble sort

  // int arr[] = {2, 1, 3, 4};
  // bubbleSort(arr, 4);
  // for(int i = 0;i < 4; i++){
  //     cout<<arr[i]<<" ";
  // }

  // Selection sort

  // int arr[] = {2, 1, 3, 5, 4};
  // selectionSort(arr, 5);
  // for(int i = 0;i < 5; i++){
  //     cout<<arr[i]<<" ";
  // }

  // Insertion sort

  // int arr[] = {2, 1, 3, 5, 4};
  // insertSort(arr, 5);
  // for(int i = 0;i < 5; i++){
  //     cout<<arr[i]<<" ";
  // }

  // Merge two sorted arrays

  // int a[]={10,15,20,40};
  // int b[]={5,6,6,10,15};

  // int m=sizeof(a)/sizeof(a[0]);
  // int n=sizeof(b)/sizeof(b[0]);
  // merge(a,b,m,n);

  // Merge function of merge sort

  // int a[]={10,15,20,40,8,11,15,22,25};
  //  int low=0,high=8,mid=3;

  // merge(a,low,mid,high);
  // for(int x: a)
  //     cout<<x<<" ";

  // Merge sort Algorithm

  // int l = 0, r = sizeof(a)/sizeof(a[0]) - 1 ;
  // mergeSort(a,l,r);
  // for(int x: a)
  //     cout<<x<<" ";

  // Intersection

  // int a[]={3,5,10,10,10,15,15,20};
  // int b[]={5,10,10,15,30};

  // int m=sizeof(a)/sizeof(a[0]);
  // int n=sizeof(b)/sizeof(b[0]);
  // intersection(a,b,m,n);

  // Union

  // int a[]={3,5,10,10,10,15,15,20};
  // int b[]={5,10,10,15,30};
  // int m=sizeof(a)/sizeof(a[0]);
  // int n=sizeof(b)/sizeof(b[0]);
  // printUnion(a,b,m,n);

  // int a[] = {40,30,20,10};
  // int l = 0, r = sizeof(a)/sizeof(a[0]) - 1;
  // cout << countInv(a, l, r);

  // int arr[] = {5,3,12,8,10};
  // int h = sizeof(arr)/sizeof(arr[0]) - 1;
  // partition(arr,0,h,2);
  // for(int x: arr)
  //   cout<<x<<" ";

  // lomuto partition

  // int arr[] = {10,80,30,90,40,50,70};
  // int h = sizeof(arr)/sizeof(arr[0]) - 1;
  // lpartition(arr,0,h);
  // for(int x: arr)
  //    cout<<x<<" ";

  // int arr[] = {5,3,8,4,2,7,1,10};
  // int h = sizeof(arr)/sizeof(arr[0]) - 1;
  // hPartition(arr,0,h);
  // for(int x: arr)
  //    cout<<x<<" ";

  // int arr[] = {5,3,8,4,2,7,1,10};
  // int h = sizeof(arr)/sizeof(arr[0]) - 1;
  // qSort(arr,0,h);
  // for(int x: arr)
  //    cout<<x<<" ";

  // int arr[] = {5,3,8,4,2,7,1,10};
  // int n = sizeof(arr)/sizeof(arr[0]);
  // cout << arr[kthSmallest(arr, n, 7)];

  // int arr[]= {1,8,12,5,18};
  // int n = sizeof(arr)/sizeof(arr[0]);
  // cout << getMinDiff(arr, n);

  // int arr[]= {7,3,2,4,9,12,56};
  // int n = sizeof(arr)/sizeof(arr[0]);
  // cout <<minDiff(arr, n, 3);

  // Segregate positiove and negative

  // int arr[] = {15,-3,12,-2,-9,4,3,0};
  // int n = 8;
  // segregate(arr, n);
  // for(int x:arr)
  //   cout << x<< " ";

  // Sort three types (0,1,2)

  // int arr[] = {0,2,2,1,2,1,0,1,1,0};
  // int n = 10;
  // Sort012(arr, n);
  // for(int x:arr)
  //   cout << x<< " ";

  // Merge overlapping intervals

  // interval arr[] =  { {5,10}, {3,15}, {18,30}, {2,7} };
  // int n = sizeof(arr)/sizeof(arr[0]);
  // mergeIntervals(arr, n);

  // Meeting maximum guests

  // int arr[] = { 900, 600, 700};
  // int dep[] = { 1000, 800, 730};
  // int n = sizeof(arr)/sizeof(arr[0]);
  // cout << maxGuests(arr, dep, n);

  // Cycle Sort

  // int arr[] = {20,40,50,10,30};
  // int n = 5;
  // cycleSortDistinct(arr, n);
  // for(int x:arr)
  //   cout << x << " ";

  // Heap Sort

  // int arr[] = {20,40,50,10,30};
  // int n = 5;
  // heapSort(arr, n);
  // for(int x:arr)
  //   cout << x << " ";

  // Counting sort
  
  // int arr[] = {1,4,4,1,0,1};
  // int n = 6;
  // countSort(arr, n,5);
  // for(int x:arr)
  //   cout << x << " ";

  // Radix Sort

  // int arr[] = {319,212,600,8,100,50};
  // int n = 6;
  // radixSort(arr, n);
  // for(int x:arr)
  //   cout << x << " ";

  // Bucket Sort


  // int arr[] = { 30,40,10,80,5,12,70 }; 
  // int n = sizeof(arr) / sizeof(arr[0]); int k=4;
  // bucketSort(arr, n, k); 

  // for (int i = 0; i < n; i++) 
  //     cout << arr[i] << " ";
}