#include <iostream>
using namespace std;

int main()
{
    int arr[5][2] = { {1,5},{3,7},{4,1},{8,3},{5,5} };


    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 2; j++) {

            cout << " " << arr[i][j] << endl;
        }cout << endl;
    }

}