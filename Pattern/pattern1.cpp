#include<bits/stdc++.h>
using namespace std;

void print1(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print2(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print3(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<j; 
        }
        cout<<endl;
    }
}

void print4(int n ){
    for(int i = 0 ; i < n ; i++){
        for(int j = 1 ; j <= i ; j++){
            cout<<i; 
        }
        cout<<endl;
    }
}

void print5(int n ){

    for(int i = 1 ; i <= n ; i++){
        for(int j = 0 ; j < n-i+1 ; j++){
            cout<<"*"; 
        }
        cout<<endl;
    }
}

void print6(int n ){

    for(int i = 0 ; i <= n ; i++){
        for(int j = 1 ; j < n-i+1 ; j++){
            cout<<j; 
        }
        cout<<endl;
    }
}

void print7(int n ){

    for(int i = 0 ; i < n ; i++){
        //space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" "; 
        }
        //star
        for(int j = 0 ; j < 2*i+1 ; j++){
            cout<<"*"; 
        }
         //space
         for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" "; 
        }
 
        cout<<endl;
    }
}

void print8(int n ){

    for(int i = 0 ; i < n ; i++){
        //space
        for(int j = 0 ; j < i ; j++){
            cout<< " "; 
        }
        //star
        for(int j = 0 ; j < 2*n - (2*i +1 ); j++){
            cout<< "*"; 
        }
         //space
         for(int j = 0 ; j < i ; j++){
            cout<< " "; 
        }
 
        cout<<endl;
    }

}

void print10(int n ){
    for(int i = 1 ; i <= 2*n-1 ; i++){
         // stars would be equal to the row no. uptill first half 
         int stars = i;
          
         // for the second half of the rotated triangle.
         if(i>n) stars = 2*n-i;
         
         // for printing the stars in each row.
         for(int j=1;j<=stars;j++){
             cout<<"*";
         }
        cout<<endl;
    }
}

void print11(int n){
    int start = 1;
 for(int i = 0; i< n ; i++){
    if(i %2 == 0) start = 1;
    else start = 0;
    for(int j = 0; j <= i ; j++){
        cout<< start;
        start = 1-start;
    }
    cout<<endl;
}
}

void print12(int n ){
    int space = 2*(n-1);
    for(int i = 1 ; i <=n  ; i++){

        //number
        for(int j = 1 ; j <= i ; j++){
            cout<<j; 
        }
        //spcaes
        for(int j = 1 ; j <= space  ; j++){
            cout<<" "; 
        }
        //numbers
        for(int j = i ; j >= 1 ; j--){
            cout<<j; 
        }
        cout<<endl;
        space -= 2;
    }
}

void print13(int n ){
    for(int i = 0 ; i < n ; i++){
        for( char ch = 'A' ; ch <= 'A'+ i; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print14(int n ){
    for(int i = 0 ; i < n ; i++){
        for( char ch = 'A' ; ch <= 'A'+ (n - i - 1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print15(int n ){
    for(int i = 0 ; i < n ; i++){
        char ch = 'A'+ i;
        for( int j = 0; j <= i ; j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

void print16(int n ){

    for(int i = 0 ; i < n ; i++){
        //space
        for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" "; 
        }

        //characters
        char ch = 'A';
        int breakpoint = (2*i+1)/2;
        for(int j = 1 ; j <= 2*i+1 ; j++){
            cout<<ch; 
            if(j<= breakpoint) ch++;
            else ch--;
        }

         //space
         for(int j = 0 ; j < n-i-1 ; j++){
            cout<<" "; 
        }
 
        cout<<endl;
    }
}

void print17(int n){
    for(int i = 0 ; i < n ; i++){
        for(char ch = 'E' - i ; ch <= 'E' ; ch++){
            cout<<ch;
        }
        cout<<endl;
    }
}

void print19(int N)
{
      // for the upper half of the pattern.
      
      // initial spaces.
      int iniS = 0;
      for(int i=0;i< N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=N-i;j++){
              cout<<"*";
          }
          
          // The spaces increase by 2 every time we hit a new row.
          iniS+=2;
          cout<<endl;
      }
      
      // for lower half of the pattern
      
      // initial spaces.
      iniS = 2*N -2;
      for(int i=1;i<=N;i++){
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          //for printing the spaces in the row.
          for(int j=0;j<iniS;j++){
              cout<<" ";
          }
          
          //for printing the stars in the row.
          for(int j=1;j<=i;j++){
              cout<<"*";
          }
          
          // The spaces decrease by 2 every time we hit a new row.
          iniS-=2;
          cout<<endl;
      }
      
}

void print20(int n)
{
      // initialising the spaces.
      int spaces = 2*n-2;
      
      // Outer loop for printing row.
      for(int i = 1;i<=2*n-1;i++){
          
          // stars for first half
          int stars = i;
          
          // stars for the second half.
          if(i>n) stars = 2*n - i;
          
          //for printing the stars
          for(int j=1;j<=stars;j++){
              cout<<"*";
          }
          
          //for printing the spaces
          for(int j = 1;j<=spaces;j++){
              cout<<" ";
          }
          
          //for printing the stars
          for(int j = 1;j<=stars;j++){
              cout<<"*";
          }
          cout<<endl;
          if(i<n) spaces -=2;
          else spaces +=2;
      }
      
}

void print21(int n)
{
     // outer loop for no. of rows.
     for(int i=0;i<n;i++){
         
         // inner loop for printing the stars at borders only.
         for(int j=0;j<n;j++){
             
             if(i==0 || j==0 || i==n-1 || j==n-1)
                cout<<"*";
                
             // if not border index, print space.
             else cout<<" ";
         }
          cout<<endl;
     }
      
}

void print22(int n)
{
     // Outer loop for no. of rows
     for(int i=0;i<2*n-1;i++){
         
         // inner loop for no. of columns.
         for(int j=0;j<2*n-1;j++){
             
             // Initialising the top, down, left and right indices of a cell.
             int top = i;
             int bottom = j;
             int right = (2*n - 2) - j;
             int left = (2*n - 2) - i;
             
             // Min of 4 directions and then we subtract from n
             // because previously we would get a pattern whose border
             // has 0's, but we want with border N's and then decreasing inside.
             //hello
             cout<<(n- min(min(top,bottom), min(left,right)))<<" ";
         }
         cout<<endl;
     }
      
}
int main(){
   int n;
   cout<<"Enter value of n";
   cin >>n;
   
   print22(n);
}