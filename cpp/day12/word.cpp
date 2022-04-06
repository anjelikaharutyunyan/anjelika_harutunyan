#include <iostream>
#include <fstream>
using namespace std;

string correct (string word) {
	ifstream  myfile;
	myfile.open("dictionary.txt");
	string word_correct;	
	int count = 0;
	
	while(!myfile.eof()) {
		count = 0;
		getline(myfile, word_correct);
	for(int i = 0; word[i] != '\0'; i++) {
		if(word[i] != word_correct[i]){
			count ++;
		}
	}
		if(count == 1) {
			break;
		}
	}
	
	myfile.close();
	if(count != 1) {
		return word;
	}

  return word_correct;
}
int main() {

ofstream correct_file;
correct_file.open("corrected.txt");
string str;
cout << " Input line: ";
getline(cin, str);
str += " ";
string word;
int i = 0;

while(str[i] != '\0') {
	word = " ";
for(;str[i] != ' '; i++){
	word += str[i];
	}
	i++;
	correct_file << " " << correct(word) << endl;
}
correct_file.close();

return 0;
}
