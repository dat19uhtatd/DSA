#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int partition(int a[], int l , int r){
    int pavot = a[l];
    int i= l-1, j=r+1;
    while(1){
        do{
            ++i;
        }while(a[i]< pavot);
        do{
            --j;
        }while(a[j] > pavot);
        if(i < j){
            swap(a[i], a[j]);
        }
        else return j;
    }
}

void quick_sort(int a[], int l , int r){
    if(l >= r) return;
    int p = partition(a, l , r);
    quick_sort(a, l , p);
    quick_sort(a, p+1, r);
}

int main(){
    int n; cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    quick_sort(a, 0 , n-1);
    for(int x : a){
        cout << x << " ";
    }
}
