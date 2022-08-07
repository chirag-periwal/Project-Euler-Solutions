#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int arr[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int checkl(int x)
{
    if(x % 4 == 0 && x % 100 != 0 || x % 400 == 0)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int day = 1;
    int sunday = 0;
    for(int year = 1901; year <= 2000; year++)
    {
        for(int month = 1; month <= 12; month++)
        {
            int total_days = 0;
            int year_diff = year - 1900;
            for(int i = 0; i <= year_diff; i++)
            {
                int y = 1900 + i;
                if(checkl(y) == 1)
                {
                    arr[2] = 29;
                }
                for(int j = 1; j < (y != year ? 13 : month); j++)
                {
                    total_days = total_days + arr[j];
                }
            }
                total_days = total_days + day;
                // cout<<total_days<<" for month "<<month<<endl;
                if(total_days%7==0){
                	sunday++;
                }
        }
    }
    cout << sunday;
    return 0;
}
// ANS=171