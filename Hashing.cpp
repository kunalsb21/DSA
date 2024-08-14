#include <iostream>
#include<bits/stdc++.h>
using namespace std;

// Implementation of chaining

// struct myHash{
//   int BUCKET;
//   list<int> *table;
//   myHash(int b){
//     BUCKET = b;
//     table = new list<int>[BUCKET];
//   }
//   void insert(int k){
//     int i = k % BUCKET;
//     table[i].push_back(k);
//   }
//   bool search(int k){
//     int i = k % BUCKET;
//     for(auto x : table[i])
//       if(x == k)
//         return true;
//     return false;
//   }
//   void remove(int k){
//     int i = k % BUCKET;
//     table[i].remove(k);
//   }
// };

// Implementation of open addressing

// struct myHash{
//   int *arr;
//   int cap, size;
// myHash(int c){
//   cap = c;
//   size = 0;
//   for(int i=0; i<cap; i++)
//     arr[i]=-1;
// }
// int hash(int key){
//   return key%cap;
// }
// bool search(int key){
//   int h=hash(key);
//   int i=h;
//   while(arr[i]!=-1){
//     if(arr[i]==key)
//       return true;
//     i = (i+1)%cap;
//     if(i==h)
//       return false;
//   }
//   return false;
// }

// bool insert(int key){
//   if(size==cap)
//     return false;
//   int i = hash(key);
//   while(arr[i]!=-1 && arr[i]!=-2 && arr[i]!= key)
//     i = (i+1)%cap;
//   if(arr[i]==key)
//     return false;
//   else{
//     arr[i]=key;
//     size++;
//     return true;
//   }
// } 
// bool erase(int key){
//   int h = hash(key);
//   int i =h;
//   while(arr[i]!=-1){
//     if(arr[i]==key){
//       arr[i]=-1;
//       return true;
//     }
//     i = (i+1)%cap;
//     if(i==h)
//       return false;
//   }
//   return false;
// }
// };



// Count distinct elements

// int countDistinct(int arr[], int n){
//   int res = 0;
//   for(int i=0; i<n; i++){
//     bool flag = false;
//     for(int j=0; j<i; j++){
//       flag = true;
//       break;
//     }
//     if(flag == false)
//       res++;
//   }
//   return res;
// }

// Efficient


// int countDistinct(int arr[], int n){
//   unordered_set<int> s;
//   for(int i=0; i<n; i++)
//     s.insert(arr[i]);
//   return s.size();
// }

// Improved Efficient

// int countDistinct(int arr[], int n){
//   unordered_set<int> s(arr, arr+n);
//   return s.size();
// }

// Frequency of Array Element

// Naive   O(n^2)

// void printFreq(int arr[], int n){
//   for(int i=0; i<n; i++){
//     // check if seen before
//     bool flag = false;
//     for(int j=0; j<i; j++)
//       if(arr[i]==arr[j]){
//         flag = true;
//         break;
//       }
//     //if seen ignore
//     if(flag == true)
//       continue;
//     // if not seen before count frequency
//     int freq = 1;
//     for(int j=i+1; j<n; j++)
//       if(arr[i]==arr[j])
//         freq++;
//     cout << arr[i] << " "<< freq << endl;
//   }
// }


 
// Efficient   O(n)

// void printFreq(int arr[], int n){
//   unordered_map<int, int> h;  // Empty hash map
//   for(int i=0; i<n; i++)
//     h[arr[i]]++;
//   for(auto e:h)
//     cout << e.first << " "<< e.second << endl;
// }


// Intersection of two unsorted arrays (Finding common elements)

// Naive

// void intersection(int a[], int b[], int m, int n){
//   for(int i=0; i<m; i++){
//     bool flag=false;
//     for(int j=0; j<n; j++){
//       if(a[i]==b[j]){
//         flag = true;
//         break;
//       }
//     }
//     if(flag==true)
//       cout<< a[i] << " ";
//   }
// }


// Efficient   theta(m+n)

 // void intersection(int a[], int b[], int m, int n){
 //   unordered_set<int> s(b,b+n);
 //   for(int i=0; i<m; i++)
 //     if(s.find(a[i]) != s.end())
 //       cout << a[i]<<" ";
 // }


// Union of two unsorted arrays (count distinct elements in both arrays)

// int Union(int a[], int b[], int m, int n){

//   unordered_set<int> h(a,a+m);
//   for(int i=0; i<n; i++)
//     h.insert(b[i]);
//   return h.size();
  

// }


// Pair with given sum in unsorted array

// Naive  O(n^2)

// bool isPair(int arr[], int n, int sum){
//   for(int i=0; i<n; i++)
//     for(int j=i+1; j<n; j++)
//       if(arr[i]+arr[j]==sum)
//         return true;
//   return false;
// }

// Efficient

// bool isPair(int arr[], int n, int sum){
//   unordered_set<int> h;
//   for(int i=0;i <n; i++){
//     if(h.find(sum-arr[i]) != h.end())
//       return true;
//     else 
//       h.insert(arr[i]);
//   }
//   return false;
// }

// Subarray with zero Sum

// Naive

// bool is0Subarray(int arr[], int n){
//   for(int i=0; i<n; i++){
//     int curr_sum = 0;
//     for(int j=i; j<n; j++){
//       curr_sum+= arr[j];
//       if(curr_sum==0)
//         return true;
//     }
//   }
//   return false;
// }

// Efficient

// bool is0Subarray(int arr[], int n){
//   unordered_set<int> h;
//   int pre_sum = 0;
//   for(int i=0; i<n; i++){
//     pre_sum += arr[i];
//     if(h.find(pre_sum) != h.end())
//       return true;
//     if(pre_sum==0)
//       return true;
//     h.insert(pre_sum);
//   }
//   return false;
// }


// Subarray with given sum

// Naive

// bool isSum(int arr[], int n, int sum)
// {
//     for(int i=0;i<n;i++){
//         int curr_sum=0;
//         for(int j=i;j<n;j++){
//            curr_sum+=arr[j];
//            if(curr_sum==sum)
//                 return true;
//         }
//     }
//     return false;
// }

// Efficient

// bool isSubArrSum(int arr[], int n, int sum){
//   unordered_set<int> h;
//   int pre_sum = 0;
//   for(int i=0; i<n; i++){
//     pre_sum += arr[i];
//     if(pre_sum==sum)
//       return true;
//     if(h.find(pre_sum - sum) != h.end())
//       return true;
//     h.insert(pre_sum);
//   }
//   return false;
// }

// Longest subarray with given sum

// Naive

// int maxLen(int arr[], int n, int sum){
//   int res = 0;
//   for(int i=0; i<n; i++){
//     int curr_sum = 0;
//     for(int j=i; j<n; j++){
//       curr_sum += arr[j];
//       if(curr_sum == sum)
//         res = max(res, j-i+1);
//     }
//   }
//   return res;
// }

// // Efficient

// int maxLen(int arr[], int n, int sum){
//   unordered_map<int, int> m;
//   int pre_sum = 0, res=0;
//   for(int i=0; i<n; i++){
//     pre_sum += arr[i];
//     if(pre_sum == sum)
//       res=i+1;
//     if(m.find(pre_sum)==m.end())
//       m.insert({pre_sum, i});
//     if(m.find(pre_sum - sum) != m.end())
//       res = max(res, i-m[pre_sum - sum]);
//   }
//   return res;
// }


 // // Longest subarray with equal 0's and 1's

// Naive

// int max01Len(int arr[], int n){
//   int res = 0;
//   for(int i=0; i<n; i++){
//     int c0 = 0, c1 = 0;
//     for(int j=0; j<n; j++){
//       if(arr[j]==0)
//         c0++;
//       else
//         c1++;
//       if(c0==c1)
//         res = max(res, c0+c1);
//     }
//   }
//   return res;
// }

// Efficient

// int max01Len(int arr[], int n, int sum){
//   for(int i=0; i<n; i++)
//     if(arr[i] == 0)
//       arr[i] = -1;
//   unordered_map<int, int> m;
//     int pre_sum = 0, res=0;
//     for(int i=0; i<n; i++){
//       pre_sum += arr[i];
//       if(pre_sum == sum)
//         res=i+1;
//       if(m.find(pre_sum)==m.end())
//         m.insert({pre_sum, i});
//       if(m.find(pre_sum - sum) != m.end())
//         res = max(res, i-m[pre_sum - sum]);
//     }
//     return res;
// }


 // // Longest common span with same sum in binary arrays

// // Naive

 // int maxCommon(int arr1[], int arr2[], int n){
 //   int res = 0;
 //   for(int i=0; i<n; i++){
 //     int sum1 = 0, sum2=0;
 //     for(int j=i; j<n; j++){
 //       sum1 += arr1[j];
 //       sum2 += arr2[j];
 //       if(sum1 == sum2)
 //         res = max(res, j-i+1);
 //     }
 //   }
 //   return res;
 // }


// Efficient

// int maxCommon(int arr1[], int arr2[], int n, int sum){
//     int temp[n];
//     for(int i=0; i<n; i++)
//       temp[i] = arr1[i]-arr2[i];
  
//     unordered_map<int, int> m;
//       int pre_sum = 0, res=0;
//       for(int i=0; i<n; i++){
//         pre_sum += temp[i];
//         if(pre_sum == sum)
//           res=i+1;
//         if(m.find(pre_sum)==m.end())
//           m.insert({pre_sum, i});
//         if(m.find(pre_sum - sum) != m.end())
//           res = max(res, i-m[pre_sum - sum]);
//       }
//       return res;
// }


// // Longest consecutive subsequence

// Naive

// int longestSub(int arr[], int n){
//   sort(arr,arr+n);
//   int res=1, curr=1;
//   for(int i=1; i<n; i++){
//     if(arr[i]==arr[i-1]+1)
//       curr++;
//     else if(arr[i]!=arr[i-1]){
//       res = max(res,curr);
//       curr = 1;
//     }
//   }
//   return max(res,curr);
// }

// Efficient

// int longestSub(int arr[], int n){
//   unordered_set<int> h(arr,arr+n);
//   int res = 1;
//   for(auto x:h){
//     if(h.find(x-1) == h.end()){
//       int curr = 1;
//       while(h.find(x+curr)!=h.end())
//         curr++;
//       res = max(res,curr);
//     }
//   }
//   return res;
// }


// // Count distinct elements in every window

// Naive

// void printDistinct(int arr[], int n, int k){
//   for(int i=0; i<=(n-k); i++){
//     int count = 0;
//     for(int j=0; j<k; j++){
//       bool flag = false;
//       for(int p=0; p<j; p++)
//         if(arr[i+j] == arr[i+p]){
//           flag = true;
//           break;
//         }
//       if(flag == false)
//         count++;
//     }
//     cout << count << " ";
//   }
// }


// Efficient
 
// void printDistinct(int arr[], int n, int k)
// {
//     map<int, int> m; 

//     for (int i = 0; i < k; i++) { 
//         m[arr[i]] += 1; 
//     } 

//     cout << m.size() << " "; 

//     for (int i = k; i < n; i++) { 

//         m[arr[i - k]] -= 1;

//         if (m[arr[i - k]] == 0) { 
//             m.erase(arr[i-k]); 
//         }   
//         m[arr[i]] += 1; 

//         cout << m.size() << " "; 
//     } 

// }

// // More than n/k occurences

// void printNByK(int arr[], int n, int k){
//   sort(arr,arr+n);
//   int i=1,count=1;
//   while(i<n){
//       while(i<n&& arr[i]==arr[i-1]){
//           count++;
//           i++;
//       }
//       if(count>n/k)
//           cout<<arr[i-1]<<" ";
//       count=1;
//       i++;
//   }

// }

//Efficient

// void printNByK(int arr[], int n, int k){
//   unordered_map<int, int> m;
//   for(int i=0; i<n; i++)
//     m[arr[i]]++;
//   for(auto e:m)
//     if(e.second > n/k)
//       cout << e.first << " ";
// }


// More Efficient O(1)

// void printNByK(int arr[], int n, int k)
// {
//     unordered_map<int,int> m;

//     for(int i=0;i<n;i++){
//         if(m.find(arr[i])!=m.end())
//             m[arr[i]]++;
//         else if(m.size()<k-1)
//             m[arr[i]]=1;
//         else
//             for(auto x:m){
//                 x.second--;
//                 if(x.second==0)
//                     m.erase(x.first);}
//     }
//     for(auto x:m){
//         int count=0;
//         for(int i=0;i<n;i++){
//             if(x.first==arr[i])
//                 count++;

//        }
//         if(count>n/k)
//             cout<<x.first<<" ";
//     }
// }















int main() {

  // Implementation of chaining
  
   // myHash mh(7);
   // mh.insert(10);
   // mh.insert(20);
   // mh.insert(15);
   // mh.insert(7);
   // cout << mh.search(10) << endl;
   // mh.remove(15);
   // cout << mh.search(15);

  // Implementation of open addressing
  
  // myHash mh(7);
  // mh.insert(49);
  // mh.insert(56);
  // mh.insert(72);
  // if(mh.search(56)==true)
  //     cout<<"Yes"<<endl;
  // else
  //     cout<<"No"<<endl;
  // mh.erase(56);
  // if(mh.search(56)==true)
  //     cout<<"Yes"<<endl;
  // else
  //     cout<<"No"<<endl;


  // Count distinct

  // int arr[] = {10,20,10,20,10,30};
  // int n = 6;
  // //cout << countDistinct(arr, n);
  // printFreq(arr,n);

  // int a[] = {10,20,30,40};
  // int b[] = {20,40,30,60};
  // int m = 4, n = 4;
  // //intersection(a, b, m, n);
  // Union(a,b,m,n);


  // int arr[] = {8,4,3,9};
  // int n = 4;
  // if(isPair(arr,  n, 13)){
  //   cout<<"true";
  // }
  // else
  //   cout << "False";


  // int arr[] = {1,4,13,-3,-10,5};
  // int n = 6;
  // if(is0Subarray(arr,  n)){
  //   cout<<"true";
  // }
  // else
  //   cout << "False";

  // int arr[] = {5,8,6,13,3,-1};
  // int n = 6;
  // cout << isSubArrSum(arr, n, 22);

  // int arr[] = {8,3,1,5,-6,6,2,2};
  // int n = 8;
  // cout << maxLen(arr, n, 4);

  // int arr[] = {1,0,1,0,1,1,1,0};
  // int n = 8;
  // cout << max01Len(arr, n);

  // int arr1[] = {0,1,0,0,0,0,0}, arr2[] = {1,0,1,0,0,0,1};
  // int n = 7;
  // cout << maxCommon(arr1, arr2, n,0);

  // int arr[] = {2,9,4,3,10};
  // int n = 5;
  // cout << longestSub(arr, n);

  // int arr[] = {10,10,5,3,20,5};
  // int n = 6;
  // printDistinct(arr, n, 4);

  int arr[] = {10,10,20,30,20,20,10};
  int n = 7;
  printNByK(arr,n,2);
  
}