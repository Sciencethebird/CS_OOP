#include <iostream>

using namespace std;

int main(){
    int cs;
    long long a, b;
    cin >> cs;
    for(int i = 0; i< cs; i++){

        cin >> a >> b ;
        int  h, l;
        if(a > b){
            h = a;
            l = b;
        }else{
            h = b;
            l = a;
        }
        while(1){
            int temp = l;
            l = h % l;
            h = temp;
            if(l == 0){
                break;
            }
        }
        cout << h << endl;
    }
    return 0;
}
