/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,solution=0,cont,problem;
    
    
    cin >> n;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<3; j++){
            cin >> problem;
            if(problem == 1){
                cont++;
            }
        }
        if(cont >= 2){
            solution++;
        }
        cont = 0;
    }
    
    cout << solution <<endl;
    
    return 0;
}
