#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> vi;

void subset(int idx, int arr[], vector<int> &temp, int end){
    if(idx>=end){
        vi.push_back(temp);
        return;
    }
    temp.push_back(arr[idx]);
    subset(idx+1, arr, temp, end);
    temp.pop_back();
    subset(idx+1, arr, temp, end);
}

int main(){
    int arr[] = {3,1,2};
    int n = 3;
    vector<int> ds;
    subset(0, arr, ds, n);

    for(int i=0; i<vi.size(); i++){
        for(int j=0; j<vi[i].size(); j++){
            cout << vi[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}