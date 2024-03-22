#include <iostream>
#include <string>

using namespace std;

class ICCEvent
{
protected:
    string eventName;

public:
    ICCEvent()
    {
    }

    ICCEvent(string eventName)
    {
        this->eventName = eventName;
        cout << "ICCEvent's constructor called." << endl;
    }
};

class Player : virtual public ICCEvent
{
protected:
    string name;
    string sport;

public:
    Player()
    {
    }

    Player(string eventName, string name, string sport) : ICCEvent(eventName)
    {
        this->name = name;
        this->sport = sport;
        cout << "Player's Constructor." << endl;
    }
};

class Commentator : virtual public ICCEvent
{
protected:
    string name;

public:
    Commentator()
    {
    }

    Commentator(string eventName, string name) : ICCEvent(eventName)
    {
        this->name = name;
        cout << "Commentator's Constructor." << endl;
    }
};

class ShowHost : public Player, public Commentator
{
    string showName;

public:
    ShowHost()
    {
    }

    ShowHost(string sportName, string playerName, string commentatorName,
             string eventName, string showName)
        : Player(eventName, playerName, sportName),
          Commentator(eventName, commentatorName),
          ICCEvent(eventName)
    {
        this->showName = showName;
        cout << "ShowHost's Constructor." << endl;
    }

    void printICCEvent()
    {
        cout << "Event Name=" << eventName << endl;
    }
};

int main()
{
    cout << "---------------------------------------------------------" << endl;
    ShowHost host = ShowHost("Dinesh Kartik", "Cricket", "Dinesh Kartik", "WC-T20",
                             "Crick Buzz");
    host.printICCEvent();
    cout << "---------------------------------------------------------" << endl;
    cout << endl;
    cout << "---------------------------------------------------------" << endl;

    Player player = Player("World Test Championship", "C Pujara", "Cricket");
    cout << "---------------------------------------------------------" << endl;

    return 0;
}
