#include <iostream>
#include <fstream>

using namespace std;

int main(){
	ifstream file ("count.in");
	int n, x;
	file >> n >> x;
	
	int ans = 0;
	for (int i=1; i<=n; i++) {
		int num = i;
		while (num != 0) {
			if (num%10 == x) {
				ans++;
			}
			num /= 10;
		}
	}
	
	ofstream fout ("count.out");
	fout << ans;
	
	file.close();
	return 0;
}