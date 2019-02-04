#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    long a;
    int i = 0, data[50], ans[50];
    int cnt = 0, cntz = 1;

    cin >>a;
    while(a!= 0)
    {
        while( a > 0 )
        {
            data[i] = a % 2;
            a /= 2;
            i++;
        }
        for(int j = i - 1  ;  j>=0 ; j--)
        {
            ans[i - j - 1] = data[j];
        }
        for(int j = 0  ;  j<i ; j++)
        {

            if(ans[j] == 1 && ans[j+1] == 1){
                cnt++;
            }
        }

        for(int j = i - 1  ;  j>=0 ; j--)
        {
            if(ans[i-1] != 0){
                cntz = 0;
            }
            if(ans[j] == 0 && ans[j-1] == 0){
                cntz++;
            }else{
                break;
            }
        }


        cout << cnt << " " << cntz << endl;
        cnt = 0;
        cntz = 1;
        i = 0;
        cin >> a;
    }
    return 0;
}
