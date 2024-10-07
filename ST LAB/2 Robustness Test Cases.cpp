#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, a[3], x, c, maxLimits[3], min[3], e[3][6];
    n = 3;
    cout << "Enter the minimum and maximum limits of the variables:\n";
    for (int y = 0; y < n; y++)
    {
        cin >> min[y] >> maxLimits[y];
    }
    for (x = 0; x < n; x++)
    {
        a[x] = (min[x] + maxLimits[x]) / 2;
    }
    for (int a1 = 0; a1 < n; a1++)
    {
        e[a1][0] = min[a1];
        e[a1][1] = min[a1] + 1;
        e[a1][2] = min[a1] - 1;
        e[a1][3] = maxLimits[a1] - 1;
        e[a1][4] = maxLimits[a1];
        e[a1][5] = maxLimits[a1]+1;

    }
    cout << "        " <<"V1"<< "      " <<"V2"<< "      " << "V3" <<"      " <<"Expected Value"<<endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            int ma = 0;
            for (int l = 0; l <= i; l++)
            {
                if (l != 0)
                {
                    cout << "\t" << a[l];
                    ma = max(ma, a[l]);
                }
            }
            cout << "\t" << e[i][j];
            ma = max(ma,e[i][j]);
            for (int k = 0; k < n - (i + 1); k++)
            {
                cout << "\t" << a[k + i + 1];
                ma = max(ma, a[k + i + 1]);
            }
            cout << "\t" << ma;
            cout << "\n";
        }
    }
    cout << "        " << a[0] << "      " << a[1] << "      " << a[2] <<"      " << a[2];
}