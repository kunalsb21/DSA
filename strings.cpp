#include <iostream>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;

// Palindrome check

//Naive

// bool isPal(string &str){
//   string rev = str;
//   reverse(rev.begin(),rev.end());
//   return(rev==str);
// }

//Efficient

// bool isPal(string &str){
//   int begin = 0;
//   int end = str.length()-1;
//   while(begin<end){
//     if(str[begin]!=str[end])
//       return false;
//     begin++;
//     end--;
//   }
//   return true;
// }

//// Check if a String is Subsequence of Other

////  Iterative

// bool isSubSeq(string &s1, string &s2, int n, int m ){

//   int j=0;
//   for(int i=0; i<n && j<m; i++){
//     if(s1[i]==s2[j])
//       j++;
//   }
//   return (j==m);
// }

////Recursive


//// Check for Anagram

// Naive

// bool areAnagram(string &s1, string &s2 ){
//   if(s1.length() != s2.length())
//     return false;
//   sort(s1.begin(), s1.end());
//   sort(s2.begin(), s2.end());
//   return (s1==s2);
// }

// Efficient

// const int CHAR=256;
// bool areAnagram(string &s1, string &s2) 
// { 
//   if(s1.length()!= s2.length())
//     return false;

//   int count[CHAR] = {0};
//   for(int i=0; i<s1.length();i++){
//     count[(int)s1[i]]++;
//     count[(int)s2[i]]--;
//   }

//   for(int i=0; i<CHAR; i++)
//     if(count[i]!=0)
//       return false;

//   return true;
  
  
// } 


// Leftmost Repeating character

// Naive

// int leftmost(string &s){
  
//   for(int i=0; i<s.length(); i++){
//     for(int j=i+1; j<s.length(); j++){
//       if(s[i]==s[j])
//         return i;
        
//     }
//   }
//   return -1;
// }

// Better approach

// const int CHAR = 256;
// int leftmost(string &s){
//   int count[CHAR] = {0};
//   for(int i=0; i<s.length();i++)
//     count[(int)s[i]]++;

//   for(int i=0; i<s.length(); i++)
//     if(count[(int)s[i]]>1)
//       return i;

//   return -1;
// }


// Efficient - 1

// const int CHAR = 256;
// int leftmost(string &s){
//   int fIndex[CHAR];
//   fill(fIndex, fIndex+CHAR, -1);
//   int res = INT_MAX;
//   for(int i=0; i<s.length(); i++){
//     int fi = fIndex[(int)s[i]];
//     if(fi == -1)
//       fIndex[(int)s[i]] = i;
//     else
//       res = min(res,fi);
//   }
//   return (res==INT_MAX)?-1:res;
// }


// Efficient - 2

// const int CHAR = 256;
// int leftmost(string &s){
//   bool visited[CHAR];
//   fill(visited, visited+CHAR, false);

//   int res = -1;
//   for(int i=s.length(); i>=0; i--){
//     if(visited[(int)s[i]])
//       res = i;
//     else
//       visited[(int)s[i]] = true;
//   }
//   return res;
// }

// Leftmost Nonrepeating character in string 

// Naive

// int nonRep(string &s){
//   for(int i=0; i<s.length(); i++){
//     bool flag = false;
//     for(int j=0; j<s.length(); j++){
//       if(i!=j && s[i]==s[j]){
//         flag = true;
//         break;
//       }
//     }
//     if(flag == false)
//       return i;
//   }
//   return -1;
// }


// Better solution (Two traversal)

// const int CHAR = 256;
// int nonRep(string &s){
//   int count[CHAR]={0};
//   for(int i=0;i<s.length();i++)
//     count[(int)s[i]]++;
//   for(int i=0; i<s.length(); i++)
//     if(count[(int)s[i]]==1)
//       return i;
//   return -1;
// }

// Efficient (One traversal)

// const int CHAR = 256;
// int nonRep(string &s){
//   int fI[CHAR];
//   fill(fI, fI+CHAR, -1);
//   for(int i=0; i<s.length(); i++){
//     if(fI[(int)s[i]] == -1)
//       fI[(int)s[i]] = i;
//     else
//       fI[(int)s[i]] = -2;
//   }

//   int res = INT_MAX;
//   for(int i=0; i<CHAR; i++)
//     if(fI[i]>=0)
//       res = min(res, fI[i]);
//   return (res == INT_MAX)?-1:res;
// }

// Reverse words in a string

// void reverse(char s[], int low, int high){
//   while(low<=high){
//     swap(s[low],s[high]);
//     low++;
//     high--;
//   }
// }

//  void reverseWords(char s[], int n){
//    int start = 0;
//    for(int end = 0; end<n; end++){
//      if(s[end]==' '){
//        reverse(s,start,end-1);
//        start = end+1;
//      }
//    }
//    reverse(s,start,n-1);
//    reverse(s,0,n-1);
//  }

 // **** Pattern Searching **** //

//// Naive Method///

// void patSearch(string &txt, string &pat){
//   int m = pat.length(), n = txt.length();
//   for(int i=0; i<=n-m; i++){
//     int j;
//     for(j=0; j<m; j++)
//       if(pat[j]!=txt[i+j])
//         break;
//     if(j==m)
//       cout << i << " ";
//   }
// }

//// Improved Naive Method for distinct characters of pattern////

// void patSearch(string &txt, string &pat){
//   int m = pat.length(), n = txt.length();
//   for(int i=0; i<=n-m; i++){
//     int j;
//     for(j=0; j<m; j++)
//       if(pat[j]!=txt[i+j])
//         break;
//     if(j==m)
//       cout << i << " ";
//     if(j==0)
//       i++;
//     else
//       i = i+j;
//   }
// }

//// Rabin Karp Algorithm ////

// #define d 256
// const int q=101;
// void RBSearch(string &pat,string &txt,int M, int N){

//     //Compute (d^(M-1))%q
//     int h=1;
//     for(int i=1;i<=M-1;i++)
//         h=(h*d)%q;

//     //Compute p and to
//     int p=0,t=0;
//     for(int i=0;i<M;i++){
//         p=(p*d+pat[i])%q;
//         t=(t*d+txt[i])%q;
//     }

//     for(int i=0;i<=(N-M);i++){
//        //Check for hit
//        if(p==t){
//            bool flag=true;
//            for(int j=0;j<M;j++)
//                 if(txt[i+j]!=pat[j]){flag=false;break;}
//             if(flag==true)cout<<i<<" ";
//        }
//        //Compute ti+1 using ti
//        if(i<N-M){
//            t=((d*(t-txt[i]*h))+txt[i+M])%q;
//         if(t<0)t=t+q;
//        }
//     }

// }


//// *** Constructing longest proper prefix suffix array *** ////

// int longPropPreSuff(string &str, int n){
//   for(int len= n-1; len>0; len--){
//     bool flag = true;
//     for(int i=0; i<len; i++)
//       if(str[i] != str[n-len+i])
//         flag = false;
//     if(flag == true)
//       return len;
//   }
//   return 0;
// }

// void fillLPS(string &str, int lps[]){
//   for(int i=0; i<str.length(); i++)
//     lps[i] = longPropPreSuff(str, i+1);
// }


// Efficient

// void fillLPS(string &str, int lps[]){
//   int n = str.length(), len = 0;
//   lps[0] = 0;
//   int i=1;
//   while(i<n){
//     if(str[i] == str[len]){
//       len++;
//       lps[i] = len;
//       i++;
//     }
//     else{
//       if(len==0){
//         lps[i]=0;
//         i++;
//       }
//       else{
//         len = lps[len-1];
//       }
//     }
//   }
// }

// //// KMP Algorithm

// void KMP(string &txt, string &pat){
//   int N = txt.length();
//   int M = pat.length();
//   int lps[M];
//   fillLPS(pat,lps);
//   int i=0, j=0;
//   while(i<N){
//     if(pat[j]==txt[i]){
//       i++;
//       j++;
//     }
//     if(j==M){
//       cout << i-j<<" ";
//       j = lps[j-1];
//     }
//     else if(i<N && pat[j] != txt[i]){
//       if(j==0)
//         i++;
//       else
//         j = lps[j-1];
//     }
//   }
// }


//// Check for Rotation

// bool areRotations(string &s1, string &s2){
//   if(s1.length() != s2.length())
//     return false;
//   return ((s1+s1).find(s2) != string::npos);
// }

//// Anagram Search

// Naive

// const int CHAR = 256;
// bool areAnagram(string &pat, string &txt, int i){
//   int count[CHAR] = {0};
//   for(int j=0; j<pat.length(); j++){
//     count[(int)pat[j]]++;
//     count[(int)txt[i+j]]--;
//   }
//   for(int j=0; j<CHAR; j++)
//     if(count[j]!=0)
//       return false;
//   return true;
// }

//  bool isPresent(string &txt, string &pat){
//    int n = txt.length();
//    int m = pat.length();
//    for(int i=0; i<=n-m; i++){
//      if(areAnagram(pat,txt,i))
//        return true;
//    }
//    return false;
//  }


 // Efficient
// const int CHAR = 256;

// bool areSame(int CT[],int CP[]){
//     for(int i=0;i<CHAR;i++){
//         if(CT[i]!=CP[i])return false;
//     }
//     return true;
// }

//  bool isPresent(string &txt, string &pat){
//    int CT[CHAR] = {0}, CP[CHAR] = {0};
//    for(int i=0; i<pat.length(); i++){
//      CT[(int)txt[i]]++;
//      CP[(int)pat[i]]++;
//    }

//    for(int i=pat.length(); i<txt.length(); i++){
//      if(areSame(CT,CP))return true;
//          CT[(int)txt[i]]++;
//          CT[(int)txt[i-pat.length()]]--;
//      }
//      return false;
   
//  }


//// Lexicographic Rank

// const int CHAR = 256;
// int fact(int n) 
// { 
//     return (n <= 1) ? 1 : n * fact(n - 1); 
// } 
// int lexRank(string &str){
//   int res = 1;
//   int n = str.length();
//   int mul = fact(n);
//   int count[CHAR] = {0};
//   for(int i=0; i<n; i++)
//     count[(int)str[i]]++;
//   for(int i=1; i<CHAR; i++)
//     count[i] += count[i-1];
//   for(int i=0; i<n-1; i++){
//     mul = mul/(n-i);
//     res = res + count[(int)str[i] - 1] * mul;
//     for(int j = str[i]; j<CHAR; j++)
//       count[j]--;
//   }
//   return res;
  
// }


//// Longest substring with distinct characters

// Naive

// bool areDistinct(string &str, int i, int j){
//   vector<bool> visited(256);
//   for(int k = i; k<=j; k++){
//     if(visited[(int)str[k]] == true)
//       return false;
//     visited[(int)str[k]] = true;
//   }
//   return true;
// }

// int longestDistinct(string &str){
//   int n = str.length(), res=0;
//   for(int i=0; i<n; i++)
//     for(int j=i; j<n; j++)
//       if(areDistinct(str,i,j))
//         res = max(res,j-i+1);
//   return res;
// }

//// Better solution O(n^2)

// int longestDistinct(string &str){
//   int n = str.size(), res=0;
//   for(int i=0; i<n; i++){
//     vector<bool> visited(256);
//     for(int j=i; j<n;j++){
//       if(visited[(int)str[j]]==true)
//         break;
//       else{
//         res = max(res,j-i+1);
//         visited[(int)str[j]] = true;
//       }
//     }
//   }
//   return res;
// }

//// Efficient O(n)





















int main() {
  // char x = 'a';
  // cout << (int)x;

  // ** Print frequencies of character (int sorted order) in a string of lower case alphabets. 

  // string str = "geeksforgeeks";
  // int count[26] = {0};
  // for(int i=0; i<str.length(); i++)
  //   count[str[i]-'a']++;
  // for(int i=0; i<26; i++)
  //   if(count[i]>0)
  //     cout << (char)(i+'a')<<" "<< count[i]<<endl;

  // ** C-Style strings ** //
  
  // char str[] = "gfg";
  // cout << str;
  // return 0;

  // char str[] = "gfg";
  // cout << sizeof(str);

  // char str[] = {'g','f','g', '\0'};   // We must put '\0' if we want to use character array as a string
  // cout << str;
  

  // ** C++ Strings 

  // string str = "geeksforgeeks";
  // cout << str.length() << " ";
  // str = str + "xyz";
  // cout << str << " ";
  // cout << str.substr(1,3)<<" ";
  // cout << str.find("eek")<<" ";
  // return 0;

  // string s1 = "abc";
  // string s2 = "bcd";
  // if(s1==s2)
  //   cout << "same";
  // else if(s1<s2)
  //   cout << "Greater";
  // else 
  //   cout << "Smaller";

  // Reading strings from console

  // string str;
  // cout << "Enter the name ";
  // //cin>>str; // When cin sees a space it stops reading the character
  // //We dont use cin for this purpose, we use getline()

  // getline(cin,str);
  // cout <<"\nYour name is "<<str;

  // *** Iterating through a string

  // string str = "geeksforgeeks";
  // for(int i=0; i<str.length(); i++)
  //   cout << str[i];
  // cout << endl;
  // for(char x:str)
  //   cout << x;
  
  // ** Palindrome check ** //
  // i/p: str = "ABCDCBA"
  // o/p: Yes;

  // string str = "ABCDCBA";
  // cout << isPal(str);

  // string s1 = "ABCDEF", s2 = "ACE";
  // int n  = s1.length(), m = s2.length();
  // cout << isSubSeq(s1, s2, n, m);

  
  // string s1 = "listen", s2 = "silent";
  // cout << areAnagram(s1, s2);

  // string s = "awbbcc";
  // cout << leftmost(s);

  // string s = "geeksforgeeks";
  // cout << nonRep(s);


  // string txt = "geeksforgeeks", pat = "eks";
  // patSearch(txt, pat);

  // string txt = "GEEKS FOR GEEKS";string pat="EEKS";
  // cout<<"All index numbers where pattern found:"<<" ";
  // RBSearch(pat,txt,4,15);

  // string txt = "abacabad";int lps[txt.length()];
  // fillLPS(txt,lps);
  // for(int i=0;i<txt.length();i++){
  //     cout<<lps[i]<<" ";
  // }

  // string txt = "GEEKS FOR GEEKS";string pat="EEKS";
  // cout<<"All index numbers where pattern found:"<<" ";
  // KMP(txt,pat);

  // string s1 = "ABCD", s2 = "CDAB";
  // cout << areRotations(s1,s2);

  // string txt = "GEEKSFORGEEKS";
  // string pat="FROG";
  // cout<< isPresent(txt, pat);

  // string s = "STRING";
  // cout << lexRank(s);

  string s = "abcdabc";
  cout << longestDistinct(s);
  
  
  return 0;
  
} 