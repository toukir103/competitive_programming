#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3};
    vector<int> v2 = {10, 20, 30};

    // Swapping contents of vec1 and vec2
    v1.swap(v2);

  	cout << "v1: ";
    for (int i : v1)
      	cout << i << " ";
  
    cout << endl << "v2: ";
    for (int i : v2)
      cout << i << " ";

    return 0;
}