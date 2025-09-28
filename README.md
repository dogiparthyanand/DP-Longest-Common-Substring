Dynamic Programming: Longest Common Substring (LCS):-
This project is showing the implementation of Longest Common Substring algorithm using Dynamic Programming(DP)  in C++. It was done to show the  algorithm performance, its design and the use of DP repetitions.

Project Overview and Advanced Design:-
I have done the design on memory efficiency, and choosing the O(min(M,N)) space optimization specifically to handle potentially long strings. This approach also naturally supports the row-by-row output needed for the visualization process.
* Complexity (O(N)): the code achieves O(min(M,N)) space complexity, reducing memory overhead from the standard O(M×N) table. This is achieved by utilizing only two vectors, dp_current and dp_previous. The time complexity remains the standard O(M×N)."
* The Visualization Requirement: This code is designed to give the results of the DP computation row by row, and so fulfills the task specification to visualize the "dynamically growing table.
* Design: The main logic is hidden in the SubstringAnalyzer class. "The hardcoded test case (strings 'ALGORITHM' and 'LOGARITHM') was used because it provides a complex, non-trivial match pattern ('GORITHM'), clearly showing the algorithm's ability to handle long, non-starting substrings."


How to Compile and Run:-
The package is self-contained in an single cpp file and can be compiled and run from any standard terminal environment.

1. rn C++ compiler (g++ or clang++):g++ -std=c++17 -o lcs_solver longest_common_substring.cpp
2. Run the executable from the terminal:./lcs_solver
