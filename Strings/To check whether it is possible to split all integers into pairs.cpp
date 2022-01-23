#include <bits/stdc++.h>
using namespace std;
void checkPairs(int arr[], int n){
    int count = 0;
   if(n%2!=0){
   cout<<"False";
   }
   else{
   for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
         if(arr[i]==arr[j] && arr[i]>0 && arr[j]>0){
             count++;
            arr[i]=arr[j]=-1;
         }
      }
   }
   if(n/count==0)
   cout<<"True";
   else
   cout<<"False";
}
}
int main(){
   int arr[] = { 1,2,2,3 };
   int n = sizeof(arr) / sizeof(arr[0]);
   checkPairs(arr, n);
}
