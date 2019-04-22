#include <bits/stdc++.h>
using namespace std;

int hourglassSum(vector<vector<int>> arr) {
    vector<int> sums(16,0);
    for(int k=0;k<4;++k) {
            for(int i=0;i<3;++i)
                for(int j=k; j<k+3; ++j) {
                    if(i==0 || i==2) {
                        sums[k]+=arr[i][j];
                        cout << "\n arr["<<i<<"]["<<j<<"] = " << arr[i][j] <<" added to sums["<<k<<"]. ";
                    }
                    else if (j==k+1)
                    {
                        sums[k]+=arr[1][k+1];
                        cout << "\n Middle arr["<<i<<"]["<<j<<"] = " << arr[i][j] <<" added to sums["<<k<<"]. ";
                    }
           }      
           cout << "\n Sums["<<k<<"] = "<<sums[k];
        }

    for(int k=4; k < 8; ++k) {
          for (int i = 1; i < 4; ++i)
            for (int j = k-4; j < k-1; ++j) {
              if (i == 1 || i == 3) 
              {
                sums[k] += arr[i][j];
                cout << "\n arr["<<i<<"]["<<j<<"] = " << arr[i][j] <<" added to sums["<<k<<"]. ";
            }

              else if (j==k-3)
              {
                sums[k] += arr[2][k-3];
                cout << "\n Middle arr["<<i<<"]["<<j<<"] = " << arr[i][j] <<" added to sums["<<k<<"]. ";
            }
            }
        cout << "\n Sums["<<k<<"] = "<<sums[k];
        }

    for(int k = 8; k<12; ++k) {
            for(int i=2;i<5;++i)
                for(int j=k-8; j<k-5; ++j) {
                    if(i==2 || i==4)
                        sums[k]+=arr[i][j];
                    else if (j==k-7)
                        sums[k]+=arr[3][k-7];
           }      
        cout << "\n Sums["<<k<<"] = "<<sums[k];
        }

    for (int k=12; k < 16; ++k) {
          for (int i = 3; i < 6; ++i)
            for (int j = k-12; j < k-9; ++j) {
              if (i == 3 || i == 5)
                sums[k] += arr[i][j];
              else if (j==k-11)
                sums[k] += arr[4][k-11];
            }
         cout << "\n Sums["<<k<<"] = "<<sums[k];
        }
        cout <<"\n ------------ \n Max = ";

    return *(max_element(sums.begin(), sums.end()));
}

int main()
{

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    cout << result << "\n";


    return 0;
}
