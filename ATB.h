#ifndef ATB
#define ATB

string GetStr(){
cout<<"\r\nPlease enter message\r\n>";
string s;
cin>>s;
return s;
}
int GetLen(string s){
    int l = 0;
    for(int i = 0;s[i]!='\0';i++){
        l++;
    }
    return l;
}
#endif
