#include<iostream>
using namespace std;

int main(){
    char route[1000];
    cin.getline(route,1000);
    int x=0;
    int y=0;
    for(int i=0; route[i]!='\0'; i++){
        switch(route[i]){
            case 'n': y++;
            break;
            case 's': y--;
            break;
            case 'e': x++;
            break;
            case 'w': x--;
            break;
        }
    }
    cout<<"Final x and y is"<<x<<","<<y<<".";
    if(x>=0 and y>0){
        while(y--){
            cout<<"n";
        }
        while(x--){
            cout<<"e";
        }
    }
    return 0;
}