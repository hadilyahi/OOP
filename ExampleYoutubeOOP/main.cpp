#include <iostream>
#include "Youtube.h"

using namespace std;

int main (){
    YoutubeChannel ytChannel ;
    ytChannel.setName("CodeBeauty");
    ytChannel.setOwnerName("Saldina");
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.subscribe();
    ytChannel.unsubscribe();
    ytChannel.unsubscribe();
    ytChannel.getInfo(); 



    return 0;

}