#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int sz;
    cin >>sz;
    for (int k = 1; k <= sz; k++)
    {
        int wid, hei, ans = 0;
        int a[100][100];
        cin >> hei >> wid;
        for(int i = 0; i < hei ; i++)
        {
            for(int j = 0; j< wid ; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < hei ; i++)
        {
            for(int j = 0; j< wid ; j++)
            {
                if(a[i][j] == 1)
                {
                    ans += 2;
                    while(a[i][j] == 1 && a[i][j + 1] == 1)
                    {
                        j++;
                    }
                }
            }
        }
        for(int i = 0; i < wid ; i++)
        {
            for(int j = 0; j< hei ; j++)
            {
                if(a[j][i] == 1)
                {
                    ans += 2;
                    while(a[j][i] == 1 && a[j+1][i] == 1)
                    {
                        j++;
                    }
                }
            }
        }
        cout << ans << endl;
        ans = 0;
    }
    return 0;
}

