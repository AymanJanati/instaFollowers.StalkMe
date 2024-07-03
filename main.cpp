#include <iostream>
#include <fstream>
#include <string>
#include <unordered_set>

using namespace std;

void loadFollowers(const string& filename, unordered_set<string>& followers) {
    ifstream file(filename);
    string line;

    while (getline(file, line)) {
        // Check if the line does not contain 'profile picture'
        if (line.find("profile picture") == string::npos && !line.empty()) {
            followers.insert(line);
        }
    }
    file.close();
}

int main() {
    unordered_set<string> dfltFollowers;
    unordered_set<string> newFollowers;

    // Load default followers
    loadFollowers("deflt.txt", dfltFollowers);
    
    // Load new followers
    loadFollowers("new.txt", newFollowers);

    // Open result files
    ofstream newFollowersFile("result.txt");
    if (!newFollowersFile.is_open()) {
        cerr << "Failed to open result.txt for writing." << endl;
        return 1;
    }

    ofstream unfollowedFile("unfollowed.txt");
    if (!unfollowedFile.is_open()) {
        cerr << "Failed to open unfollowed.txt for writing." << endl;
        return 1;
    }

    // Write new followers to result.txt
    newFollowersFile << "New followers:" << endl;
    for (const auto& follower : newFollowers) {
        if (dfltFollowers.find(follower) == dfltFollowers.end()) {
            newFollowersFile << follower << endl;
        }
    }

    // Write unfollowed users to unfollowed.txt
    unfollowedFile << "Unfollowed users:" << endl;
    for (const auto& follower : dfltFollowers) {
        if (newFollowers.find(follower) == newFollowers.end()) {
            unfollowedFile << follower << endl;
        }
    }

    newFollowersFile.close();
    unfollowedFile.close();
    cout << "New followers have been written to result.txt" << endl;
    cout << "Unfollowed users have been written to unfollowed.txt" << endl;

    return 0;
}
