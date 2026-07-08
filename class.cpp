#include<bits/stdc++.h>
using namespace std;

void secondlargest(int arr[], int n){
    int largest=arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
    int secondlarge=INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]<largest && arr[i]>=secondlarge){
            secondlarge=arr[i];
        }
    }
    cout<<secondlarge<<endl;
}

void missingnum(int arr[], int n){
    int cnt=1;
    for(int i=0; i<n; i++){
        if(arr[i]!=cnt){
            cout<<cnt;
            break;
        }
        else{
            cnt++;
        }
    }
}

void allzerosend(int arr[], int n){
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    int x=temp.size();
    for(int i=0; i<x; i++){
        arr[i]=temp[i];
    }
    for(int i=x; i<n; i++){
        arr[i]=0;
    }

}
int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    allzerosend(arr,n);
}