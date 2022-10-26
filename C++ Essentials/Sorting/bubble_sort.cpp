#include<bits/stdc++.h>
using namespace std;

void bubblesort(int a[], int length ){
    if(length==1){
        return;
    }

for(int j=0;j<length;j++){
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
}

bubblesort(a,length-1);
}  


void bubblesort2(int a[],int j,int length){
    if(length==1){
        return;
    }

    if(j==length-1){
        return bubblesort2(a,0,length-1);
    }
    if(a[j]>a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubblesort2(a,j+1,length);
}

int main(){
    int a[]={1,25,4,6,76,89,80,91,45};
    int size= sizeof(a)/sizeof(int);

    cout<<"before: "<<endl;
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
        cout<<endl;

        bubblesort2(a,0,size);

        cout<<"After: "<<endl;
        for(int i=0; i<size;i++){
            cout<<a[i]<<" ,";
        }
        cout<<endl;

        return 0;
    }
