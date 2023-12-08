#include <iostream>
using namespace std;

class Profile {
public:
    string username;
    int followers_count;
    string posts[20]; // Array to store posts

    // Constructor to initialize posts as empty strings
    Profile() {
        for (int i = 0; i < 20; ++i) {
            posts[i] = ""; // Initialize all posts as empty strings
        }
    }

    // Method to add a new post to the profile
    void Add_Post(string post_content) {
        int index = 0;
        while (index < 20 && !posts[index].empty()) {
            index++; // Find the first available slot for a new post
        }

        if (index < 20) {
            posts[index] = post_content; // Add the post to the first available slot
            cout << "Post Added Successfully: " << post_content << endl;
        } else {
            cout << "Cannot add more posts. Limit reached." << endl;
        }
    }

    // Method to increase the count of followers
    void increase_followers(int count) {
        followers_count += count;
    }

    // Method to display the profile information, followers count, and posts
    void display_profile() {
        cout << "Username: " << username << endl;
        cout << "Followers: " << followers_count << endl;
        cout << "Posts: " << endl;
        for (int i = 0; i < 20; ++i) {
            if (!posts[i].empty()) {
                cout << "- " << posts[i] << endl; // Display non-empty posts
            }
        }
    }
};

int main() {
    Profile profile;

    // Setting initial values for the profile
    profile.username = "Romi Gupta";
    profile.followers_count = 234;

    profile.increase_followers(643); // Increasing followers count
    profile.Add_Post("Heera");      // Adding a post
    profile.Add_Post("Diamond");    // Adding another post
    profile.display_profile();      // Displaying the profile details

    return 0;
}
