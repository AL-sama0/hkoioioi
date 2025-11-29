#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main(){
	int n;
	vector<int> factors;
	
	cin >> n;
	for (int i=1; i<=sqrt(n); i++) {
		if (n%i == 0) {
			factors.push_back(i);
			if (i != n/i) {
				factors.push_back(n/i);
			}
		}
	}
	
	sort(factors.begin(), factors.end());
	for (int f : factors){
		cout << f << "\n";
	}
}
