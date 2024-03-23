#include <iostream>
#include <string.h>

using namespace std;

string tolowerstr(string str);

int main(){
    string str1, str2;
    int count=0;
    
    cin >> str1 >> str2;
    str1 = tolowerstr(str1);
    str2 = tolowerstr(str2);
    for(int i=0; i<str1.length(); i++){
        if(str1[i] < str2[i]){
            cout << -1 << endl;
            count = -1;
            break;
        }else if(str1[i] > str2[i]){
            cout << 1 << endl;
            count = 1;
            break;
        }
    }
    if(count == 0){cout << 0 << endl;}
    return 0;
}

string tolowerstr(string str){
    string s = "";
    for(int i=0; i<str.length(); i++){
        s += tolower(str[i]);
    }   
    return s;
}

/* otra solucion
    char s[103],s1[103];
    int l,i;
    cin>>s>>s1;
    l=strlen(s);
    for( i = 0 ; i < l ; i ++ ) s[i]=tolower(s[i]),s1[i]=tolower(s1[i]);
    if (strcmp(s,s1)==0) cout<<0;
    else if(strcmp(s,s1)<1) cout<<-1;
    else  cout<<1;
*/
