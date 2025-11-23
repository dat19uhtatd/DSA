#include <bits/stdc++.h>
using namespace std;

bool binary_search(int a[], int n, int x){
    int l =0, r=n-1;
    while(l <= r){
        int m=(l+r)/2;
        if(a[m]==x){
            return true;
        }
        else if(a[m]> x){
            r=m-1;
        }
        else{
            l=m+1;
        }
    }
    return false;
}

int main(){
    int n; cin >> n;
    int x; cin >> x;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    if(binary_search(a, n, x)){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
}