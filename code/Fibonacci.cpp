#include <iostream>
using namespace std;
int main(){
	int ans[41] = {0};
	ans[0] = 0;
	ans[1] = 1;
	for (int i=2; i<=40; i++){
		ans[i] = ans[i-1] + ans[i-2];
	}
	int n;
	cin >> n;
	cout << ans[n];
}