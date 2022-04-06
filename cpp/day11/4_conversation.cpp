#include <iostream>
#include <cstring>
using namespace std;

void converse(string word, int left, int right){
	if (left == right) {
		cout << word << endl;
	}
	else{
	for (int i = left; i <= right; i++){
		swap (word[left] , word[i]);
		converse( word, left + 1, right);
		swap (word[left], word[i]);
	}
	}

}
int main(){

string word;
cout << "Input: ";
cin >> word;
int n = word.size();
cout << "Output: ";
converse( word, 0 , n-1);

return 0;
}

