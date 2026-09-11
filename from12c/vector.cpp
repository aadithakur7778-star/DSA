#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> list={24,21,11,35,10,22};
    list.push_back(29);
    list.insert(list.begin()+4,69);
    cout<<list[4];

    list[7]=96;
    list.erase(find(list.begin(),list.end(),100));
    sort(list.begin(),list.end());
    int key;cin>>key;
    bool found=(find(list.begin(),list.end(),key)!= list.end);

}