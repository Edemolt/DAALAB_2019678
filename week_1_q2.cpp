#include <bits/stdc++.h>
using namespace std;


int main()
{
    // printf("Hello World");
    int n;
    cin >> n;
    vector<int> v(n);
   
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
   
    cout<<"Element to find -> ";
    int ele;
    cin >> ele;   
    cout<<"Binary Search\n";
    int low = 0;
    int high = n;
   
    while(low <= high){
        int mid = (low + high)/2;
        if(v[mid] == ele){
            cout<<"Found";
            return 0;
        }
        else if(v[mid] > ele)
            low = mid;
        else
            high = mid-1;
    }
   
    cout<<"Not found";
   
   

    return 0;
}