#include <bits/stdc++.h>
using namespace std;

void selectionsort(int n,int arr[]){
    //Selectionsort algorithm
    for (int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main() {
    int n;
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++) {
        cin>>arr[i];
    }
    selectionsort(n,arr);
    for (int i=0;i<n;i++) {
        cout<<arr[i]<<" ";
    }
}
