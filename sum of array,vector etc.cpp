#include <iostream>
#include <vector>
using namespace std;

int sum_of_array(){
    int n;
    cout<<"array part: enter the size of array:";
    cin>>n;
    int arr[n];
    int sums=0;//result must be the int
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
    return 1;
}
void sum_of_vector (){//can also take as long function then we have to return some long value also like return plusis
    int n;
    cout<<"vector part: enetr the size of verctor:";
    cin>>n;
    vector<long> v(n);
    long plusis=0;
    for(int i =0;i<n;i++){
        cin>>v[i];
        plusis +=v[i];
    }cout<<"vector = {";
    for (size_t i =0;i<v.size();i++){
        cout<<v[i];
        if (i!=v.size()-1){
            cout <<" ,";
            
        }
    }cout<<"}"<<endl;
    cout<<"sum is ="<<plusis<<endl;
}

int main(){
    sum_of_vector();
    sum_of_array();
    return 1;
}