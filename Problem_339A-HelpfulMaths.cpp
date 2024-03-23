#include <iostream>

using namespace std;

int main()
{
    int uno=0,dos=0,tres=0,i=0,mas=0;
    string str;
    cin >> str;
    
    for(int i=0; i<str.length(); i++){
        if(str[i] == '1'){uno++;}
        if(str[i] == '2'){dos++;}
        if(str[i] == '3'){tres++;}
        if(str[i] == '+'){mas++;}
    }
    int length = str.length() - mas;
    
    while(i<length){
        if(uno > 0){
            cout << 1;
            uno--;
        }else if(dos > 0){
            cout << 2;
            dos--;
        }else{
            cout << 3;
            tres--;
        }
        if(mas > 0){
            cout << '+';
            mas--;
        }
        i++;
    }
    return 0;
}

//Mejora de solucion
#include <bits/stdc++.h>
using namespace std;
int a[105],n,i=2;
main(){
    while(cin>>a[n++]);
    sort(a,a+n);
    cout<<a[1];
    for(;i<n;i++){
        cout<<'+'<<a[i];
    }
}
 
