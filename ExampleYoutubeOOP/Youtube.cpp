#include "Youtube.h"
#include <iostream>
using namespace std;

 void YoutubeChannel::getInfo(){
        cout << "Name: " << name << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Subscribers Count: " << subscribersCount << endl;

 }
 void YoutubeChannel::subscribe(){
        subscribersCount++;
}
    void YoutubeChannel::unsubscribe(){
            if (subscribersCount > 0) {
                subscribersCount--;
            }
    }
    string YoutubeChannel::getName(){
            return name;
    }
    void YoutubeChannel::setName(string n){
            name = n;
    }
    string YoutubeChannel::getOwnerName(){
            return ownerName;
    }
    void YoutubeChannel::setOwnerName(string oN){
            ownerName = oN;
    }