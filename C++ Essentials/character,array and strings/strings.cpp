#include<iostream>
#include<cstring>
using namespace std;
int main(){
char a[100] = "abcdefgh";
char b[100] = "qwerty";
cout<<strlen(a)<<endl;
cout<<strcmp(a, b)<<endl;
//cout<<strcpy(b, a)<<endl;
cout<<strcat(a, b)<<endl;
}