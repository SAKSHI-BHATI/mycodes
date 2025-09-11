#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int sums=0;
    for (int i=0;i<n;i++){
        cin>>arr[i];
        sums = sums+arr[i];
    }
    cout<<"arr = "<<"{";
    for(int i=0;i<n;i++){
        if (i==n-1){
            cout<<arr[i];
            break;
        }
        cout<<arr[i]<<" ,";
    }
    cout<< "}"<<endl;
    cout<<"sum is "<<sums<<endl;
}