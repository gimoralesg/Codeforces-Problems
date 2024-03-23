#include <iostream>
#include <string> 
#include <unordered_set>

using namespace std;

int main(){
//UNORDERED SET 
	unordered_set<char> distinct_set;
	string s;
	cin >> s;
	for(int i = 0; i < s.length(); i++){
		distinct_set.insert(s[i]);
	}

	if (distinct_set.size() % 2 == 0){
		cout << "CHAT WITH HER!" << endl;
	}else{
		cout << "IGNORE HIM!" << endl;
	}

	return 0;
}

//Otras soluciones
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    string str;
    cin >> str;
    unordered_set<char> M(str.begin(), str.end());
    cout << (M.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
}
*/

/*
#include <iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
int main(){
        string str;
        int count=0;
        cin>>str;
        int a=str.size();
        sort(str.begin(),str.end());
        for(int i=0;i<a;i++){
                  if(str[i]==str[i+1])
                    count++;
        }
       int dc=a-count;
        if(dc%2==0)
           cout<<"CHAT WITH HER!";
        else
           cout<<"IGNORE HIM!";
    return 0;
}
*/