#include <iostream>
#include <list>
using namespace std;


class YouTubeChannel{
private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
public:
	YouTubeChannel (string name,string ownerName){
	Name = name;
	OwnerName = ownerName;
	SubscribersCount = 0;
	}
	void GetInfo(){

	cout << "Name : " << Name << endl;
	cout << "OwnerName : " << OwnerName << endl;
	cout << "Subsc count : " << SubscribersCount << endl;
	cout << "Videos : " << endl << endl;
	for(string videotitle : PublishedVideoTitles){
	cout << videotitle << endl;
	}
	}
	void Subscribe(){
	SubscribersCount++;
	}
	void Unsubscribe(){
	SubscribersCount--;
	}

	void PublishedVideo(string title){
	PublishedVideoTitles.push_back(title);
	
	}
};

int main(){

	YouTubeChannel ytChannel("Codebeauty", "Saldina");
/////	ytChannel.GetInfo();
	ytChannel.PublishedVideoTitles("C++ oop");
	ytChannel.PublishedVideoTitles( "cccc");
	ytChannel.GetInfo();
return 0;
}

