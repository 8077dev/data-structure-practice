#include<iostream>
using namespace std;

 int printsubarraysum(int arr[], int n){

    int largest_sum = 0;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            int subarraysum = 0;
            for(int k=i; k<=j; k++){
                subarraysum += arr[k];
            }
            largest_sum = max(largest_sum, subarraysum); 
        }
        return largest_sum;
    }
}

int main(){
int arr[] = {1,2,3,4,5,6,7};
int n = sizeof(arr)/sizeof(int);
cout<<printsubarraysum(arr, n)<<endl;


return 0;
}