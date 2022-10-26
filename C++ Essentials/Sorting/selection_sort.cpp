#include<iostream>
using namespace std;

void selection_sort(int a[], int n){
    for(int pos = 0; pos<=n-2; pos++){
        int current = a[pos];
        int min_position = pos;
        for(int j=pos; j<n;j++){
            if(a[j]<a[min_position]){
                min_position=j;
            }
        }
        swap(a[min_position], a[pos]);
    }
}

int main(){
    int arr[]={1,7,8,6,4,3,5};
    int n = sizeof(arr)/sizeof(int);
    selection_sort(arr, n);
    for(auto x: arr){
        cout<<x<<",";
    }
    return 0;
}