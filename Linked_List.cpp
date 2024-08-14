#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

// struct Node{
//  int data;
//  Node *next;
//  Node (int x){
//    data = x;
//    next = NULL;
//  }
// };

// // int main() {
// //   Node *head = new Node(10);
// //   head -> next = new Node(20);
// //   head -> next -> next = new Node(30);
// //   cout<<head->data<<"-->"<<head -> next->data<<"-->"<<head -> next -> next->data;
// // }

// // traversing a linked list

// //// Iterative
// // void printList(Node *head){
// //   Node *curr = head;
// //   while(curr!=NULL){
// //     cout << curr -> data << " ";
// //     curr = curr -> next;
// //   }
// // }

// //// Recursive
// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data << " ";
//   printList(head->next);
// }

// 



// int main() {
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   printList(head);
//   return 0;
// }


//// insert at beginning

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data << " ";
//   printList(head -> next);
// }

// Node *insertBegin(Node *head, int x){
//   Node *temp = new Node(x);
//   temp -> next = head;
//   return temp;
// }

// int main(){
//   Node *head = NULL;
//   head = insertBegin(head, 30);
//   head = insertBegin(head, 20);
//   head = insertBegin(head, 10);
//   head = insertBegin(head, 5);
//   printList(head);
//   return 0;
// }


/////Insert at end

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data << " ";
//   printList(head->next);
// }

// Node *insertEnd(Node *head, int x){
//   Node *temp = new Node(x);

//   if(head == NULL)
//     return temp;

//   Node *curr = head;
//   while(curr -> next != NULL){
//     curr = curr->next;
//   }

//   curr -> next = temp;
//   return head;
// }


// int main(){
//   Node *head = NULL;

//   head = insertEnd(head, 10);
//   head = insertEnd(head, 20);
//   head = insertEnd(head, 30);

//   printList(head);
//   return 0;
  
// }


//// Insert at the given pos

// struct Node{
//   int data;
//   Node *next;
//   Node (int x){
//     data = x;
//     next = NULL;
//   }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head -> next);
// }

// Node *insertPos(Node *head, int pos, int data){
  
//   Node *temp = new Node(data);
//   if(pos==1){
//     temp -> next = head;
//     return temp;
//   }

//   Node *curr = head;
//   for(int i=1; i<pos-2 && curr!=NULL; i++)
//     curr = curr->next;

//   if(curr==NULL)
//     return head;

//   temp->next = curr->next;
//   curr->next = temp;
//   return head;
  
// }

// int main() 
// { 
//     Node *head=new Node(10);
//     head->next=new Node(20);
//     head->next->next=new Node(30);
//     printList(head);
//     head=insertPos(head, 2,25);
//     cout<< endl;
//     printList(head);
//     return 0;
// } 


///// Delete first node

// struct Node {
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *delHead(Node *head){
//   if(head == NULL)
//     return NULL;
//   else{
//     Node *temp = head -> next;
//     delete head;
//     return temp;
//   }
// }

// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   printList(head);
//   head = delHead(head);
//   cout << endl;
//   printList(head);
  
// }

///// Delete Last node

// struct Node {
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *delLast(Node *head){
//   if(head == NULL)
//     return NULL;

//   if(head->next == NULL){
//     delete head;
//     return NULL;
//   }

//   Node *curr = head;
//   while(curr -> next -> next!= NULL){
//     curr = curr -> next;
//   }
//   delete (curr -> next);
//   curr -> next = NULL;
//   return head;
// }


// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   printList(head);
//   head = delLast(head);
//   cout << endl;
//   printList(head);
//   return 0;
// }


///// Search in a LL


// struct Node {
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

////Iterative
// int search(Node *head, int x){
//   int pos = 1;
//   Node *curr = head;
//   while(curr!=NULL){
//     if(curr -> data == x)
//       return pos;
//     else{
//       pos++;
//       curr = curr->next;
//     }
//   }
//   return -1;
// }

//// Recursive

// int search(Node *head, int x){
//   if(head==NULL)
//     return -1;
//   if(head->data == x)
//     return 1;
//   else{
//     int res = search(head->next, x);
//     if(res==-1)
//       return -1;
//     else
//       return (res+1);
//   }
// }

// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   cout << search(head, 30);
// }


///// Doubly LL

// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   printList(head);
// }

//// Insert at begin DLL


// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// // Node *insertBegin(Node* head, int data){
// //   Node *temp = new Node(data);
// //   if(head == NULL)
// //     return temp;
// //   temp -> next = head;
// //   head -> prev = temp;
// //   return temp;
// // }

// Node *insertBegin(Node *head, int data){
//   Node *temp = new Node(data);
//   temp -> next = head;
//   if(head != NULL)
//     head -> prev = temp;
//   return temp;
// }

// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   head = insertBegin(head, 5);
//   printList(head);
// }


///// Insert at end of DLL


// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *insertEnd(Node *head, int data){
//   Node *temp = new Node(data);
//   if(head == NULL)
//     return temp;

//   Node *curr = head;
//   while(curr -> next != NULL)
//     curr = curr -> next;

//   curr -> next = temp;
//   temp -> prev = curr;
//   return head;
  
  
// }

// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   head = insertEnd(head, 40);
//   printList(head);
// }


//// Reverse a DLL


// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *reverseDLL(Node *head){
//    if(head==NULL || head -> next == NULL)
//      return head;
//   Node *prev = NULL;
//   Node *curr = head;
//   while(curr != NULL){
//     prev = curr -> prev;
//     curr -> prev = curr -> next;
//     curr -> next = prev;
//     curr = curr -> prev;
//   }
//   return prev -> prev;
// }

// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   printList(head);
//   head = reverseDLL(head);
//   cout << endl;
//   printList(head);
// }


//// Delete head of DLL

// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *delHead(Node *head){
//   if(head == NULL)  // empty LL
//     return NULL;

//   if(head -> next == NULL){ // single node LL
//     delete head;
//     return NULL;
//   }
//   else{  // two or more nodes
//     Node *temp = head; 
//     head = head -> next;
//     head -> prev = NULL;
//     delete temp;
//     return head;
//   }
// }



// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   printList(head);
//   head = delHead(head);
//   cout << endl;
//   printList(head);
// }


//// Delete end DLL

// struct Node {
// int data;
// Node *prev;
// Node *next;
// Node (int x){
//   data = x;
//   prev = NULL;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head->next);
// }

// Node *delLast(Node *head){
//   if(head==NULL)
//     return NULL;

//   if(head -> next == NULL)
//     return head;

//   Node *curr = head;
//   while(curr->next->next != NULL)
//     curr = curr -> next;
//   delete (curr->next);
//   curr->next = NULL;
//   return head;
// }


// int main(){
//  Node *head = new Node(10);
//  Node *temp1 = new Node(20);
//  Node *temp2 = new Node(30);

//  head -> next = temp1;
//  temp1 -> prev = head;
//  temp1 -> next = temp2;
//  temp2 -> prev = temp1;

//   printList(head);
//   head = delLast(head);
//   cout << endl;
//   printList(head);
// }


//// Circular Linked List

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };


// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;

//   return 0;
// }


//// Traversal of circular LL

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// // Method 1
// // void printList(Node *head){
// //   if(head==NULL)
// //     return;
// //   cout << head->data <<" ";
// //   for(Node *p=head->next; p!=head; p=p->next)
// //     cout << (p->data) <<" ";
// // }

// // Method 2
// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;

//   printList(head);
//   return 0;
// }


//// Insert at begin of CLL

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };


// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

// //// Naive

// // Node *insertBegin(Node*head, int x){
// //   Node *temp = new Node(x);
// //   if(head==NULL)
// //     temp->next=temp;
// //   else{
// //     Node *curr = head;
// //     while(curr->next!=head)
// //       curr = curr-> next;
// //     curr->next=temp;
// //     temp->next=head;
// //   }
// //   return temp;
// // }

// //// Efficient


// Node *insertBegin(Node *head, int x){
//   Node *temp = new Node(x);
//   if(head == NULL){
//     temp -> next = temp;
//     return temp;
//   }
//   else{
//     temp -> next = head -> next;
//     head -> next = temp;
//     int t = head -> data;
//     head -> data = temp -> data;
//     temp -> data = t;
//   }
//   return temp;
// }


// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;
  
//   printList(head);
//   head = insertBegin(head, 50);
//   cout<<endl;
//   printList(head);
  
//   return 0;
// }


//// Insert at end of CLL

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };


// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

//// Naive

// Node *insertEnd(Node *head, int x){
//   Node *temp = new Node(x);
//   if(head == NULL){
//     temp -> next = temp;
//     return temp;
//   }
//   else{
//     Node *curr = head;
//     while(curr -> next != head){
//       curr = curr -> next;
//     }
//     curr -> next = temp;
//     temp -> next = head;
//   }
//   return head;
  
// }

// Node *insertEnd(Node *head, int x){
//   Node *temp = new Node(x);
//   if(head == NULL){
//     temp -> next = temp;
//     return temp;
//   }
//   else{
//     temp -> next = head -> next;
//     head -> next = temp;

//     int t = temp -> data;
//     temp -> data = head -> data;
//     head -> data = t;
//   }
//   return temp;
// }



// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;

//   printList(head);
//   head = insertEnd(head, 60);
//   cout<<endl;
//   printList(head);

//   return 0;
// }


//// Delete Head of CLL

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };


// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

// //// Naive

// // Node *delHead(Node *head){
// //   if(head == NULL)
// //     return NULL;
// //   if(head -> next == head){
// //     delete head;
// //     return NULL;
// //   }

// //   Node *curr = head;
// //   while(curr -> next != head)
// //     curr = curr -> next;
// //   curr -> next = head -> next;
// //   delete head;
// //   return (curr-> next);
// // }

// //// Efficient

// Node *delHead(Node *head){
//      if(head == NULL)
//        return NULL;
//      if(head -> next == head){
//        delete head;
//        return NULL;
//      }
  
//   head -> data = head -> next -> data;
//   Node *temp = head -> next;
//   head -> next = head -> next -> next;
//   delete temp;
//   return head;
// }

// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;

//   printList(head);
//   head = delHead(head);
//   cout<<endl;
//   printList(head);

//   return 0;
// }

///// Delete kth node from beginning 

//  struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// // Method 2
// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

// Node *delHead(Node *head){
//      if(head == NULL)
//        return NULL;
//      if(head -> next == head){
//        delete head;
//        return NULL;
//      }

//   head -> data = head -> next -> data;
//   Node *temp = head -> next;
//   head -> next = head -> next -> next;
//   delete temp;
//   return head;
// }

// Node *deleteKth(Node *head, int k){
//   if(head == NULL)
//     return head;
  
//   if(k==1)
//     return delHead(head);
  
//   Node *curr = head;
//   for(int i=0; i<k-2; i++)
//     curr = curr->next;

//   Node *temp = curr -> next;
//   curr -> next = curr -> next -> next;
//   delete temp;
//   return head;
  
// }
 

// int main(){
//   Node *head = new Node(10);
//   head -> next = new Node(20);
//   head -> next -> next = new Node(30);
//   head -> next -> next -> next = new Node(40);
//   head -> next -> next -> next -> next = head;

//   printList(head);
//   head = deleteKth(head, 3);
//   cout << endl;
//   printList(head);
//   return 0;
// }


///// Circular doubly LL


// struct Node{
// int data;
// Node *next;
// Node *prev;
// Node (int x){
//   data = x;
//   next = NULL;
//   prev = NULL;
// }
// };


// void printList(Node *head){
//   if(head==NULL)
//     return;

//   Node *p = head;
//   do{
//     cout << (p->data)<<" ";
//     p = p->next;
//   } while(p!=head);
// }

// Node *insertBegin(Node *head, int x){
//   Node *temp = new Node(x);

//   if(head == NULL){
//     temp -> next = temp;
//     temp -> prev = temp;
//     return temp;
//   }

//   temp -> prev = head -> prev;
//   temp -> next = head;
//   head -> prev -> next = temp;
//   head -> prev = temp;
//   return temp;
  
// }

// Node *insertEnd(Node *head, int x){
//   Node *temp = new Node(x);

//   if(head == NULL){
//     temp -> next = temp;
//     temp -> prev = temp;
//     return temp;
//   }

//   temp -> prev = head -> prev;
//   temp -> next = head;
//   head -> prev -> next = temp;
//   head -> prev = temp;
//   return head;
// }

// int main(){
//   Node *head=new Node(10);
//   Node *temp1=new Node(20);
//   Node *temp2=new Node(30);
//   head->next=temp1;
//   temp1->next=temp2;
//   temp2->next=head;
//   temp2->prev=temp1;
//   temp1->prev=head;
//   head->prev=temp2;
//   head=insertBegin(head,5);
//   head = insertEnd(head, 40);
//   printList(head);
//   return 0;
// }



//// Sorted insert in a Linked list

// struct Node{
// int data;
// Node *next;
// Node (int x){
//   data = x;
//   next = NULL;
// }
// };

// void printList(Node *head){
//   if(head == NULL)
//     return;
//   cout << head -> data <<" ";
//   printList(head -> next);
  
// }

// Node *sortInsert(Node *head, int x){
//   Node *temp = new Node(x);
//   if(head == NULL)
//     return temp;

//   if(x < head->data){
//     temp -> next = head;
//     return temp;
//   }

//   Node *curr = head;
//   while(curr -> next != NULL && curr -> next -> data < x)
//     curr = curr -> next;
//   temp -> next = curr -> next;
//   curr -> next = temp;
//   return head;
  
// }

// int main(){
//   Node *head=new Node(10);
//   head->next=new Node(20);
//   head->next->next=new Node(30);
//   head = sortInsert(head, 25);
//   printList(head);
// }



///// Middle of a linked list

//  struct Node{
//  int data;
//  Node *next;
//  Node (int x){
//    data = x;
//    next = NULL;
//  }
//  };

//  void printList(Node *head){
//    if(head == NULL)
//      return;
//    cout << head -> data <<" ";
//    printList(head -> next);
//  }

// //// Naive

// // void printMiddle(Node *head){
// //   if(head == NULL)
// //     return;

// //   int count = 0;
// //   Node *curr;
// //   for(curr = head; curr!=NULL; curr=curr->next)
// //     count++;
// //   curr=head;
// //   for(int i=0; i<count/2; i++)
// //     curr = curr->next;
// //   cout << curr -> data;
// // }

////// Efficient

// void printMiddle(Node *head){
//   if(head == NULL)
//     return;
//   Node *slow = head, *fast = head;
//   while(fast != NULL && fast -> next != NULL){
//     slow = slow -> next;
//     fast = fast -> next -> next;
//   }
//   cout << (slow -> data);
// }

//  int main(){
//    Node *head=new Node(10);
//    head->next=new Node(20);
//    head->next->next=new Node(30);
   
//    printMiddle(head);
//  }

///// Find n-th node from the end of LL


 // struct Node{
 // int data;
 // Node *next;
 // Node (int x){
 //   data = x;
 //   next = NULL;
 // }
 // };

 // void printList(Node *head){
 //   if(head == NULL)
 //     return;
 //   cout << head -> data <<" ";
 //   printList(head -> next);
 // }

//// Method 1 - using length of LL
// void printNthFromEnd(Node *head, int n){
//   int len=0;
//   for(Node *curr=head; curr!=NULL; curr=curr->next)
//     len++;
//   if(len<n)
//     return;
//   Node *curr = head;
//   for(int i=1; i<len-n+1; i++)
//     curr = curr->next;
//   cout <<(curr->data)<<" ";
// }

//// method 2- using two pointers 
//// 1. Move 'first' n positions ahead.
//// 2. Start 'second' pointer from head.
//// 3. Move both 'first' and 'second' at same speed. When 'first' reaches NULL, second reaches the required node.

// void printNthFromEnd(Node *head, int n){
//   if(head==NULL)
//     return;

//   Node *first = head;
//   for(int i=0; i<n; i++){
//     if(first == NULL)
//       return;
//     first = first -> next;
//   }

//   Node *second = head;
//   while(first !=NULL){
//     second = second -> next;
//     first = first -> next;
//   }
//   cout << (second -> data);
// }

//  int main(){
//    Node *head=new Node(10);
//    head->next=new Node(20);
//    head->next->next=new Node(30);
//    head->next->next->next=new Node(40);
//    printNthFromEnd(head, 2);

//  }


//// Reverse a Linked list


 // struct Node{
 // int data;
 // Node *next;
 // Node (int x){
 //   data = x;
 //   next = NULL;
 // }
 // };

 // void printList(Node *head){
 //   if(head == NULL)
 //     return;
 //   cout << head -> data <<" ";
 //   printList(head -> next);
 // }

// ////Naive
// // Node *revList(Node *head){
// //   vector<int> arr;

// //   for(Node *curr = head; curr!=NULL; curr=curr->next)
// //     arr.push_back(curr->data);

// //   for(Node *curr=head; curr!=NULL; curr=curr->next){
// //     curr->data = arr.back();
// //     arr.pop_back();
// //   }
// //   return head;
// // }

// //// Efficient

// Node *revList(Node *head){
//   Node *curr = head;
//   Node *prev = NULL;

//   while(curr != NULL){
//     Node *next = curr->next;
//     curr->next = prev;
//     prev = curr;
//     curr = next;
//   }
//   return prev;
// }

//// Recursive method 1

// Node *revList(Node *head){
//   if(head==NULL||head->next==NULL)
//     return head;

//   Node *rest_head = revList(head->next);
//   Node *rest_tail = head->next;
//   rest_tail->next = head;
//   head->next = NULL;
//   return rest_head;
// }

//// Recursive method 2

// Node *revList(Node *curr, Node *prev){
//   if(curr==NULL)
//     return prev;

//   Node *next = curr->next;
//   curr->next = prev;
//   return revList(next, curr);

// } 

//  int main(){
//    Node *head=new Node(10);
//    head->next=new Node(20);
//    head->next->next=new Node(30);
//    head->next->next->next=new Node(40);
//    printList(head);
//    head = revList(head, NULL);
//    cout<<endl;
//    printList(head);  
// }


//// Remove duplicates from a sorted LL


//  struct Node{
//  int data;
//  Node *next;
//  Node (int x){
//    data = x;
//    next = NULL;
//  }
//  };

//  void printList(Node *head){
//    if(head == NULL)
//      return;
//    cout << head -> data <<" ";
//    printList(head -> next);
//  }

// void RemoveDups(Node *head){
//   Node *curr = head;
//   while(curr != NULL && curr ->next != NULL){
//     if(curr->data == curr ->next->data){
//       Node *temp = curr->next;
//       curr->next = curr->next->next;
//       delete temp;
//     }
//     else
//       curr = curr->next;
//   }
// }

//  int main(){
//    Node *head=new Node(10);
//    head->next=new Node(20);
//    head->next->next=new Node(20);
//    head->next->next->next=new Node(30);
//    head->next->next->next->next=new Node(30);
//    head->next->next->next->next->next=new Node(40);
//    printList(head);
//    RemoveDups(head);
//    cout<<endl;
//    printList(head);  
// }                           


//// Reverse a linked list in groups of size k

 // struct Node{
 // int data;
 // Node *next;
 // Node (int x){
 //   data = x;
 //   next = NULL;
 // }
 // };

 // void printList(Node *head){
 //   if(head == NULL)
 //     return;
 //   cout << head -> data <<" ";
 //   printList(head -> next);
 // }

//// Recursive Solution
// Node *revGroups(Node *head, int k){
//   Node *curr=head, *next=NULL, *prev=NULL;
//   int count = 0;
//   while(curr!=NULL && count<k){
//     next = curr->next;
//     curr->next = prev;
//     prev = curr;
//     curr=next;
//     count++;
//   }

//   if(next!=NULL){
//     Node *rest_head = revGroups(next, k);
//     head->next = rest_head;
//   }
//   return prev;
// }

//// Iterative method

// Node *revGroups(Node *head, int k){
//   Node *curr = head, *prevFirst = NULL;
//   bool isFirstPass = true;
//   while(curr!=NULL){
//     Node *first=curr, *prev=NULL;
//     int count=0;
//     while(curr!=NULL && count<k){
//       Node *next = curr->next;
//       curr->next=prev;
//       prev = curr;
//       curr = next;
//       count++;
//     }
//     if(isFirstPass){
//       head=prev;
//       isFirstPass = false;
//     }
//     else
//       prevFirst -> next = prev;
//     prevFirst =first;
//   }
//   return head;
// }

//  int main(){
//    Node *head=new Node(10);
//    head->next=new Node(20);
//    head->next->next=new Node(30);
//    head->next->next->next=new Node(40);
//    head->next->next->next->next=new Node(50);
//    head->next->next->next->next->next=new Node(60);
//    printList(head);
//    head = revGroups(head, 3);
//    cout<<endl;
//    printList(head);  
// }  



//// Detect loop in a linked list


// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// bool isLoop(Node* head) 
// { 
//     unordered_set<Node*> s; 
//     for(Node *curr=head;curr!=NULL;curr=curr->next) {  
//         if (s.find(curr) != s.end()) 
//             return true; 
//         s.insert(curr); 
//     } 
//     return false; 
// }

// // This code effectively detects a loop in a singly linked list.

// // unordered_set<Node*> s;: A hash set is created to store visited nodes.
// // for loop: Iterates through the linked list.
// // curr: Points to the current node.
// // curr != NULL: The loop continues until the end of the list is reached.
// // if (s.find(curr) != s.end()): Checks if the current node (curr) is already in the set. If it is, a loop exists, and the function returns true.
// // s.insert(curr);: Adds the current node to the set to mark it as visited.
// // return false;: If the loop completes without finding a duplicate node, there is no loop, and the function returns false.

// int main() 
// { 
//   Node *head=new Node(15);
//   head->next=new Node(10);
//   head->next->next=new Node(12);
//   head->next->next->next=new Node(20);
//   head->next->next->next->next=head->next;
//   if (isLoop(head)) 
//         cout << "Loop found"; 
//     else
//         cout << "No Loop"; 
//   return 0;
// } 


//// Detect loop using floyd's cycle algorithm


// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// bool isLoop(Node *head){
//   Node *slow = head, *fast = head;
//   while(fast!=NULL && fast->next!=NULL){
//     slow = slow->next;
//     fast = fast->next->next;
//     if(slow==fast)
//       return true;
//   }
//   return false;
// }



// int main() 
// { 
//   Node *head=new Node(15);
//   head->next=new Node(10);
//   head->next->next=new Node(12);
//   head->next->next->next=new Node(20);
//   head->next->next->next->next=head->next;
//   if (isLoop(head)) 
//         cout << "Loop found"; 
//     else
//         cout << "No Loop"; 
//   return 0;
// } 

//// Detect and remove loop


// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void detectRemoveLoop(Node *head){
//   Node *slow = head, *fast = head;
//   while(fast!=NULL && fast->next!=NULL){
//     slow = slow->next;
//     fast = fast->next->next;
//     if(slow==fast)
//       break;
//   }
//   if(slow!=fast)
//     return;
//   slow=head;
//   while(slow->next != fast->next){
//     slow = slow->next;
//     fast = fast->next;
//   }
//   fast->next = NULL;
// }



// int main() 
// { 
//   Node *head=new Node(15);
//   head->next=new Node(10);
//   head->next->next=new Node(12);
//   head->next->next->next=new Node(20);
//   head->next->next->next->next=head->next;
//   if (isLoop(head)) 
//         cout << "Loop found"; 
//     else
//         cout << "No Loop"; 
//   return 0;
// } 


//// Delete a node with only pointer given to it.

// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }cout<<endl;
// }

// void deleteNode(Node *ptr){
//     Node *temp=ptr->next;
//     ptr->data=temp->data;
//     ptr->next=temp->next;
//     delete(temp);
// }

// int main() 
// { 
//   Node *head=new Node(10);
//   head->next=new Node(20);
//   Node *ptr=new Node(30);
//   head->next->next=ptr;
//   head->next->next->next=new Node(40);
//   head->next->next->next->next=new Node(25);
//   printlist(head);
//   deleteNode(ptr);
//   printlist(head);
//   return 0;
// } 


 //// Segregate even odd nodes 

// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }cout<<endl;
// }

// Node *segregate(Node *head){
//     Node *eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
//     for(Node *curr=head;curr!=NULL;curr=curr->next){
//         int x=curr->data;
//         if(x%2==0){
//             if(eS==NULL){
//                 eS=curr;
//                 eE=eS;
//             }else{
//                 eE->next=curr;
//                 eE=eE->next;
//             }
//         }else{
//             if(oS==NULL){
//                 oS=curr;
//                 oE=oS;
//             }else{
//                 oE->next=curr;
//                 oE=oE->next;
//             }
//         }
//     }
//     if(oS==NULL||eS==NULL)
//         return head;
//     eE->next=oS;
//     oE->next=NULL;
//     return eS;
// }

// int main() 
// { 
//   Node *head=new Node(17);
//   head->next=new Node(15);
//   head->next->next=new Node(8);
//   head->next->next->next=new Node(12);
//   head->next->next->next->next=new Node(10);
//   head->next->next->next->next->next=new Node(5);
//   head->next->next->next->next->next->next=new Node(4);
//   printlist(head);
//   head=segregate(head);
//   printlist(head);
//   return 0;
// } 


///// Intersection point of two LL

// struct Node{
// int data;
// Node *next;
// Node(int x){
//   data = x;
//   next = NULL;
// }
// };

// int getCount(Node *head){
//   Node *curr = head;
//   int count = 0;
//   while(curr!=NULL){
//     count++;
//     curr=curr->next;
//   }
//   return count;
// }

// int _getIntersection(int d, Node *head1, Node* head2){
//   Node *curr1 = head1;
//   Node *curr2 = head2;

//   for(int i=0; i<d; i++){
//     if(curr1 == NULL){
//       return -1;
//     }
//     curr1 = curr1->next;
//   }

//   while(curr1!=NULL && curr2!=NULL){
//     if(curr1 == curr2)
//       return curr1 -> data;

//     curr1 = curr1 -> next;
//     curr2 = curr2 -> next;
//   }
//   return -1;
// }

// int getIntersection(Node *head1, Node *head2){
//   int c1 = getCount(head1);
//   int c2 = getCount(head2);
//   int d;

//   if(c1>c2){
//     d = c1-c2;
//     return _getIntersection(d,head1, head2);
//   }
//   else{
//     d = c2-c1;
//     return _getIntersection(d,head2, head1);
//   }
// }

// int main() 
// { 
//   /* 
//     Creation of two linked lists 

//     1st 3->6->9->15->30 
//     2nd 10->15->30 

//     15 is the intersection point 
//   */

//   Node* newNode; 

//   Node* head1 = new Node(10); 

//   Node* head2 = new Node(3); 

//   newNode = new Node(6); 
//   head2->next = newNode; 

//   newNode = new Node(9); 
//   head2->next->next = newNode; 

//   newNode = new Node(15); 
//   head1->next = newNode; 
//   head2->next->next->next = newNode; 

//   newNode = new Node(30); 
//   head1->next->next = newNode; 

//   head1->next->next->next = NULL; 

//   cout <<getIntersection(head1, head2); 
// } 


//// Pairwise swap nodes

// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }cout<<endl;
// }

// Node *pairwiseSwap(Node *head){
//   if(head==NULL && head->next==NULL)
//     return head;

//   Node *curr = head->next->next;
//   Node *prev = head;
//   head = head->next;
//   head->next=prev;

//   while(curr!=NULL && curr->next!=NULL){
//     prev->next = curr->next;
//     prev = curr;
//     Node *next = curr->next->next;
//     curr->next->next = curr;
//     curr = next;
//   }
//   prev->next = curr;
//   return head;
// }

// int main() 
// { 
//   Node *head=new Node(17);
//   head->next=new Node(15);
//   head->next->next=new Node(8);
//   head->next->next->next=new Node(12);
//   head->next->next->next->next=new Node(10);
//   head->next->next->next->next->next=new Node(5);
//   head->next->next->next->next->next->next=new Node(4);
//   printlist(head);
//   head=pairwiseSwap(head);
//   printlist(head);
//   return 0;
// } 


//// Clone a linked list with random number

// struct Node 
// { 
//     int data; 
//     Node *next,*random; 
//     Node(int x) 
//     { 
//         data = x; 
//         next = random = NULL; 
//     } 
// }; 

// void print(Node *start) 
// { 
//     Node *ptr = start; 
//     while (ptr) 
//     { 
//         cout << "Data = " << ptr->data << ", Random  = "<< ptr->random->data << endl; 
//         ptr = ptr->next; 
//     } 
// }

// Node* clone(Node *head) 
// { 
//     unordered_map<Node*,Node*> hm;
//     for(Node *curr=head;curr!=NULL;curr=curr->next)
//         hm[curr]=new Node(curr->data);

//     for(Node *curr=head;curr!=NULL;curr=curr->next){
//         Node *cloneCurr=hm[curr];
//         cloneCurr->next=hm[curr->next];
//         cloneCurr->random=hm[curr->random];
//     }
//     Node *head2=hm[head];

//     return head2;
// }

// int main() 
// { 
//   Node* head = new Node(10); 
//     head->next = new Node(5); 
//     head->next->next = new Node(20); 
//     head->next->next->next = new Node(15); 
//     head->next->next->next->next = new Node(20); 

//     head->random = head->next->next;
//     head->next->random=head->next->next->next;
//     head->next->next->random=head;
//     head->next->next->next->random=head->next->next;
//     head->next->next->next->next->random=head->next->next->next;

//     cout << "Original list : \n"; 
//     print(head); 

//     cout << "\nCloned list : \n"; 
//     Node *cloned_list = clone(head); 
//     print(cloned_list); 

//     return 0; 
// } 


///// LRU Cache Design

// class Node { 
//     public:
//     int key; 
//     int value; 
//     Node *pre; 
//     Node *next; 


//     Node(int k, int v) 
//     { 
//         key = k; 
//         value = v;
//         pre=NULL;next=NULL;
//     } 
// }; 

// class LRUCache {
//     public:
//     unordered_map<int, Node*> map; 
//     int capacity, count; 
//     Node *head, *tail; 


//     LRUCache(int c) 
//     { 
//         capacity = c; 
//         head = new Node(0, 0); 
//         tail = new Node(0, 0); 
//         head->next = tail; 
//         tail->pre = head; 
//         head->pre = NULL; 
//         tail->next = NULL; 
//         count = 0; 
//     } 

//     void deleteNode(Node *node) 
//     { 
//         node->pre->next = node->next; 
//         node->next->pre = node->pre; 
//     } 

//     void addToHead(Node *node) 
//     { 
//         node->next = head->next; 
//         node->next->pre = node; 
//         node->pre = head; 
//         head->next = node; 
//     } 

//     int get(int key) 
//     { 
//         if (map[key] != NULL) { 
//             Node *node = map[key]; 
//             int result = node->value; 
//             deleteNode(node); 
//             addToHead(node); 
//             cout<<"Got the value : " << 
//                 result << " for the key: " << key<<endl; 
//             return result; 
//         } 
//         cout<<"Did not get any value" <<
//                             " for the key: " << key<<endl; 
//         return -1; 
//     } 

//     void set(int key, int value) 
//     { 
//         cout<<"Going to set the (key, "<< 
//             "value) : (" << key << ", " << value << ")"<<endl; 
//         if (map[key] != NULL) { 
//             Node *node = map[key]; 
//             node->value = value; 
//             deleteNode(node); 
//             addToHead(node); 
//         } 
//         else { 
//             Node *node = new Node(key, value); 
//             map[key]= node; 
//             if (count < capacity) { 
//                 count++; 
//                 addToHead(node); 
//             } 
//             else { 
//                 map.erase(tail->pre->key); 
//                 deleteNode(tail->pre); 
//                 addToHead(node); 
//             } 
//         } 
//     } 
// }; 

// int main(){
//     { 

//         LRUCache cache(2); 

//         // it will store a key (1) with value 
//         // 10 in the cache. 
//         cache.set(1, 10); 

//         // it will store a key (2) with value 20 in the cache. 
//         cache.set(2, 20); 
//         cout<<"Value for the key: 1 is " << cache.get(1)<<endl; // returns 10 

//         // removing key 2 and store a key (3) with value 30 in the cache. 
//         cache.set(3, 30); 

//         cout<<"Value for the key: 2 is " << 
//                 cache.get(2)<<endl; // returns -1 (not found) 

//         // removing key 1 and store a key (4) with value 40 in the cache. 
//         cache.set(4, 40); 
//         cout<<"Value for the key: 1 is " << 
//             cache.get(1)<<endl; // returns -1 (not found) 
//         cout<<"Value for the key: 3 is " << 
//                         cache.get(3)<<endl; // returns 30 
//         cout<<"Value for the key: 4 is " << 
//                         cache.get(4)<<endl; // return 40 

//         return 0;
//     } 
// }


//// Merge two sorted Linked list


// struct Node{
//     int data;
//     Node* next;
//     Node(int x){
//         data=x;
//         next=NULL;
//     }
// };

// void printlist(Node *head){
//     Node *curr=head;
//     while(curr!=NULL){
//         cout<<curr->data<<" ";
//         curr=curr->next;
//     }cout<<endl;
// }

// Node *sortedMerge(Node *a, Node *b){
//   if(a==NULL)
//     return b;
//   if(b==NULL)
//     return a;

//   Node *head = NULL; Node *tail = NULL;
//   if(a->data <= b->data){
//     head = tail = a;
//     a = a-> next;
//   }
//   else{
//     head = tail = b;
//     b = b-> next;
//   }

//   while(a != NULL && b != NULL){
//     if(a->data <= b->data){
//       tail -> next = a;
//       tail = a;
//       a = a-> next;
//     }
//     else{
//       tail -> next = b;
//       tail = b;
//       b = b-> next;
//     }
//   }

//   if(a==NULL)
//     tail->next=b;
//   else
//     tail->next=a;

//   return head;
// }

// int main() 
// { 
//   Node *a=new Node(10);
//   a->next=new Node(20);
//   a->next->next=new Node(30);
//   Node *b=new Node(5);
//   b->next=new Node(35);
//   printlist(sortedMerge(a,b));
//   return 0;
// } 


//// given linkedlist is palindrome or not

// struct Node{
//     char data;
//     Node* next;
//     Node(char x){
//         data=x;
//         next=NULL;
//     }
// };

// Node *reverseList(Node *head){
//     if(head==NULL||head->next==NULL)return head;
//     Node *rest_head=reverseList(head->next);
//     Node *rest_tail=head->next;
//     rest_tail->next=head;
//     head->next=NULL;
//     return rest_head;
// }

// bool isPalindrome(Node *head){
//         if(head==NULL)return true;
//         Node *slow=head,*fast=head;
//         while(fast->next!=NULL&&fast->next->next!=NULL){
//             slow=slow->next;
//             fast=fast->next->next;
//         }
//         Node *rev=reverseList(slow->next);
//         Node *curr=head;
//         while(rev!=NULL){
//             if(rev->data!=curr->data)
//                 return false;
//             rev=rev->next;
//             curr=curr->next;
//         }
//         return true;
//     }


// int main() 
// { 
//   Node *head=new Node('g');
//   head->next=new Node('f');
//   head->next->next=new Node('f');
//   if(isPalindrome(head))
//       cout<<"Yes";
//   else
//       cout<<"No";
//   return 0;
// } 
