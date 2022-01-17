#include <iostream>
#include <list>

using namespace std;

class YouTubeChannel {
public:
    string name;
    int SubscriberCount;

    YouTubeChannel() {

    }
    YouTubeChannel(string newName, int newSubscriberCount) {
        name = newName;
        SubscriberCount = newSubscriberCount;
    }
    bool operator==(const YouTubeChannel &ytc) const {
        return this->name == ytc.name;
    }
};

class myCollection {
public:
    list<YouTubeChannel>myChannels;

    void operator +=(YouTubeChannel &ytc) {
        this->myChannels.push_back(ytc);
    }
    void operator -=(YouTubeChannel &ytc) {
        this->myChannels.remove(ytc);
    }
};

ostream& operator <<(ostream &COUT, YouTubeChannel &ytc) {
    COUT << "Name: " << ytc.name << endl;
    COUT << "Number of Subscribers: " << ytc.SubscriberCount << endl;
    return COUT;
}

ostream& operator<<(ostream &COUT, myCollection &collection) {
    for(YouTubeChannel ytChannel:collection.myChannels) {
        COUT << ytChannel << endl;
    }
}

int main() {

    YouTubeChannel yt1("Comic Trips", 6510);
    YouTubeChannel yt2("Tricky Gym", 80000);

    cout << yt1;

    operator<<(cout,yt2);

    myCollection myCollection;

    myCollection += yt1;
    myCollection += yt2;

    cout << myCollection;

    myCollection -= yt2;

    cout << myCollection;
};