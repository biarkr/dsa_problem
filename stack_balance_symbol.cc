#include <iostream>
#include <stack>

using namespace std;

bool balanceSymbole(string s) {
	stack <char> stk;

	for(int i = 0; i < s.size(); i++) {
		if(s[i] == '(' || s[i] == '[' || s[i] == '{') {
			stk.push(s[i]);
		} else if(s[i] == ')' || s[i] == ']' || s[i] == '}') {
			if(!stk.empty() ||  (stk.top() == '(' && s[i] == ')' || stk.top() == '[' && s[i] == ']' || stk.top() == '{' && s[i] == '}')) {
				stk.pop();
			}
		}
	}
	if(!stk.empty()) {
		return 0;
	} else {
		return 1;
	}
}

int main() {
	string s = "(A+B)+(C-D)";
	string ss = "{V+(A+R)}";
	cout << balanceSymbole(s) << " " << endl;
	cout << balanceSymbole(ss) << " " << endl;

	return 0;
}

		
