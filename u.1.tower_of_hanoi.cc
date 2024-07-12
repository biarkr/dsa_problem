#include<iostream>
using namespace std;

void tower_of_hanoi(int n, char frompeg, char topeg, char auxpeg) {
	if(n == 1) {
		cout << "move " << frompeg <<" to " << topeg << endl;
		return;
	}
	tower_of_hanoi(n-1, frompeg, auxpeg, topeg);
	cout << "move " << frompeg << " to " << topeg << endl;
	tower_of_hanoi(n-1, auxpeg, topeg, frompeg);
}

int main() {
	int n=3;
	tower_of_hanoi(n, 'A', 'B', 'C');
	return 0;
}

