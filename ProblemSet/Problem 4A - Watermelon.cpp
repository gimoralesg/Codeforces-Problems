/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int w = 0;
    cin >> w;
    if(w % 2 == 0 && w > 2){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}
