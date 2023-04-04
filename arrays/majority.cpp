#include <bits/stdc++.h>
using namespace std;

int majority(vector<int>v, int n){
    int element=0,count=0;
     
    // Finding a candidate
    for(int i=0;i<n;i++){
        if(count==0){
            count=1;
            v[i]=element;
        }
        else if (v[i]== element){
            count++;
        }
        else{
            count--;
        }
    }
  int cnt1=0;
   // verifying 
   for(int i=0;i<n;i++){
    if(v[i] == element){
        cnt1++;
    }
   }
   if(cnt1 > (n/2)){
    return element;
   }
   return -1;

}
int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};
    int ans = majority(arr,7);
    cout << "The majority element is: " << ans << endl;
    return 0;
}


/*
Moore's Voting algo.
1. Find a candidate 
2. Verify if the candidate is a maority element or not
*/