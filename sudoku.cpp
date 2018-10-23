#include<iostream>
#define n 9
using namespace std;

bool rowSafe(int grid[n][n], int row, int num){
    for(int i=0;i<n;i++){
        if(grid[row][i]==num)
            return false;
    }
    return true;
}

bool colSafe(int grid[n][n], int col, int num){
    for(int i=0;i<n;i++){
        if(grid[i][col]==num)
            return false;
    }
    return true;
}

bool boxSafe(int grid[n][n], int br, int bc, int num){
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(grid[br+i][bc+j]==num)
                return false;
        }
    }
    return true;
}

bool isSafe(int grid[n][n], int row, int col, int num){
    return boxSafe(grid,row-row%3,col-col%3,num) && rowSafe(grid,row,num) && colSafe(grid,col,num);
}

void printGrid(int grid[n][n])
{
    for (int row = 0; row < n; row++)
    {
       for (int col = 0; col < n; col++)
             cout<<grid[row][col]<<" ";
       cout<<endl;
    }
}

bool findUnassignedPosition(int grid[n][n], int &row, int &col){
    for(row=0;row<n;row++){
        for(col=0;col<n;col++){
            if(grid[row][col]==0)
                return true;
        }
    }
    return false;
}

bool SudokuSolver(int grid[n][n]){

    int row,col;

    if(!findUnassignedPosition(grid,row,col))
        return true;
    for(int num=1;num<=9;num++){
        if(isSafe(grid,row,col,num)){
            grid[row][col]=num;

            if(SudokuSolver(grid))
                return true;

            grid[row][col]=0;
        }
    }

    return false;


}


int main(){
    int grid[n][n] ={{0,0,6,7,0,5,0,0,9},
                      {2,7,0,0,4,0,0,5,3},
                      {0,0,5,2,0,1,7,0,0},
                      {0,2,8,0,7,0,0,4,5},
                      {9,0,7,0,2,0,8,0,6},
                      {1,0,4,6,0,3,0,2,0},
                      {0,6,0,0,1,0,4,0,8},
                      {0,4,0,3,0,8,0,9,0},
                      {0,0,2,4,0,7,6,0,1}};
//    for(int i=0;i<n;i++){
//        for(int j=0;j<n;j++){
//            cin>>grid[i][j];
//        }
//    }
    if (SudokuSolver(grid) == true)
          printGrid(grid);
    else
        cout<<"No solution";

return 0;
}
