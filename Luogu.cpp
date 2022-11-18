#include <iostream>
using namespace std;
int main(){
	long long a,b,c;
	cin >> a >> b >> c;
	cout << max(c,max(a,b)) <<endl;
	return 0;
}
