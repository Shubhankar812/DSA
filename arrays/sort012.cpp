#include <bits/stdc++.h>
using namespace std;

void sortArray(vector<int> &arr,int n){
    int low = 0, mid = 0, high = n-1;
    /*
    0 to low --> 0
    low to mid --> 1
    mid to high ---> 2
    */

   while(mid<=high){
    switch (arr[mid])
    {
    case '0':
    swap(arr[low++],arr[mid++]);
    break;

    case '1':
    mid++;
    break;

    case '2':
    swap(arr[high--],arr[mid]);
    break;
    
    }
   }
}
int main()
{
    int n = 6;
    vector<int> arr = {0, 2, 1, 2, 0, 1};
    cout << "Before sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    sortArray(arr, n);
    cout << "After sorting:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}