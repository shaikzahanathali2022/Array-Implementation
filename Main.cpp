#include <iostream>
using namespace std;
int main()
{
    int sparseMatrix[4][5]={
        {0,0,3,0,4},{0,0,5,7,0},{0,0,0,0,0},{0,2,6,0,0}
    };    
    int s=0;
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            if(sparseMatrix[i][j]!=0)
                s++;
    int compMatrix[3][s];
    int x=0;
    for(int i=0; i<4; i++)
        for(int j=0; j<5; j++)
            if(sparseMatrix[i][j]!=0)
            {
                compMatrix[0][x] = i;
                compMatrix[1][x] = j;
                compMatrix[2][x] = sparseMatrix[i][j];
                x++;
            } 
    for (int i=0; i<3; i++)
    {
        for (int j=0; j<s; j++)
            cout <<" "<< compMatrix[i][j];
 
        cout <<"\n";
    }
    return 0;
}
