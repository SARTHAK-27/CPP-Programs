//Maximum size square sub-matrix with all 1s
//Given a binary matrix, find out the maximum size square sub-matrix with all 1s

#include<iostream>
#include<algorithm>
#define bool int  
#define R 6  
#define C 5
using namespace std;

void printMaxSubSquare(bool M[R][C]){
    int i,j;
    int S[R][C];
    int max_of_s, max_i, max_j ;

    for(i=0; i<R; i++){
        S[i][0] = M[i][0];
    }

    for(j=0; j<C; j++){
        S[0][j] = M[0][j];
    }

    for(i=1; i<R; i++){
        for(j=1; j<C; j++){
            if(M[i][j] == 1){
                S[i][j] = min(S[i-1][j], min(S[i][j-1], S[i-1][j-1])) + 1;
            }
            else{
                S[i][j] = 0;
            }
        }
    }

    max_of_s = S[0][0];
    max_i = 0, max_j = 0;
    for(i=1; i<R; i++){
        for(j=1; j<C; j++){
            if(S[i][j] > max_of_s){
                max_of_s = S[i][j];
                max_i = i;
                max_j = j;
            }
        }
    }

    cout<<"Maximum size sub-matrix is: \n";  
    for(i = max_i; i > max_i - max_of_s; i--)  
    {  
        for(j = max_j; j > max_j - max_of_s; j--)  
        {  
            cout << M[i][j] << " ";  
        }  
        cout << "\n";  
    }  
}


int main()  
{  
    bool M[R][C] = {{0, 1, 1, 0, 1},  
                    {1, 1, 0, 1, 0},  
                    {0, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 0},  
                    {1, 1, 1, 1, 1},  
                    {0, 0, 0, 0, 0}};  
                      
    printMaxSubSquare(M);  
}  