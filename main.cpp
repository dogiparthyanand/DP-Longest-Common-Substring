#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iomanip> // For std::setw

using namespace std;

// This class encapsulates the logic for finding the longest common substring.
// It is designed to be a clean, reusable component.
class SubstringAnalyzer {
private:
    int m_max_length = 0;
    int m_end_index_s1 = -1;

public:
    // This method computes and displays the DP table and finds the solution.
    void solve(const string& s1, const string& s2) {
        int n = s1.length();

        // We use two rows for the DP table to optimize space to O(N).
        // dp_current tracks the current row, and dp_previous is the row above it.
        vector<int> dp_previous(n + 1, 0);
        vector<int> dp_current(n + 1, 0);

        // Display the table header for visual representation.
        cout << "Dynamic Programming Lookup Table:\n";
        cout << "      ";
        for (char c : s2) {
            cout << setw(3) << c;
        }
        cout << "\n    +";
        for (int i = 0; i <= n; ++i) {
            cout << "---";
        }
        cout << "----\n";

        // Fill the DP table using the core recurrence relation.
        for (int i = 1; i <= n; ++i) {
            cout << s1[i - 1] << " |";
            for (int j = 1; j <= n; ++j) {
                // If characters match, the current length is the diagonal length + 1.
                // The diagonal length is in the previous row, so we use dp_previous[j-1].
                if (s1[i - 1] == s2[j - 1]) {
                    dp_current[j] = dp_previous[j - 1] + 1;

                    // Track the maximum length and the ending index.
                    if (dp_current[j] > m_max_length) {
                        m_max_length = dp_current[j];
                        m_end_index_s1 = i - 1;
                    }
                } else {
                    // If characters don't match, the common substring is broken.
                    dp_current[j] = 0;
                }
                cout << setw(3) << dp_current[j];
            }
            cout << "\n";
            // The current row becomes the previous row for the next iteration.
            dp_previous = dp_current;
        }
    }

    // This method extracts and returns the longest common substring.
    string getSolution(const string& s1) const {
        if (m_max_length == 0) {
            return "No common substring found.";
        }
        return s1.substr(m_end_index_s1 - m_max_length + 1, m_max_length);
    }

    // Method to return the length of the longest common substring.
    int getLength() const {
        return m_max_length;
    }
};

int main() {
    // Hardcoded example for submission.
    string test_str1 = "ALGORITHM";
    string test_str2 = "LOGARITHM";

    // Assume the strings have the same length for this assignment.
    if (test_str1.length() != test_str2.length()) {
        cout << "Error: Strings must be the same length." << endl;
        return 1;
    }

    // Create an instance of our class to solve the problem.
    SubstringAnalyzer solver;
    solver.solve(test_str1, test_str2);

    cout << "\nSolution:\n";
    cout << "Longest Common Substring: " << solver.getSolution(test_str1) << endl;
    cout << "Length: " << solver.getLength() << endl;

    return 0;
}