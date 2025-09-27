Dynamic Programming: Longest Common Substring (LCS)
This project has the implmentation of Longest Common Substring algorithm using Dynamic Programming(DP) paradigm in C++. It was done to showcase algorithm performance, ruggedly design and the use of DP recurrences.

Project Overview and Advanced Design:-
The solution was designed to maintain speed while optimizing memory usage, successfully meeting the assignment's visualization requirement.

* Complexity (O(N)): OptimizedSpace / Used - The final code attempts to use optimized space O(1) and same time of O(N2) thought N3, like it comes to comparison. This is done with just two simple vectors (dp_current and dp_previous) rather than an N×N matrix.

* The Visualization Requirement: This code is designed to output the results of the DP computation row by row, and so fulfils the task specification to visualize the "dynamically growing table.

* Design: The main logic is hidden in the SubstringAnalyzer class. The hardcoded test case (pair of "ALGORITHM" and "LOGARITHM") is special and showcase pattern.

How to Compile and Run:-
The package is self-contained in an single p file and can be compiled and run from any standard terminal environment.

1. rn C++ compiler (g++ or clang++):g++ -std=c++17 -o lcs_solver longest_common_substring.cpp
2. Run the executable from the terminal:./lcs_solver
