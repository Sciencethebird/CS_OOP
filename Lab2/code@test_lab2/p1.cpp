#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int sz;
    long long num1, num2, bn, dn;
    cin >> sz;
    for (int k = 1; k <= sz; k++)
    {
      //cout << sz << endl;
        cin >> num1 >> num2;
        //cout << num1 << num2;
        if(num1 > num2)
        {
            bn = num1;
            dn = num2;
        }
        else
        {
            dn = num1;
            bn = num2;
        }
        while(bn % dn != 0)
        {
            long long temp = dn;
            dn = bn % dn;
            bn = temp;
        }
        cout << dn << endl;
    }
    return 0;
}
