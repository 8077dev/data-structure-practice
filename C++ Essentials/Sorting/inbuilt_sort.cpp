#include<iostream>
#include<algorithm>
using namespace std;

bool compare(int a, int b){
    //cout<<"comparing"<<a<<" and "<<b<<endl;
    //return a > b;
    return a < b;
}

int main(){
    int arr[] = {1,3,5,7,4,16,28,3};
    int n = sizeof(arr)/sizeof(int);
    //sort(arr, arr+n, compare);
    reverse(arr, arr+n);
    for(int x: arr){
        cout<<x<<",";
    }
    return 0;
}