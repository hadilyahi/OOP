#ifndef YOUTUBE_H
#define YOUTUBE_H

#include <string>
using namespace std;

class YoutubeChannel {
    
    private :
        string name;
        string ownerName;
        int subscribersCount = 0;
    
    public :
        void getInfo();
        string getName();
        void setName(string n); 
        string getOwnerName();
        void setOwnerName(string oN);

        void subscribe();
        void unsubscribe();
        
};
#endif // YOUTUBE_H