#include <iostream>
using namespace std;

bool isfound(int matrix[][4], int target, int i, int j)
{

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (matrix[i][j] == target){
                return 1;
            }
        }
    }
    return 0;
}

int main(){

    int matrix[3][4];
    cout << " enter your element" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }


int target;
    cout << " enter searching element" << endl;

    
cin>> target;
    

    if(isfound(matrix, target, 3, 4))
    {
        cout << " found your element:-"<< target;
    }
    else
    {
        cout << " Not found";
    }
    return 0;
}