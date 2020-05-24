#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{  int a = 10;
   string s = "cao";
   vector<vector<int>> dp(10,vector<int>(5,0));
   dp[3][3] = 100;
   vector<int> aaa;
   for(auto i=0;i<10;++i){
       aaa.push_back(i*100);
   }


   vector<int>::iterator i = aaa.begin();
   vector<int>::iterator j = aaa.begin();
   advance(i,5);
   iter_swap(i,j);
    for (auto k = aaa.begin(); k != aaa.end(); ++k)
        cout << *k << endl;

    system("pause");
    return 0;
}
