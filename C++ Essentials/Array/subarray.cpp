#include<iostream>
using namespace std;

void printsubarray(int arr[], int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<"("<<i<<" ,"<<j<<") ,";
        }
        cout<<endl;
    }
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr)/sizeof(int);
    printsubarray(arr,n);

    return 0;
}
