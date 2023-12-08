#include <iostream>
#include <string>
using namespace std;

const int MAX_CANDIDATES = 10;

class VotingSystem {
public:
    string candidate_names[MAX_CANDIDATES];
    int votes[MAX_CANDIDATES];
    int candidate_count;

    VotingSystem() {
        candidate_count = 0; // Initialize candidate count to 0
        for (int i = 0; i < MAX_CANDIDATES; ++i) {
            candidate_names[i] = ""; // Initialize candidate names as empty strings
            votes[i] = 0; // Initialize votes to 0
        }
    }

    void add_candidate(string candidate_name) {
        if (candidate_count < MAX_CANDIDATES) {
            candidate_names[candidate_count++] = candidate_name;
            cout << "Candidate '" << candidate_name << "' added successfully!" << endl;
        } else {
            cout << "Maximum candidates limit reached!" << endl;
        }
    }

    void vote_for_candidate(int candidate_index) {
        if (candidate_index >= 0 && candidate_index < candidate_count) {
            votes[candidate_index]++;
            cout << "Vote cast for '" << candidate_names[candidate_index] << "' successfully!" << endl;
        } else {
            cout << "Invalid candidate index!" << endl;
        }
    }

    void display_results() {
        cout << "Voting Results:" << endl;
        for (int i = 0; i < candidate_count; ++i) {
            cout << candidate_names[i] << ": " << votes[i] << " votes" << endl;
        }
    }
};

int main() {
    VotingSystem election;

    // Adding candidates
    election.add_candidate("Candidate A");
    election.add_candidate("Candidate B");
    election.add_candidate("Candidate C");

    // Casting votes
    election.vote_for_candidate(0);
    election.vote_for_candidate(1);
    election.vote_for_candidate(0);
    election.vote_for_candidate(2);
    election.vote_for_candidate(1);

    // Displaying results
    election.display_results();

    return 0;
}
