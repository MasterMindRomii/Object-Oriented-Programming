#include <iostream>
using namespace std;

class MembershipSystem
{

public:
    string MemberIDs[20];
    int TotalNumber;
    int index;

    void initialize()
    {
        TotalNumber = 0;
        index = 0;
    }

    void RegisterMember(string ID)
    {
        if (index < 20)
        {
            MemberIDs[index] = ID;
            cout << "Registered Member at Index " << index << endl;
            index++;
            TotalNumber++;
        }

        else
        {
            cout << "No space available" << endl;
        }
    }

    void Display()
    {
        cout << "Registered Members are:" << endl;
        for (int i = 0; i < index; i++)
        {
            cout << MemberIDs[i] << " " << endl;
        }
        cout << "Total Number of Registered Member is:" << TotalNumber;
    }
};

int main()
{
    MembershipSystem profile;

    profile.initialize();

    profile.RegisterMember("iwdhdws");
    profile.RegisterMember("bjuswkdbuj");
    profile.Display();
}
