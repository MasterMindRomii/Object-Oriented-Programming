#include <iostream>
using namespace std;

class PatientManager
{

public:
    int PatientID[10];
    int TotalPatients;
    int index;

    void initialize()
    {
        TotalPatients = 0;
        index = 0;
    }

    void AddPatient(int ID)
    {
        if (index < 10)
        {
            PatientID[index] = ID;
            cout <<  "Added Successfully at index " << index << endl;
            TotalPatients++;
            index++;
        }

        else
        {
            cout << "No Space Available" << endl;
        }
    }

    void DisplayPateint()
    {
        cout << "Patient IDs are: ";
        for (int i = 0; i < index; i++)
        {
            cout << PatientID[i] << " " << endl;
        }

        cout << "Total Number of Patients:" << TotalPatients << endl;
    }
};

int main()
{
    PatientManager p;

    p.initialize();

    p.AddPatient(23175764);
    p.AddPatient(231764);
    p.AddPatient(231764);
    p.DisplayPateint();
}