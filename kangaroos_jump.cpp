#include <iostream>
using namespace std;
const char * kangaroo(int x1, int v1, int x2, int v2) {
   int  p1=x1;
   int p2=x2;
   while((v1>v2 && p2>=p1)||(v2>v1 && p1>=p2)){
    if(p1==p2) return "YES";
    p1=p1+v1;
    p2=p2+v2;
   }return "NO";
}

int main(){
    int x1,x2,v1,v2;
    cout<<"Enetr the position of kangaroo 1 and jump lenght: ";
    cin>>x1>>v1;
    cout<<"Enetr the position of kangaroo 2 and jump length: ";
    cin>>x2>>v2;
    cout <<"will they meet with same number of  jump : "<< kangaroo(x1, v1, x2, v2) << endl;
    return 1;
}