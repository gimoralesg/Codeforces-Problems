#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n, counter = 0;
    string s;
    
    cin >> n >> s;
    
    for(int i=0; i<s.length(); i++){
        if(s[i] == s[i+1]){
            counter += 1;
        }
    }
    cout << counter;

    return 0;
}
