#include<iostream>
using namespace std;

void insertion_sort(int a[], int n){
    for(int i=0; i<=n-1; i++){
    int current= a[i];
    int previous= i-1;
    while(previous>=0 and a[previous]>current){
        a[previous + 1] = a[previous];
        previous = previous - 1;
    }
    a[previous + 1] = current;
    }
}

int main(){
    int arr[]= {1,3,4,7,5,6,8,0};
    int n = sizeof(arr)/sizeof(int);
    insertion_sort(arr, n);
    for(auto x : arr){
        cout<<x<<",";
    }
    return 0;
}