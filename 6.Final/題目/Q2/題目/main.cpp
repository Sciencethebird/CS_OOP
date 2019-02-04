#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include "ZipCode.h"

using namespace std;

int main()
{
    ZipCode zc1;
    cout<<zc1<<endl;             //???
    ZipCode zc2(zc1);
    zc1.extend("AB");
    zc2.extend(98);
    cout<<zc1<<endl<<zc2<<endl;  //???-AB     ???-98

    ZipCode zc3(123);
    zc3.extend("CD");
    cout<<zc3<<endl;    //123-CD
    ZipCode zc4(zc3);
    cout<<zc4<<endl;  //123-CD

    ZipCode zc5("END");
    cout<<zc5<<endl;  //END
    return 0;
}
