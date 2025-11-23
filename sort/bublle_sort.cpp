#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int tmp =a;
    a=b;
    b=tmp;
}

void bublle_sort(int a[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j< n-i-1; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x :a){
        cin >> x;
    }
    bublle_sort(a, n);
    for(int x : a){
        cout << x << ' ';
    }
}