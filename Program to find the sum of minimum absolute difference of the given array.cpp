#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int sum=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    for(int i=0;i<n-1;i++)
    sum+=abs(arr[i]-arr[i+1]);
    cout<<sum;
}


// using vector
/*int minDiff(vector<int> arr)
{
    int sum=0;
     sort(arr.begin(), arr.end()); 
      for (int i = 0; i < arr.size(); i++){
      sum+=abs(arr[i]-arr[i+1]);
      }
      return sum;
      
}*/
