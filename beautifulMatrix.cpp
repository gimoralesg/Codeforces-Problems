#include <iostream>
#include <string>

using namespace std;

int main(){
    int m=5,n=5,count=0;
    int tempM=0,tempN=0;
    
    int matrix[m][n];

    
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> matrix[i][j];
            if(matrix[i][j] == 1){
                tempM=i;
                tempN=j;
            }
        }
    }
    
    while((tempM != 2 || tempN != 2)){//comment
        
       if(tempM != 2 && tempM < 2){
           tempM++;
           count++;
       }
       if(tempM != 2 && tempM > 2){
           tempM--;
           count++;
       }
       if(tempN != 2 && tempN < 2){
           tempN++;
           count++;
       }
       if(tempN != 2 && tempN > 2){
           tempN--;
           count++;
       }
    }
    
    cout << count <<endl;
    
    
    return 0;
}