#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> grid{
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    //transpose
    //for rows
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int temp=grid[i][j];
            grid[i][j]=grid[j][i];
            grid[j][i]=temp;
        }
    }

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<grid[i][j]<<" ";
        }cout<<"\n";
    }

    return 0;
}