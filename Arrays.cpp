#include <iostream>
using namespace std;

//Search in an unsorted array
/*
int search(int arr[], int n, int x){
  for(int i=0;i<n;i++){
    if(arr[i] == x)
      return i;
  }
  return -1;
}


int insert(int arr[], int n, int x, int cap, int pos ){
  if(n==cap)
    return n;

  int idx = pos-1;
  for(int i=n-1; i>=idx; i--)
    arr[i+1]=arr[i];

  arr[idx]=x;
  return n+1;
  
}


// Deletion

int deleteEle(int arr[], int n, int x)
{
  int i = 0;

  for(i = 0; i < n; i++)
  {
    if(arr[i] == x)
      break;
  }

  if(i == n)
    return n;

  for(int j = i; j < n - 1; j++)
  {
    arr[j] = arr[j + 1];
  }

  return n-1;
} 


//Largest Element in an array

int getLargest(int arr[], int n){
  for(int i=0; i<n; i++){
    bool flag = true;
    for(int j=0; j<n; j++){
      if(arr[j]>arr[i]){
        flag = false;
        break;
      }
    }
    if(flag == true)
      return i;
  }
  return -1;
}



int getLargest(int arr[], int n){
  int res=0;
  for(int i=1; i<n; i++){
    if(arr[i]>arr[res])
      res = i;
  }
  return res;
}


// Second Largest

// int secondLargest(int arr[], int n){
//   int largest = getLargest(arr, n);
//   int res = -1;
//   for(int i=0; i<n; i++){
//     if(arr[i]!=arr[largest]){
//       if(res == -1)
//         res = i;
//       else if(arr[i]>arr[res])
//         res = i;
//     }
//   }
//   return res;
// }

// int secondLargest(int arr[], int n){
//   int res = -1, largest=0;
//   for(int i=1; i<n; i++){
//     if(arr[i]>arr[largest]){
//       res = largest;
//       largest=i;
//     }
//     else if(arr[i]!= arr[largest]){
//       if(res==-1 || arr[i]>arr[res])
//         res = i;
//     }
//   }
//   return res;
// }

// Check if array is sorted
//Naive
bool isSorted(int arr[], int n){
  for(int i=0; i<n; i++)
    for(int j=i+1; j<n; j++)
      if(arr[j]<arr[i])
        return false;
  return true;
}


//Efficient

bool isSorted(int arr[], int n){
  for(int i=1; i<n; i++)
    if(arr[i]<arr[i-1])
      return false;
  return true;
}



void reverse(int arr[], int n){
  int low=0, high = n-1;
  while(low<high){
    int temp = arr[low];
    arr[low] = arr[high];
    arr[high] = temp;
    low++;
    high--;
  }
}


// Remove duplicates from a sorted array

// Naive

int remDuplicates(int arr[], int n){
  int temp[n];
  temp[0] = arr[0];
  int res = 1;
  for(int i=1; i<n; i++){
    if(temp[res-1]!=arr[i]){
      temp[res] = arr[i];
      res++;
    }
  }

  for(int i=0; i<res; i++){
    arr[i]=temp[i];
  }
  return res;
  
}


// Efficient

int remDuplicates(int arr[], int n){
  int res = 1;
  for(int i=1; i<n; i++){
    if(arr[i]!=arr[res-1]){
      arr[res] = arr[i];
      res++;
    }
  }
  return res;
}



// Move all zeros to the end

void moveToend(int arr[], int n){
  for(int i=0; i<n; i++){
    if(arr[i]==0){
      for(int j=i+1; j<n; j++){
        if(arr[j]!=0)
          swap(arr[i],arr[j]);
      }
    }
  }
}



void moveToend(int arr[], int n){
  int count = 0;
  for(int i=0; i<n; i++){
    if(arr[i]!=0){
      swap(arr[i], arr[count]);
      count++;
    }
  }
}


// Left Rotate an array by one

void lrotateOne(int arr[], int n){
  int temp = arr[0];
  for(int i=1; i<n; i++){
    arr[i-1] = arr[i];
  }
  arr[n-1]=temp;
}

//Left Rotate by d times
void lrotate_d(int arr[],int d, int n){
  for(int i=0; i<d; i++){
    lrotateOne(arr, n);
  }
}



void left_d(int arr[], int n, int d){
  int temp[d];
  for(int i=0; i<d; i++){
    temp[i] = arr[i];
  }

  for(int i=d; i<n; i++){
    arr[i-d]=arr[i];
  }

  for(int i=0; i<d; i++){
    arr[n-d+i] = temp[i];
  }
  
}


// ** Reversal Algorithm ** //

void reverse(int arr[], int low, int high){
  while(low<high){
    swap(arr[low],arr[high]);
    low++;
    high--;
  }
}

void leftRotate(int arr[], int n, int d){
  reverse(arr, 0, d-1);
  reverse(arr, d, n-1);
  reverse(arr, 0, n-1);
}



// ** Leaders in an array //

void leaders(int arr[], int n){
  for(int i=0; i<n; i++){
    bool flag = false;
    for(int j=i+1; j<n; j++){
      if(arr[i]<=arr[j]){
        flag = true;
        break;
      }
    }
    if(flag == false)
      cout << arr[i] << " ";
  }
}



// Efficient 

void leaders(int arr[], int n){
  int curr_ldr = arr[n-1];
  cout << curr_ldr << " ";

  for(int i= n-2; i>=0; i--){
    if(curr_ldr < arr[i]){
      curr_ldr = arr[i];
      cout << curr_ldr << " ";
    }
  }
}



//  Maximum difference

int maxDiff(int arr[], int n){
  int res = arr[1] - arr[0];
  for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
      res = max(res, arr[j] - arr[i]);
  return res;
}



int maxDiff(int arr[], int n){
  int res = arr[1] - arr[0];
  int minVal = arr[0];
  for(int j=1; j<n; j++){
    res = max(res,arr[j]-minVal);
    minVal = min(minVal, arr[j]);
  }
  return res;
  
}



// Frequencies of elements in sorted array

int printFreq(int arr[], int n){
  int freq = 1, i = 1;
  while(i<n){
    while(i<n && arr[i]==arr[i-1]){
      freq++;
      i++;
    }
    cout << arr[i-1] <<" "<< freq << endl;
    i++;
    freq = 1;
  }
  if(n==1 || arr[n-1]!=arr[n-1])
    cout << arr[n-1] <<" "<< 1 ;
  return 0;
}



// Buy and sell stock and maximise profit

int maxProfit(int arr[], int start, int end){
  if(end<=start)
    return 0;

  int profit = 0;
  for(int i=start; i<end; i++){
    for(int j=i+1; j<=end; j++){
      if(arr[j]>arr[i]){
        int curr_profit = arr[j] - arr[i] + maxProfit(arr, start, i-1) + maxProfit(arr, j+1, end);

        profit = max(profit, curr_profit);
      }
    }
  }
  return profit;
}


int maxProfit(int arr[],int n){
  int profit = 0;
  for(int i=0; i<n; i++)
    if(arr[i]>arr[i-1])
      profit += (arr[i]- arr[i-1]);
  return profit;
}



// Trapping Rain water problem


int getWater(int arr[], int n){
  int res = 0;
  for(int i=1; i<n; i++){
    int lmax = arr[i];
    for(int j=0; j<i; j++){
      lmax = max(lmax, arr[j]);
    }
    int rmax = arr[i];
    for(int j=i+1; j<n; j++){
      rmax = max(rmax, arr[j]);
    }
    res = res + (min(lmax, rmax) - arr[i]);
  }
  return res;
}


int getWater(int arr[], int n){
  
  int res = 0;
  int lmax[n], rmax[n];
  lmax[0] = arr[0];
  
  for(int i=1; i<n; i++)
    lmax[i] = max(arr[i], lmax[i-1]);  
  rmax[n-1] = arr[n-1];
  
  for(int i=n-2; i>=0; i--)
    rmax[i] = max(arr[i], rmax[i+1]);

  for(int i=1; i<n-1; i++)
    res = res + (min(lmax[i], rmax[i]) - arr[i]);
  return res;
}


// Max consecutive 1's in a binary array

int maxConsecOnes(int arr[], int n){
  int res = 0;
  for(int i=0; i<n; i++){
    int curr = 0;
    for(int j=i; j<n; j++){
      if(arr[j] == 1)
        curr++;
      else
        break;
    }
    res = max(res, curr);
  }
  return res;
}



// Efficient

int maxConsecOnes(int arr[], int n){

  int res = 0, curr = 0;
  for(int i=0; i<n; i++){
    if(arr[i] == 0)
      curr = 0;
    else{
      curr++;
      res = max(res, curr);
    }
  }
  return res;

}



int maxSum(int arr[], int n){
  int res = arr[0];
  for(int i=0; i<n; i++){
    int curr=0;
    for(int j=i; j<n; j++){
      curr = curr+arr[i];
      res = max(res, curr);
    }
  }
  return res;
}


int maxSum(int arr[],int n)
{
  int res = arr[0];
  int maxEnding = arr[0];
  for(int i=0; i<n; i++){
    maxEnding = max(maxEnding + arr[i], arr[i]);
    res = max(res, maxEnding);
  }
  return res;
}



int maxSum(int arr[], int n) {
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}


// Maximum length even odd 

int maxEvenOdd(int arr[], int n){
  int res = 1;
  for(int i =0; i<n; i++){
    int curr = 1;
    for(int j=i+1; j<n; j++){
        if((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0)
           ||(arr[j] % 2 != 0 && arr[j - 1] % 2 == 0))
          curr++;
        else
          break;
    }
    res = max(res, curr);
  }
  return res;
}



int maxEvenOdd(int arr[],int n){
  int res = 1;
  int curr = 1;
  for(int j=1; j<n; j++){
    if((arr[j] % 2 == 0 && arr[j - 1] % 2 != 0) || (arr[j] % 2 != 0 && arr[j - 1] % 2 == 0)){
      curr++;
      res = max(res, curr);
    }
    else
      curr = 1;
    
  }
  return res;
}


// Maximum circular subarray sum

int maxCirSum(int arr[], int n){
  int res = arr[0];
  for(int i=0; i<n; i++){
    int curr_max = arr[i];
    int curr_sum = arr[i];
    for(int j=1; j<n; j++){
      int index = (i+j)%n;
      curr_sum += arr[index];
      curr_max = max(curr_max, curr_sum);
    }
    res = max(res, curr_max);
  }
  return res;
}



int normalmaxSum(int arr[], int n) {
    int max_so_far = 0, max_ending_here = 0;
    for (int i = 0; i < n; i++) {
        max_ending_here += arr[i];
        if (max_ending_here < 0) {
            max_ending_here = 0;
        }
        if (max_so_far < max_ending_here) {
            max_so_far = max_ending_here;
        }
    }
    return max_so_far;
}

int overallMaxSum(int arr[], int n){
  int max_normal = normalmaxSum(arr,n);
  if(max_normal < 0)
    return max_normal;
  int arr_sum = 0;
  for(int i=0; i<n; i++){
    arr_sum += arr[i];
    arr[i] = -arr[i];
  }
  int max_circular = arr_sum + normalmaxSum(arr, n);
  return max(max_normal, max_circular);
}
 



// Majority element

int majority(int arr[], int n){
  for(int i=0; i<n; i++){
    int count = 1;
    for(int j=i+1; j<n; j++){
      if(arr[i] == arr[j])
        count++;
    }
    if(count > n/2)
      return i;
  }
  return -1;
}



int majority(int arr[], int n){
  int res = 0, count = 1;
  for(int i=1; i<n; i++){
    if(arr[res] == arr[i])
      count++;
    else
      count--;
    if(count == 0){
      res = i;
      count = 1;
    }
  }

  count = 0;
  for(int i=0; i<n; i++)
    if(arr[res] == arr[i])
      count++;

  if(count < n/2)
    res = -1;
  return res;
  
}



int majority(int arr[], int n){
  int res = 0, count = 1;
  for(int i=1; i<n; i++){
    if(arr[res] == arr[i])
      count++;
    else
      count--;
    if(count==0){
      res = i;
      count = 1;
    }
  }

  count = 0;
  for(int i=0; i<n; i++){
    if(arr[res] == arr[i])
      count++;
    
  }
  if(count < n/2)
    return -1;
  return res;
}


// Minimum group flips to make

void printGroups(int arr[], int n){
  for(int i=1; i<n; i++){
    if(arr[i]!=arr[i-1]){
      if(arr[i]!=arr[0])
        cout << "From "<< i << " to ";
      else
        cout << i-1 << endl;
    }
  }

  if(arr[n-1]!=arr[0])
    cout << n-1 << endl;
}



// Sliding window technique

int slidingWindow(int arr[], int n, int k){
  int max_sum = INT_MAX;
  for(int i=0; i+k-1<n; i++){
    int sum = 0;
    for(int j=0; j<k; j++)
      sum += arr[i+j];

    max_sum = max(sum, max_sum);
    
  }
  return max_sum;
}


// Efficient O(n)

int slidingWindow(int arr[], int n, int k){
  int curr = 0;
  for(int i=0; i<k; i++){
    curr += arr[i];
  }
  int res = curr;
  for(int i=k; i<n; i++){
    curr += arr[i]-arr[i-k];
    res = max(res , curr);
  }
  return res;
}



// Subarray with given sum

//Naive

bool isSubSum(int arr[], int n, int sum){
  for(int i=0; i<n; i++){
    int curr=0;
    for(int j=i; j<n; j++){
      curr += arr[j];
      if(curr == sum)
        return true;
    }
  }
  return false;
}



// Efficient using sliding technique

bool isSubSum(int arr[], int n, int sum){
  int s = 0, curr = 0;
  for(int e=0; e<n;e++){
    curr += arr[e];
    while(sum<curr){
      curr -= arr[s];
      s++;
    }
    if(curr==sum)
      return true;
  }
  return false;
}



// Prefix Sum

//Naive Solution

int getSum(int arr[], int n, int l, int r){
  int sum = 0;
  for(int i = l; i<=r; i++){
    sum += arr[i];
  }
  return sum;
  
}


// Efficient in O(1) time

int getSum(int ps[], int l, int r){
  if(l==0)
    return ps[r];
  return ps[r] - ps[l-1];
}


// Weighted Sum using PrefixSum technique




// Equilibrium point

bool eqPt(int arr[], int n){
  for(int i=0; i<n; i++){
    int ls = 0, rs=0;
    for(int j=0; j<i; j++)
      ls += arr[j];
    for(int k=i+1; k<n; k++)
      rs += arr[k];
    if(ls==rs)
      return true;
  }
  return false;
}



// Efficient Solution

bool eqPt(int arr[], int n){
   int rs = 0;
  for(int i=0; i<n; i++)
    rs += arr[i];
  int ls = 0;
  for(int i=0; i<n; i++){
    rs -= arr[i];
    if(ls == rs)
      return true;
    ls += arr[i];
  }
  return false;
   
}
*/

// Maximum Appearing Element

int maxAppear(int left[], int right[], int n){
  int freq[100] = {0};
  for(int i=0; i<n; i++)
    for(int j=left[i]; j<=right[i]; j++)
      freq[j] += 1;

  int res = 0;
  for(int i=1; i<100; i++)
    if(freq[i] > freq[res])
      res = i;
  return res;
}










int main() {
  int n=6;
  int arr[] =  {3,4,8,-9,9,7};
  
  //cout << search(arr, n, 7);
  
  // deleteEle(arr,n, 4);
  // for(int i=0; i<n; i++){
  //   cout << arr[i] << " ";
  // }

  //cout << getLargest(arr,  n);

  //cout << secondLargest(arr, n);

  //cout << isSorted(arr,  n);

  // reverse(arr, n);
  // for(int i=0; i<n; i++){
  //   cout << arr[i] << " ";
  // }
  
  // int res = remDuplicates(arr,  n);
  // for(int i=0; i<res; i++){
  //     cout << arr[i] << " ";
  //   }

  // int arr[] = {1, 0, 4, 5, 6, 0, 0, 2, 0, 3, 2, 0, 1, 1};

  // moveToend(arr, n);
  // for(int i=0; i<n; i++){
  //   cout << arr[i] << " ";
//}
  
  //lrotateOne(arr, n);
  //lrotate_d(arr,3, n);
  //left_d(arr,  n, 3);
  //leftRotate(arr, n, 3);
  // for(int i=0; i<n; i++){
  //     cout << arr[i] << " ";
  // }


  //leaders(arr,  n);

  // cout << maxDiff(arr, n);

  //printFreq(arr, n);

  //cout << maxProfit(arr, n);
  
  //cout << getWater(arr,  n);
  
  // cout << maxConsecOnes(arr,  n);

 // cout << maxSum(arr, n);

  //cout << maxEvenOdd(arr,  n);

  // cout << maxCirSum(arr, n);

  // cout << overallMaxSum(arr,  n);

  // cout << majority(arr, n);

  // printGroups(arr,  n);
  
  // cout << slidingWindow(arr, n, 4);

 // cout << isSubSum(arr,n,sum);

  // cout << getSum(arr, n, 2, 4);

  // Code for Prefix Sum

 //  int ps[n];
 //  ps[0] = arr[0];
 //  for(int i=1; i<n; i++){
 //    ps[i] = ps[i-1] + arr[i];
 //  }
 // cout << getSum(ps, 1, 4);


  // cout<< eqPt(arr, n);
 
  

  
  
}