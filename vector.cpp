#include <iostream>
using namespace std;

class Vector_Class{

    vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int pointa=0;
    int pointb=0;
    for (int i=0;i< a.size();i++){
        if (a[i]>b[i]){
            pointa++;
        }else if(b[i]>a[i]){
            pointb++;
        }
    }vector<int> v={pointa,pointb};
    return v;
    
    }

    void miniMaxSum(vector<int> arr) {
long total =arr[0];
    long min_is=arr[0];
    long max_is=arr[0];
   
    for (int i=1;i<arr.size();i++){
        total +=arr[i];
        if (arr[i]<min_is) min_is=arr[i];
        
        if(arr[i]>max_is )max_is=arr[i];
    }
    long max_sum=total -min_is;
    long min_sum=total -max_is;
    
    cout<<min_sum<<" "<<max_sum<<endl;

}
int birthdayCakeCandles(vector<int> candles) {
    long tallest=candles[0];
    int count =1;
    for(int i =1;i<candles.size();i++){
        if(tallest <candles[i]){
            tallest =candles[i];
            count =1;
        }else if (candles[i]==tallest) ++count;
    }return count;
}


};