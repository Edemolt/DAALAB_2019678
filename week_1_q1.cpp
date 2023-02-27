#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
   
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
   
    cout<<"Element to find -> ";
    int ele;
    cin >> ele;
   
    cout << "Linear search \n";
    for(auto &itr : v)
    {
        if(itr == ele)
        {
            cout<<"Found";
            return 0;
        }
    }
    cout<<"Not Found";
    return 0;
}