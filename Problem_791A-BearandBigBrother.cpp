#include <iostream>

using namespace std;

int main(){
	int limak_w =0, bob_w=0, counter=0;
    cin >> limak_w >> bob_w;
	
	while(limak_w <= bob_w){
		limak_w *= 3;
	    bob_w *= 2;
		counter ++;
	}
	
	cout << counter << endl;
       	return 0;
}
