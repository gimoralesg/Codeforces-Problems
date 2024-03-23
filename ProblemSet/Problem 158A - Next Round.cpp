/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n,k,count=0;
    cin >> n >> k;
    int scores[n];
    
    for(int i=0; i<n; i++){
        cin >> scores[i]; //add numbers to array
    }
    
    for(int i=0; i<n; i++){
        if(scores[i] >= scores[k-1] && scores[i] > 0){/*if the ith position is GRorEQ
            to the kth position and kth position is positive*/
            count++;
        }
    }
    cout << count << endl;
    return 0;
}
