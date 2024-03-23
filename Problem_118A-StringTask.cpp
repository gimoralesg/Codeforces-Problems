#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string s = "", new_s = "";
    cin >> s; 

    /* for(int i = 0; i < s.length(); ++i){          =(
        if(s[i] != 'A' && s[i] != 'a' && s[i] != 'E' && s[i] != 'e' && s[i] != 'I' && s[i] != 'i' && s[i] != 'O' && s[i] != 'o' && s[i] != 'U' && s[i] != 'u' && s[i] != 'Y' && s[i] != 'y'){
            new_s[i] = s[i];
            new_s[i] = tolower(new_s[i]);
            cout << "." << new_s[i];
        }
    } */
    
    for(int i = 0; i < s.length(); i++){            /* =) */
        switch(s[i]){
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
        case 'Y':
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            break;
        
        default:
            s[i] = tolower(s[i]);
            cout << "." << s[i];
            break;
        }
    }
    
    return 0;
}
