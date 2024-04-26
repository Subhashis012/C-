#include <iostream>
using namespace std;

// Function to check if a person is eligible to vote
bool isEligibleToVote(int age, int votingAge) {
    return age >= votingAge;
}

int main() {
    // Define the voting age limit
    int votingAge = 18;

    // Check if the person is eligible to vote
    bool isEligible = isEligibleToVote(20, votingAge);

    // Print the result
    if (isEligible) {
        cout << "Yes, the current person is eligible to vote" << endl;
    } else {
        cout << "No, the current person is not eligible to vote" << endl;
    }

    return 0;
}