#include <iostream>
#include <set>
using namespace std;

int main()

{
    multiset <int> ms;
    int n; cin >> n;
    int k; cin >> k;
    int a[n];
    for(auto &x :a){
        cin >> x;
    }
    for(int i = 0; i < k; i++){
        ms.insert(a[i]);
    }
    for(int i = k; i < n; i++){
        cout << *ms.rbegin() << " ";
        ms.erase(ms.find(a[i-k]));
        ms.insert(a[i]);
    }
    cout << *ms.rbegin();
    return 0;
}