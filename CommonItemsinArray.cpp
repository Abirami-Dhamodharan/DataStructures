#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
  int arr1[7] = {9,8,1,2,3,4,4};
  int arr2[5] = {3,4,5};

  int n1 = sizeof(arr1)/sizeof(arr1[0]); 
  int n2 = sizeof(arr2)/sizeof(arr2[0]);

  if (n1== 0 || n2==0)
      cout << "False";

  unordered_set<int> test(arr1,arr1+n1);

  unordered_set<int> :: iterator itr;
  for (itr = test.begin(); itr != test.end(); itr++)
        cout << *itr << " ";

  cout << endl ;

  for (int i:arr2)
  {
     if(test.find(i)!=test.end())
        cout << i << endl;
  }
}