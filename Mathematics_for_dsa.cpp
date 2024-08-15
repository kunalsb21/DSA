#include <iostream>
#include <limits.h>
#include <vector>
#include<math.h>

using namespace std;
// bool isPrime(int n){
  // for(int i=2; i<n; i++){
  //   if((n%i)==0){
  //     return 1;
  //   }
  // }
  // return 0;
// }

// int countDigits(int n){
//   int cnt = 0;
//   while(n>0){
//     n = n/10;
//     cnt++;
//   }
//   return cnt;
// }



// bool isPal(int n)
// {
//   int rev = 0;

//   int temp = n;
//   while(temp != 0)
//   {
//     int ld = temp % 10;

//     rev = rev * 10 + ld;

//     temp = temp / 10;
//   }	

//   return rev==n;
// }

// int fact(int n){
//   int res=1;
//   for(int i=2; i<=n; i++){
//     res = res*i;
//   }
//   return res;
// }

//recursive solution
// int fact(int n){
//   if(n==0)
//     return 1;
//   return n*fact(n-1);
// }

//training zeros in a factorial
// int countZeros(int n){
//   int fact = 1;
//   for(int i=2; i<=n; i++){
//     fact = fact*i;
//   }
//   int cnt = 0;
//   while(fact%10==0){
//     cnt++;
//     fact = fact/10;
//   }
//   return cnt;
// }

//***GCD***

// int gcd(int a, int b){
//   int res=min(a,b);
//   while(res>0){
//     if(a%res==0 && b%res==0){
//       break;
//     }
//     res--;
//   }
//   return res;
// }

//***Eucledian Algo for GCD**
// int gcd(int a, int b){
//   while(a!=b){
//     if(a>b)
//       a=a-b;
//     else
//       b=b-a;
//   }
//   return a;
// }

//***Optimize Eucledian ***//

// int gcd(int a, int b){
  
//     if(b==0)
//       return a;
//     else
//       return gcd(b,a%b);
  
// }

//***LCM of two nos***//

// int LCM(int a, int b){
//   int res=max(a,b);
//   while(res>0){
//     if(res%a==0&&res%b==0)
//       return res;
//     res++;
    
//   }
//   return res;
// }

//***Efficient Solution for LCM***//

// int LCM(int a, int b){
//   return (a*b)/gcd(a,b);
// }

//**Is prime or not**//

// bool isPrime(int n){
//   if(n==1)
//     return false;
//   for(int i=2; i<n;i++){
//     if((n%i)==0)
//       return false;
//   }
//   return true;
// }

//***Efficient solution for prime***//

// bool isPrime(int n){
//   if(n==1)
//     return false;
//   for(int i=2; i*i<=n; i++){
//     if((n%i)==0)
//       return false;
//   }
//   return true;
// }

//**More Efficient **//

// bool isPrime(int n){
//   if(n==1)
//     return false;
//   if((n==2)||(n==3))
//     return true;
//   if(n%2==0||n%3==0)
//     return false;
//   for(int i=5; i*i<=n; i=i+6){
//     if(n%i==0||n%(i+2)==0)
//       return false;
//   }
//   return true;
// }

//*** Prime Factors of a number ***//

// void primeFactors(int n){
//   for(int i=2; i<n; i++){
//     if(isPrime(i)){
//       int  x=i;
//       while((n%x)==0){
//         cout<< i << " ";
//         x=x*i;
//       }
//     }
//   }
// }

//**Efficient solution for prime factors**//

// void primeFactors(int n){
//   if(n<=1)
//     cout<<false;
//   for(int i=2; i*i<=n; i++){
//     while(n%i==0){
//       cout<<i<<" ";
//       n=n/i;
//     }
//   }
//   if(n>1)
//     cout<<n;
// }

//*** Further Optimization for Prime factors ***//

/*
void primeFactors(int n){
  
  if(n<=1)
    cout<<false;

  while(n%2==0){
    cout<<2<<" ";
    n=n/2;
  }

  while(n%3==0){
    cout<<3<<" ";
    n=n/3;
  }

  for(int i=5; i*i<=n; i=i+6){
    while(n%i==0){
      cout<<i<<" ";
      n=n/i;
    }

    while(n%(i+2)==0){
      cout<<(i+2)<<" ";
      n=n/(i+2);
    }

  }
  if(n>3)
    cout<<n<<" ";
}
*/

//*** Print All divisors of a number ***//

/*
void allDivisors(int n){
  for(int i=1; i<=n; i++){
    if(n%i==0){
      cout<<i<<" ";
    }
  }
}
*/

//optimized 

// void allDivisors(int n){
//   int i;
//   for(int i=1; i*i<n; i++){
//     if(n%i==0){
//       cout<<i<<" ";
//     }
//   }

//   for(; i>=1; i--){
//     if(n%i==0){
//       cout<<n/i<<" ";
//     }
//   }
// }

// void allDivisors(int n)
// {
//   int i;
//   for (i = 1; i * i < n; i++) {
//     if (n % i == 0)
//       cout<<i<<" ";
//   }
//   if (i - (n / i) == 1) {
//     i--;
//   }
//   for (; i >= 1; i--) {
//     if (n % i == 0)
//       cout<<n / i<<" ";
//   }
// }

//*** Print all Prime nos upto n ***//

/*
void printPrimes(int n){
  for(int i=2; i<=n; i++){
    if(isPrime(i))
      cout<< i<< " ";
  }
}
*/

//*** Sieve of Eratosthenes - for printing prime nos ***//

/*

void sieve(int n){
  vector<bool> isPrime(n+1,true);

  for(int i=2; i*i<=n; i++){
    if(isPrime[i]){
      for(int j=2*i; j<=n; j=j+i)
        isPrime[j]=false;
    }
  }
  for(int i=2; i<=n; i++){
    if(isPrime[i])
      cout<<i<<" ";
  }
}

*/


//*** Optimized Seive ***//

/*
void sieve(int n){
  
  vector<bool> isPrime(n+1,true);
  
  for(int i=2; i*i<=n; i++){
    if(isPrime[i]){
      for(int j=i*i; j<=n; j=j+i)
        isPrime[j]=false;
    }
  }
  
  for(int i=2; i<=n; i++){
    if(isPrime[i])
      cout<<i<< " ";
    
  }
}

*/

//*** Shorter Implementation of Sieve ***//

/*

void sieve(int n){
  vector<bool> isPrime(n+1, true);

  for(int i=2;i<=n; i++){
    if(isPrime[i]){
      cout<< i <<" ";
      for(int j=i*i; j<=n; j=j+i)
        isPrime[j]=false;
    }
  }
}

*/

//** Compute Power **//

/*
int power(int x, int n){
  int res=1;
  for(int i=0; i<n; i++)
    res = res*x;
  return res;
}
*/

// Optimized

// int power(int x, int n){
//   if(n==0)
//     return 1;

//   int temp = power(x,n/2);
//   temp = temp*temp;
//   if(n%2==0)
//     return temp;
//   else
//     return temp*x;
// }


//Iterative power//

/*
  
int power(int x, int n){
  int res = 1 ;
  while(n>0){
    if(n%2!=0)
      res = res*x;
    x=x*x;
    n=n/2;
  }
  return res;
}

*/
//*** Find roots of a quadratic equation ***//


// vector<int> quadraticRoots(int a, int b, int c){
//   vector<int> roots;
//   int root1=0, root2=0;
//   int D = (pow(b,2) - 4*a*c);

//   if(D<0){
//     roots.push_back(-1);
//   }
//   else{
//     root1 = floor((-b+sqrt(D))/(2*a));
//     root2 = floor((-b-sqrt(D))/(2*a));

//     roots.push_back(max(root1,root2));
//     roots.push_back(min(root1,root2));
//   }
//   return roots;
// }

//** Modular Multiplicative Inverse ***//

// int modInverse(int A, int M){
//   A = A%M;

//   for(int X=1; X<M; X++)
//     if((A*X)%M == 1)
//       return X;
//   return -1;
    
// }

int main() {

  // int number = 3553;

  //  cout << (bool)isPal(number);
  //  cout << fact(4);
  //  cout << fact(5);
  //  cout << countZeros(10);
  //  cout << gcd(10,15);
  //  cout << LCM(4,6);
  //  cout << isPrime(16);
  //  primeFactors(450);
  //  allDivisors(100);
  //  sieve(10);
  //  cout << power(9,3);
  //  quadraticRoots(1, -2, 1);
    //cout <<  modInverse(3, 11);
    
    return 0;
  
  
}