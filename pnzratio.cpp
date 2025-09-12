#include <iostream>
#include <vector>
using namespace std;
void pnz_ratio(vector<int> v){
    int p,n,z;
    p=n=z=0;
    for (int i=0;i<v.size();i++){
        if(v[i]>0) p+=1;
        else if (v[i]<0) n+=1;
        else z+=1;
    }
    cout<<(double)p/v.size()<<"\n"<<(double)n/v.size()<<"\n"<<(double)z/v.size()<<endl;
}
int main(){
    vector<int> v={1,2,3,4,-1,-1,-1,0,0};
    pnz_ratio(v);
    return 1;
    
}