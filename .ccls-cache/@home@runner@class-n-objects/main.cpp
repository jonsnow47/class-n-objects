#include <iostream>
using namespace std;
#include <list>
#include <string>

class ytChannel{
public:
string name;
string ownerName;
int subCount;
list<string> publishedVids;

//  Constructor method simplifies it further:- 
// YoutubeChannel(string name, string ownerName){
//     Name = name;
//     Ownername = ownerName;
// }     

};

int main() {
// //using constructor method now
  
//   YoutubeChannel ytchannel1("Coding is fun", "Saldina");
//    cout<< "Name :"<< ytchannel1.name<< endl;
//    cout<< "Owner Name :"<< ytchannel1.ownerName<< endl; 

  
  ytChannel channel1;
  channel1.name="code beauty";
  channel1.ownerName="Saldina";
  channel1.subCount= 200,000;
  channel1.publishedVids={"OOP for beginners"};

  cout<< "Name :"<< channel1.name<< endl;
  cout<< "Owner name :"<< channel1.ownerName<<endl;
  cout<<"Number of subscribers :"<< channel1.subCount<< endl;
  for(string name: channel1.publishedVids){
    cout<< name<< endl;
  }
}