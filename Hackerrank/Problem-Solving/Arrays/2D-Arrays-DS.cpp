#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[6][6],ar;
    for(int arr_i = 0;arr_i < 6;arr_i++){
       for(int arr_j = 0;arr_j < 6;arr_j++){
          cin >> a[arr_i][arr_j];
       }
    }
    int max=-63;
    for( int i=0; i<4; i++){
        for( int j=0; j<4; j++){
            ar=a[i][j]+a[i][j+1]+a[i][j+2]+a[i+1][j+1]+a[i+2][j]+a[i+2][j+1]+a[i+2][j+2];
            if(ar>max)
                max=ar;
        }
    }
    cout<<max;
    return 0;
}
