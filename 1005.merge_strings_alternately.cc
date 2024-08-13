#include<iostream>
using namespace std;

int mergeString(string word1, string word2) {
	string mstr;
	int n1=word1.size();
	int n2=word2.size();
	int i=0; int j=0;
	
	while(i<n1 && j<n2) {
		mstr.push_back(word1[i]);
		mstr.push_back(word2[j]);
		i++; j++;
	}
	while(i<n1) {
		mstr.push_back(word1[i]);
		i++;
	}
	while(j<n2) {
		mstr.push_back(word2[j]);
		j++;
	}
	int m=mstr.size();
	for(int k=0; k<m;k++) {
		cout << mstr[k];
	}
	cout << endl;
	return 0;
}

int main() {
	string word1="abc";
	string word2="pqr";

	mergeString(word1, word2);
	cout << endl;

	string word3="ab";
	string word4="pqrs";
	cout << " str1 : " << word3 << "   str2 : " << word4 << endl;
	mergeString(word3,word4);
	return 0;
}
