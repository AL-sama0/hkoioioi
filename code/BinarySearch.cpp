#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int n, q;
	cin >> n >> q;
	
	int in;
	vector<int> nn;
	for (int i=0; i<n; i++) {
		cin >> in;
		nn.push_back(in);
	}
	vector<int> qq;
	for (int i=0; i<q; i++) {
		cin >> in;
		qq.push_back(in);
	}
	
	bool ans;
	for (int i=0; i<q; i++) {
		ans = binary_search(nn.begin(), nn.end(), qq[i]);
		if (ans == 1)	cout << "Yes" << endl;
		if (ans == 0)	cout << "No"  << endl;
	}
}
