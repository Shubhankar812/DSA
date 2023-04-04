#include <bits/stdc++.h>
using namespace std;

vector<int> solve(vector<int> & arr, int n,int sum){

    sort(arr.begin(),arr.end());

    int start= 0, end = n-1;
    int m1,m2;

    vector<int> res;

    while(start<=end){
        if(arr[start]+arr[end] == sum){
            m1 = arr[start];
            m2 = arr[end];
        }
        else if(arr[start]+arr[end] < sum){
            start+=1;
        }
        else{
            end-=1;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i]==m1){
           res.push_back(i);
        }
        if(arr[i]==m2){
           res.push_back(i);
        }
        
    }
    return res;
}
int main(){
    int n = 5;
    vector<int> arr = {2, 6, 5, 8, 11};
    int target = 13;
    vector<int> ans = solve(arr,n,target);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}
