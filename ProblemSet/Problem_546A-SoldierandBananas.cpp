#include <iostream>
using namespace std;

int main(){
    int k, n, w, total = 0;

    cin >> k >> n >> w;

    for(int i=1; i <= w; i++){
        total += k*i;
    }
    //ternario?
    if(total - n < 1){
        cout << 0;
    }else{
        cout << total - n;
    }

    return 0;
}