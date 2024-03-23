#include <iostream>
#include <string>

using namespace std;

void mayus(string str);
void lower(string str);

int main()
{
    string s;
    int counterUpper = 0, counterLower = 0, strLength = 0;
    
    cin >> s;
    
    strLength = s.length();
    for(int i=0; i<strLength; i++){
        if(isupper(s[i])){
            counterUpper++;
        }
        if(islower(s[i])){
            counterLower++;
        }
    }
    
    if(counterUpper > counterLower){
        mayus(s);
    }else{
        lower(s);
    }
    return 0;
}


void mayus(string str){
    char c;
    for (int i = 0; i < str.length(); i++){
        c = toupper(str[i]); 
        putchar(c); //mas easy con putchar
    }
}

void lower(string str){
    char c;
    for (int i = 0; i < str.length(); i++){
        c = tolower(str[i]); 
        putchar(c); //mas easy con putchar
    }
}
// intentar con islower y isUpper 