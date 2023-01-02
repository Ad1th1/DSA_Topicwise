
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[] = {2,4,3,5,1};
    int n=sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n/2;i++){
        int temp = a[i];
        a[i] = a[n-i-1];
        a[n-i-1] = temp;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
