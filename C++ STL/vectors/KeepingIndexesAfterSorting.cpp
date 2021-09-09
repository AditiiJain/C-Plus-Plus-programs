// Keeping indexes after sorting
// I/P: arr[] = {20,40,30,10}
// O/P: elements   index
//      10         3
//      20         0
//      30         2
//      40         1

#include <bits/stdc++.h>
using namespace std;

void sortIndexes(int arr[],int n){

    vector<pair<int,int>> v;
    for(int i=0;i<n;i++){ //for vector
         v.push_back({arr[i],i});
    }
    sort(v.begin(),v.end());
    for(auto i:v){
        cout<<i.first<<" "<<i.second<<endl;
    }
}

int main()
{

    int arr[] = {20, 40, 30, 10};
    int n = 4;
    sortIndexes(arr, n);

    return 0;
}
