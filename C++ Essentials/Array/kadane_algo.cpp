#include<iostream>
using namespace std;

int arraysum(int arr[], int n){
    int cs = 0;
    int largestsum = 0;
    for(int i=0; i<n; i++){
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        largestsum = max(largestsum, cs);

    }
    return largestsum;
}

int main(){
    int arr[]= {1,2,-3,4,5,-2,7};
    int n = sizeof(arr)/sizeof(int);
    cout<< arraysum(arr,n) <<endl;
    return 0;
}