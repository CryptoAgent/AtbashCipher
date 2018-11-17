#include <iostream>
#include <string>
using namespace std;
#include "ATB.h"

int main(){

string str = GetStr();
int len = GetLen(str);
char encr[len];
//Encryption
for(int i = 0;i<len;i++){
    char ch = str[i];
    ch-=97;
    encr[i]=25-(int)ch+97;
}
cout<<"\r\nYour encrypted message is: ";
for(int i = 0;i<len;i++){
    cout<<encr[i];
}
//Decryption
str = GetStr();
len = GetLen(str);
char decr[len];
for(int i = 0;i<len;i++){
    char ch = str[i];
    ch-=97;
    decr[i]=25-(int)ch+97;
}
cout<<"\r\nYour Decrypted message is: ";
for(int i = 0;i<len;i++){
    cout<<decr[i];
}
return 0;
}
