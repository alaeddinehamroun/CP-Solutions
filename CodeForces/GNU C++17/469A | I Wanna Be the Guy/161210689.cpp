#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
 
 
    int n, p;
    std::vector<int> v;
    cin >> n;
    cin >> p;
    int num;
    for (int i = 0; i< p; i++){
     cin >> num;
     v.push_back(num);
 
    }
    cin >> p;
    for (int i = 0; i< p; i++){
     cin >> num;
     v.push_back(num);
      
    }
    sort( v.begin(), v.end() );
 v.erase( unique( v.begin(), v.end() ), v.end() );
 if ((int)v.size() == n)
  cout <<"I become the guy.";
 else
  cout << "Oh, my keyboard!";
 
    return 0;
 
}