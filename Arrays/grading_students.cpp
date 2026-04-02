/*
Grading Students - HackerRank

HackerLand University has the following grading policy:
- Every student receives a grade in the inclusive range from 0 to 100.
- Any grade less than 40 is a failing grade.

Sam rounds grades as follows:
- If the grade is less than 38, no rounding occurs.
- If the difference between the grade and the next multiple of 5 is less than 3,
  the grade is rounded up to that multiple of 5.
- Otherwise, the grade is not rounded.

Input format:
- First line: integer n, number of students.
- Next n lines: each line has an integer grade[i].

Output format:
- For each grade[i], print the rounded final grade on its own line.

Sample Input:
4
73
67
38
33

Sample Output:
75
67
40
33
*/


#include <vector>
using namespace std;

int getroundedfig(int x) {
    return ((x + 4) / 5) * 5;
}

vector<int> gradingStudents(vector<int> grades) {
    vector<int> ans;
    for (int x : grades) {
        int y = getroundedfig(x);
        if (x >= 38 && y - x < 3) {
            ans.push_back(y);
        } else {
            ans.push_back(x);
        }
    }
    return ans;
}

