#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//// Array Implementation of Stack in C++

// struct MyStack{
//     int *arr;
//     int cap;
//     int top;
//     MyStack(int c){
//         cap=c;
//         arr=new int [cap];
//         top=-1;
//     }

//     void push(int x){
//         if(top==cap-1){cout<<"Stack is full"<<endl;return;}
//         top++;
//         arr[top]=x;
//     }

//     int pop(){
//         if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
//         int res=arr[top];
//         top--;
//         return res;
//     }

//     int peek(){
//         if(top==-1){cout<<"Stack is Empty"<<endl;return INT_MIN;}
//         return arr[top];
//     }

//     int size(){
//         return (top+1);
//     }

//     bool isEmpty(){
//         return top==-1;
//     }
// };

// int main()
// {
//     MyStack s(5);
//     s.push(5);
//     s.push(10);
//     s.push(20);
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.peek()<<endl;
//     cout<<s.isEmpty()<<endl;

//     return 0;
// }

//// Vector IMplementation of stack

// struct MyStack{
//     vector<int> v;

//     void push(int x){
//         v.push_back(x);
//     }

//     int pop(){
//         int res=v.back();
//         v.pop_back();
//         return res;
//     }

//     int peek(){
//         return v.back();
//     }

//     int size(){
//         return v.size();
//     }

//     bool isEmpty(){
//         return v.empty();
//     }
// };

// int main()
// {
//     MyStack s;
//     s.push(5);
//     s.push(10);
//     s.push(20);
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.peek()<<endl;
//     cout<<s.isEmpty()<<endl;

//     return 0;
// }

///// Linked list implementation of stack

// struct Node{
//     int data;
//     Node *next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// struct MyStack{
//     Node *head;
//     int sz;
//     MyStack(){
//         head=NULL;
//         sz=0;
//     }

//     void push(int x){
//         Node *temp=new Node(x);
//         temp->next=head;
//         head=temp;
//         sz++;
//     }

//     int pop(){
//         if(head==NULL){cout<<"Stack is Empty"<<endl;return INT_MAX;}
//         int res=head->data;
//         Node *temp=head;
//         head=head->next;
//         delete(temp);
//         sz--;
//         return res;
//     }

//     int peek(){
//         if(head==NULL){cout<<"Stack is Empty"<<endl;return INT_MAX;}
//         return head->data;
//     }

//     int size(){
//         return sz;
//     }

//     bool isEmpty(){
//         return head==NULL;
//     }
// };

// int main()
// {
//     MyStack s;
//     s.push(5);
//     s.push(10);
//     s.push(20);
//     cout<<s.pop()<<endl;
//     cout<<s.size()<<endl;
//     cout<<s.peek()<<endl;
//     cout<<s.isEmpty()<<endl;

//     return 0;
// }

///// Stack in C++ STL

// #include <stack>

// int main()
// {
//     stack<int> s;
//     s.push(10);
//     s.push(20);
//     s.push(30);
//     cout<<s.size()<<endl;
//     cout<<s.top()<<endl;
//     s.pop();
//     cout<<s.top()<<endl;
//     s.push(5);
//     cout<<s.top()<<endl;

//     while(s.empty()==false){
//         cout<<s.top()<<endl;
//         s.pop();
//     }
//     return 0;
// }

//// Check for balanced parenthesis

//// Six possible characters in i/p string: ( ,), [, ], {, }
//// Here we use stack because of LIFO structure

//  #include <stack>
//  #include <string>

// bool isBalanced(string s) {
//   stack<char> st;
//   for (char c : s) {
//       if (c == '(' || c == '[' || c == '{') {
//           st.push(c);
//       } else {
//           if (st.empty()) {
//               return false;
//           } else if (c == ')' && st.top() != '(') {
//               return false;
//           } else if (c == ']' && st.top() != '[') {
//               return false;
//           } else if (c == '}' && st.top() != '{') {
//               return false;
//           } else {
//               st.pop();
//           }
//       }
//   }
//   return st.empty();
// }

// int main() {
//   string s;
//   cout << "Enter a string with parentheses: ";
//   cin >> s;
//   if (isBalanced(s)) {
//       cout << "The parentheses in the string are balanced." << endl;
//   } else {
//       cout << "The parentheses in the string are not balanced." << endl;
//   }
//   return 0;
// }

//// Implement two stacks in an array

// struct TwoStacks {
//     int* arr;
//     int cap;
//     int top1, top2;

//     TwoStacks(int n)
//     {
//         cap = n;
//         arr = new int[n]; // initialises a variable sized array
//         top1 = -1;
//         top2 = cap;
//     }

//     void push1(int x)
//     {
//         if (top1 < top2 - 1) {
//             top1++;
//             arr[top1] = x;
//         }
//         else {
//             cout << "Stack Overflow";
//             exit(1);
//         }
//     }

//     void push2(int x)
//     {
//         if (top1 < top2 - 1) {
//             top2--;
//             arr[top2] = x;
//         }
//         else {
//             cout << "Stack Overflow";
//             exit(1);
//         }
//     }

//     int pop1()
//     {
//         if (top1 >= 0) {
//             int x = arr[top1];
//             top1--;
//             return x;
//         }
//         else {
//             cout << "Stack UnderFlow";
//             exit(1);
//         }
//     }

//     int pop2()
//     {
//         if (top2 < cap) {
//             int x = arr[top2];
//             top2++;
//             return x;
//         }
//         else {
//             cout << "Stack UnderFlow";
//             exit(1);
//         }
//     }
// };

// int main()
// {
//     TwoStacks ts(5);
//     ts.push1(5);
//     ts.push2(10);
//     ts.push2(15);
//     ts.push1(11);
//     ts.push2(7);
//     cout << "Popped element from stack1 is "<<ts.pop1();
//     ts.push2(40);
//     cout << "\nPopped element from stack2 is "<< ts.pop2();
//     return 0;
// }

//// Implement K stacks in an array

// struct kStacks {
//   int *arr;
//   int *top;
//   int *next;
//   int cap, k;
//   int freeTop;

//   kStacks(int k1, int n) {
//     k = k1;
//     cap = n;
//     arr = new int[cap];
//     top = new int[k];
//     next = new int[cap];

//     for (int i = 0; i < k; i++)
//       top[i] = -1;

//     freeTop = 0;
//     for (int i = 0; i < cap - 1; i++)
//       next[i] = i + 1;
//     next[cap - 1] = -1;
//   }

//   bool isFull() { return (freeTop == -1); }

//   bool isEmpty(int sn) { return (top[sn] == -1); }

//   void push(int x, int sn) {
//     if (isFull()) {
//       cout << "\nStack Overflow\n";
//       return;
//     }

//     int i = freeTop;
//     freeTop = next[i];
//     next[i] = top[sn];
//     top[sn] = i;
//     arr[i] = x;
//   }

//   int pop(int sn) {
//     if (isEmpty(sn)) {
//       cout << "\nStack Underflow\n";
//       return INT_MAX;
//     }

//     int i = top[sn];
//     top[sn] = next[i];
//     next[i] = freeTop;
//     freeTop = i;
//     return arr[i];
//   }
// };

// int main() {
//   int k = 3, n = 10;
//   kStacks ks(k, n);

//   ks.push(15, 2);
//   ks.push(45, 2);

//   ks.push(17, 1);
//   ks.push(49, 1);
//   ks.push(39, 1);

//   ks.push(11, 0);
//   ks.push(9, 0);
//   ks.push(7, 0);

//   cout << "Popped element from stack 2 is " << ks.pop(2) << endl;
//   cout << "Popped element from stack 1 is " << ks.pop(1) << endl;
//   cout << "Popped element from stack 0 is " << ks.pop(0) << endl;

//   return 0;
// }

//// Stock span problem

// void printSpan(int arr[],int n){

//   stack<int> s ;
//   s.push(0);
//   cout<<1<<" ";
//   for(int i=1;i<n;i++){
//       while(s.empty()==false && arr[s.top()]<=arr[i]){
//           s.pop();
//       }
//       int span=s.empty() ? i+1 : i-s.top();
//       cout<<span<<" ";
//       s.push(i);
//   }
// }

// int main()
// {
//   int arr[]={18,12,13,14,11,16};
//   int n=6;
//   printSpan(arr,n);
//   return 0;
// }

/*

Dry Run:

Let's illustrate with the array arr = {18, 12, 13, 14, 11, 16}:

s = {0}: Initial stack with the index of the first element.
i = 1: arr[1] is 12.
arr[s.top()] (which is arr[0]) is 18.
Since 18 > 12, the while loop doesn't execute.
span = 1 - 0 = 1.
cout << 1 << " ";
s = {0, 1}: Index of the second element is pushed.
i = 2: arr[2] is 13.
arr[s.top()] (which is arr[1]) is 12.
Since 12 < 13, the while loop doesn't execute.
span = 2 - 1 = 1.
cout << 1 << " ";
s = {0, 1, 2}: Index of the third element is pushed.
i = 3: arr[3] is 14.
arr[s.top()] (which is arr[2]) is 13.
Since 13 < 14, the while loop doesn't execute.
span = 3 - 2 = 1.
cout << 1 << " ";
s = {0, 1, 2, 3}: Index of the fourth element is pushed.
i = 4: arr[4] is 11.
arr[s.top()] (which is arr[3]) is 14.
Since 14 > 11, the while loop doesn't execute.
span = 4 - 3 = 1.
cout << 1 << " ";
s = {0, 1, 2, 3, 4}: Index of the fifth element is pushed.
i = 5: arr[5] is 16.
arr[s.top()] (which is arr[4]) is 11.
Since 11 < 16, the while loop doesn't execute.
span = 5 - 4 = 1.
cout << 1 << " ";
s = {0, 1, 2, 3, 4, 5}: Index of the sixth element is pushed.

    */

//// Previous greater element

//// Naive

// void printPrevGreater(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j = i-1; j>=0; j--){
//             if(arr[j] > arr[i]){
//                 cout << arr[j] << " ";
//                 break;
//             }

//         }
//         if(j==-1)
//             cout << -1 <<" ";
//     }

// }

//// Efficient

// void printPrevGreater(int arr[], int n){
//    stack<int> s;
//    s.push(arr[0]);
//    for(int i=0; i<n; i++){
//     while(s.empty()==false && s.top()<=arr[i]){
//         s.pop();
//     }
//     int pg = s.empty()?-1:s.top();
//     cout<<pg<<" ";
//     s.push(arr[i]);
//    }
// }

// int main()
// {
//     int arr[]={20,30,10,5,15};
//     int n=5;
//     printPrevGreater(arr,n);
//     return 0;
// }

//// Next greater element

//// Naive

// void printNextGreater(int arr[], int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j = i+1; j<n; j++){
//             if(arr[j]>arr[i]){
//                 cout << arr[j]<<" ";
//                 break;
//             }
//         }
//         if(j==n)
//         cout << -1 << " ";
//     }
    
// }


//// Efficient O(N)

// void printNextGreater(int arr[], int n){
//     stack<int> s;
//     s.push(arr[n-1]);
//     cout << "-1" << " ";
//     for(int i=n-2; i>=0; i--){
//         while(s.empty() == false && s.top()<=arr[i]){
//             s.pop();
//         }
//         int nextGr = (s.empty()) ? (-1) : (s.top());
//         cout << nextGr << " ";
//         s.push(arr[i]);
//     }
// }

//// using vector

// vector<int> printNextGreater(int arr[], int n){
//     vector<int> v;
//     stack<int> s;
//     s.push(arr[n-1]);
//     v.push_back(-1);

//     for(int i=n-2; i>=0; i--){
//         while(s.empty()==false && s.top()<=arr[i]){
//             s.pop();
//         }
//         int ng = s.empty() ? -1 : s.top();
//         v.push_back(ng);
//         s.push(arr[i]);
//     }
//     reverse(v.begin(), v.end());
//     return v;
// }

// int main()
// {
//     int arr[]={5,15,10,8,6,12,9,18};
//     int n=8;
//     for(int x: printNextGreater(arr,n)){
//         cout<<x<< " ";   
//     }
    
//     return 0;
// }


////// Largest rectangular area in a histogram

//// Naive

// // int getMaxArea(int arr[], int n){
//     int res = 0;
//     for(int i=0 ; i<n; i++){
//         int curr = arr[i];
//         for(int j=i-1; j>=0; j--){
//             if(arr[j]>=arr[i]){
//                 curr+=arr[i];
//             }
//             else{
//                 break;
//             }
//         }
//          for(int j=i+1; j<n; j++){
//             if(arr[j]>=arr[i]){
//                 curr+=arr[i];
//             }
//             else{
//                 break;
//             }
//         }
//         res = max(res,curr);
//     }
//     return res;
// }

///// Better solution

// int getMaxArea(int arr[],int n){
//     int res=0;
//     int ps[n],ns[n];
    
//     stack <int> s;
//     s.push(0);
//     for(int i=0;i<n;i++){
//         while(s.empty()==false && arr[s.top()]>=arr[i])
//             s.pop();
//         int pse=s.empty()?-1:s.top();
//         ps[i]=pse;
//         s.push(i);
//     }
    
//     while(s.empty()==false){
//         s.pop();
//     }
    
//     s.push(n-1);
//     for(int i=n-1;i>0;i--){
//         while(s.empty()==false && arr[s.top()]>=arr[i])
//             s.pop();
//         int nse=s.empty()?n:s.top();
//         ns[i]=nse;
//         s.push(i);
//     }
    
//     for(int i=0;i<n;i++){
//         int curr=arr[i];
//         curr+=(i-ps[i]-1)*arr[i];
//         curr+=(ns[i]-i-1)*arr[i];
//         res=max(res,curr);
//     }
//     return res;
    
// }


//// Efficient solution

// int getMaxArea(int arr[],int n){
//     stack <int> s;
//     int res=0;
//     int tp;
//     int curr;
    
//     for(int i=0;i<n;i++){
//         while(s.empty()==false && arr[s.top()]>=arr[i]){
//             tp=s.top();s.pop();
//             curr=arr[tp]* (s.empty() ? i : i - s.top() - 1);
//             res=max(res,curr);
//         }
//         s.push(i);
//     }

//     //// Processing remaining elements of stack
//     while(s.empty()==false){
//         tp=s.top();s.pop();
//         curr=arr[tp]* (s.empty() ? n : n - s.top() - 1);
//         res=max(res,curr);
//     }
    
//     return res;
// }


// int main() 
// { 
//     int arr[]={6,2,5,4,1,5,6};
//     int n=7;
//     cout<<"Maximum Area: "<<getMaxArea(arr,n);
//     return 0; 
// }

//// Largest rectangle with all 1's

// // Rows and columns in input matrix
// #define R 4
// #define C 4

// // Finds the maximum area under 
// // the histogram represented
// // by histogram.  See below article for details.


// int maxHist(int row[])
// {
//     // Create an empty stack. 
//     // The stack holds indexes of
//     // hist[] array/ The bars stored 
//     // in stack are always
//     // in increasing order of their heights.
//     stack<int> result;

//     int top_val; // Top of stack

//     int max_area = 0; // Initialize max area in current
//     // row (or histogram)

//     int area = 0; // Initialize area with current top

//     // Run through all bars of given histogram (or row)
//     int i = 0;
//     while (i < C) {
//         // If this bar is higher than the bar on top stack,
//         // push it to stack
//         if (result.empty() || row[result.top()] <= row[i])
//             result.push(i++);

//         else {
//             // If this bar is lower than top of stack, then
//             // calculate area of rectangle with stack top as
//             // the smallest (or minimum height) bar. 'i' is
//             // 'right index' for the top and element before
//             // top in stack is 'left index'
//             top_val = row[result.top()];
//             result.pop();
//             area = top_val * i;

//             if (!result.empty())
//                 area = top_val * (i - result.top() - 1);
//             max_area = max(area, max_area);
//         }
//     }

//     // Now pop the remaining bars from stack and calculate
//     // area with every popped bar as the smallest bar
//     while (!result.empty()) {
//         top_val = row[result.top()];
//         result.pop();
//         area = top_val * i;
//         if (!result.empty())
//             area = top_val * (i - result.top() - 1);

//         max_area = max(area, max_area);
//     }
//     return max_area;
// }

// // Returns area of the largest rectangle with all 1s in
// // A[][]
// int maxRectangle(int A[][C])
// {
//     // Calculate area for first row and initialize it as
//     // result
//     int result = maxHist(A[0]);

//     // iterate over row to find maximum rectangular area
//     // considering each row as histogram
//     for (int i = 1; i < R; i++) {

//         for (int j = 0; j < C; j++)

//             // if A[i][j] is 1 then add A[i -1][j]
//             if (A[i][j])
//                 A[i][j] += A[i - 1][j];

//         // Update result if area with current row (as last
//         // row) of rectangle) is more
//         result = max(result, maxHist(A[i]));
//     }

//     return result;
// }

// // Driver code
// int main()
// {
//     int A[][C] = {
//         { 0, 1, 1, 0 },
//         { 1, 1, 1, 1 },
//         { 1, 1, 1, 1 },
//         { 1, 1, 0, 0 },
//     };

//     cout << "Area of maximum rectangle is "
//          << maxRectangle(A);

//     return 0;
// }


////  Design a stack that supports getMin()

// struct MyStack {
 
//     stack<int> ms;
//     stack<int> as;
 
// void push(int x) {
 
//       if(ms.empty() ) {
//           ms.push(x);
//           as.push(x);
//           return;
//       }
      
//       ms.push(x);
      
//       if(as.top()>=ms.top())
//         as.push(x);
//    }
 
// void pop() {
 
//     if(as.top()==ms.top())
//         as.pop();
//     ms.pop();
    
//    }

// int top() {
//      return ms.top();
//    }
 
// int getMin() {
//       return as.top();
//    }
// };

// int main()
// {
//     MyStack s;
//     s.push(4);
//     s.push(5);
//     s.push(8);
//     s.push(1);
//     s.pop();
 
//     cout<<" Minimum Element from Stack: " <<s.getMin();
  
//     return 0; 
// }



//// 


