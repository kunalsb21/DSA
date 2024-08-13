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

void printPrevGreater(int arr[], int n){
    
}


int main() 
{ 
    int arr[]={20,30,10,5,15};
    int n=5;
    printPrevGreater(arr,n);
    return 0; 
}