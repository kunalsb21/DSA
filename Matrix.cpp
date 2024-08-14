#include <iostream>
using namespace std;

// *** Print matrix in snake pattern *** //

// const int R = 4, C = 4;
// void printSnake(int mat[R][C]){
//   for(int i=0; i<R; i++)
//     if(i%2==0)
//       for(int j=0; j<C; j++)
//         cout << mat[i][j] << " ";
//     else
//       for(int j=C-1; j>=0; j--)
//         cout << mat[i][j]<<" ";

// }

// *** Print Boundary elements

// const int R = 4, C = 4;
// void bElements(int mat[R][C]){

//   if(R==1)
//     for(int i=0; i<C; i++)
//       cout<<mat[0][i]<<" ";

//   else if(C==1)
//     for(int i=0; i<R; i++)
//       cout<<mat[i][0]<<" ";
    
//   else{
//     for(int i=0; i<C; i++)
//       cout << mat[0][i]<<" ";
//     for(int i=1; i<R; i++)
//       cout << mat[i][C-1]<<" ";
//     for(int i=C-2; i>=0; i--)
//       cout << mat[R-1][i]<<" ";
//     for(int i= R-2; i>=1; i--)
//       cout << mat[i][0]<<" ";
//   }
  
// }

// *** Transpose of matrix *** //

// const int R = 4, C = 4;
// void transpose(int mat[R][C]){
//   int temp[R][C];
//   for(int i=0;i<R;i++)
//     for(int j=0; j<C; j++)
//       temp[i][j] = mat[j][i];

//   for(int i=0;i<R;i++)
//     for(int j=0; j<C; j++)
//       mat[i][j] = temp[i][j];
// }

// Efficient 

// const int R=4, C=4;
// void transpose(int mat[R][C]){
//   for(int i=0; i<R; i++)
//     for(int j=i+1; j<C; j++)
//       swap(mat[i][j], mat[j][i]);
// }


// *** Rotate matrix by 90 deg *** //

// Naive

// const int R=4, C=4;
// void rotateBy90(int mat[R][C]){
//   int temp[R][C];
//   for(int i=0; i<R; i++)
//     for(int j=0;j<C;j++)
//       temp[R-j-1][i]=mat[i][j];

//   for(int i=0; i<R; i++)
//     for(int j=0;j<C;j++)
//       mat[i][j]=temp[i][j];
// }

// Efficient

// const int n = 4;
// void rotateBy90(int mat[n][n]){

//   // Transpose
//   for(int i=0; i<n; i++)
//     for(int j=i+1; j<n; j++)
//       swap(mat[i][j],mat[j][i]);

//   // Reverse the transpose matrix
//   for(int i=0; i<n; i++){
//     int low=0,high=n-1;
//     while(low<high){
//       swap(mat[low][i],mat[high][i]);
//       low++;
//       high--;
//     }
//   }
  
// }

// *** Spiral Traversal of a matrix *** ///

// const int n = 4;
// void printSpiral(int mat[n][n]){
//   int top = 0, left = 0, bottom = n-1, right= n-1;
//   while(top<= bottom && left<=right){
//     for(int i=left; i<=right; i++)
//       cout<<mat[top][i]<<" ";
//     top++;
//     for(int i=top; i<=bottom; i++)
//       cout << mat[i][right] <<" ";
//     right--;
//     if(top<bottom){
//       for(int i=right; i>=left; i--)
//         cout<<mat[bottom][i]<<" ";
//       bottom--;
//     if(left<=right)
//       for(int i=bottom; i>=top; i--)
//         cout << mat[i][left]<<" ";
//       left++;
      
//     }
//   }
// }


// *** Search in a row wise and column wise sorted matrix *** //

// Naive

// const int R = 4, C=4;
// void searchMatrix(int mat[R][C], int x){
//   for(int i=0; i<R; i++)
//     for(int j=0; j<C; j++)
//       if(mat[i][j]==x)
//         cout << "Found at M" << i <<"" << j << endl;
// }

// Efficient

// const int R = 4, C=4;
// void searchMatrix(int mat[R][C], int x){
//   int i=0, j=C-1;
//   while(i<R && j>=0){
//     if(mat[i][j]==x){
//         cout << "Found at M" << i <<"" << j << endl;
//       return;
//     }
//     else if(mat[i][j]>x)
//       j--;
//     else
//       i++;
//   }
// }


// *** Median of a row wise sorted matrix *** //

const int MAX = 100;
int matMed(int mat[][MAX], int r, int c){
  int min = mat[0][0], max = mat[0][c-1];
  for(int i=1; i<r; i++){
    if(mat[i][0]<min)
      min = mat[i][0];
    if(mat[i][c-1]>max)
      max = mat[i][c-1];
  }

  int medPos = (r*c+1)/2;
  while(min<max){
    int mid = (min+max)/2;
    int midPos = 0;
    for(int i=0; i<r; i++)
      midPos +=upper_bound(mat[i], mat[i]+c, mid) - mat[i];

    if(midPos<medPos)
      min=mid+1;
    else
      max=mid;
  }
  return min;  
}















int main() {
  // int arr[3][2]={{10,20}, {30,40}, {50,60}};
  // for(int i=0; i<3; i++)
  //   for(int j=0; j<2; j++)
  //     cout << arr[i][j] <<" ";

  // int m=3,n=2;
  // int arr[m][n];
  // for(int i=0; i<m; i++)
  //   for(int j=0; j<n; j++)
  //     arr[i][j]=i+j;

  // for(int i=0; i<m; i++)
  //   for(int j=0; j<n; j++)
  //     cout << arr[i][j] <<" ";

  // *** Print matrix in snake pattern *** //

   int mat[R][R] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
  // printSnake(mat);
  // bElements(mat);
  // transpose(mat);
  // for(int i=0; i<R; i++)
  //   for(int j=0; j<C; j++)
  //     cout << mat[i][j] <<" ";
  
  // rotateBy90(mat); 
  // for(int i=0; i<n; i++)
  //   for(int j=0; j<n; j++)
  //     cout << mat[i][j] <<" ";


  //printSpiral(mat);

  // searchMatrix(mat,10);
  
}