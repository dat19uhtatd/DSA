#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b){
    int tmp =a;
    a=b;
    b=tmp;
}

void selection_sort(int a[], int n){
    for(int i =0 ; i<n-1 ;i ++){
        int min = i;
        for(int j=i+1; j<n ; j++){
            if(a[min] > a[j]){
                min = j;
            }
        }
        swap(a[i], a[min]);
    }
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int &x :a){
        cin >> x;
    }
    selection_sort(a, n);
    for(int x : a){
        cout << x << ' ';
    }
}