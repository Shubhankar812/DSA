#include <iostream>
using namespace std;

int missingNumber(int nums[],int n) {
     
        int sum=0;
        int total=n*(n+1)/2;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        return total-sum;
}

int main()
{
    int A[] = {9,6,4,2,3,5,7,0,1};
    int n = sizeof(A[0])/sizeof(A);
    cout<<missingNumber(A,n)<<endl;
}