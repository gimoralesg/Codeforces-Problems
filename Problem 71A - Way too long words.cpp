/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main(){
    
    int n;
    string str;
    int end;

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> str;
        end = str.length();
        if(str.length() > 10){
            cout << str[0] + to_string(str.length() - 2) + str[end-1] << endl;
        }else{
            cout << str << endl;
        }
    }

    

    return 0;
}
