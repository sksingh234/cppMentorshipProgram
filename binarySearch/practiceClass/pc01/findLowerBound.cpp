#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = 9;
    int x = 12;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>x)
        {
            cout<<arr[i - 1];
            break;
        }
    }
    
}