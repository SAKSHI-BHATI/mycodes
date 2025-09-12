#include <iostream>
#include<vector>
using namespace std;
int difference_of_diagnol(vector<vector<int>> v){
    int a = v.size();
    int da=0;
    int db=0;
    for (int i=0;i<a;i++){
        da += v[i][i];
        db += v[i][a-1-i];

    }return abs(da-db);
}

int main(){
    int n;
    cout<<"enter the vctor size";
    cin>>n;
   vector<vector<int>> v(n, vector<int>(n));

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>v[i][j];
        }
    }
    cout<<"abslute value of difference is: "<<difference_of_diagnol(v);
 return 1;
}

