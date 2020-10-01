#include<iostream>
#include<string>

using namespace std;

int max_sum_array(int a[], int n){
    int sum=INT8_MIN,best=INT8_MIN;
    for(int i=0;i<n;i++){
        sum = max(sum+a[i], a[i]);
        best = max(sum,best);
    }
    return best;
}

int main(){
    int n;
    cout<<"Enter the size of Array ";
    cin>> n;
    int a[n];
    string str ="";
    for(int i=0;i<n;i++){
        cout<<"Enter a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<max_sum_array(a,n);
    return 0;
}