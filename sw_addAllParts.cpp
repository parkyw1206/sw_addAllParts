#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,-1,-1,4};
    int n = 5, sum;
    int answer = 0;
    
    for(int i = 1 ; i < (1 << n) ; i++){
        sum = 0;
        for(int j = 0 ; j < n ; j++)
        {
            //cout << i << "," << (1<<j) << "-->" << arr[j] << "" << endl;
            if(i & ( 1<<j )){
                cout << i << "," << (1<<j) << "-->" << arr[j] << "" << endl;
                sum += arr[j];
            }
        }
        cout << "=" << sum << endl;
        if(sum == 6) {
            answer = 1;
            break;
        }
    }
    if(answer == 1)
        cout << "True" << endl;
    else
        cout << "False" << endl;
    
    return 0;
}