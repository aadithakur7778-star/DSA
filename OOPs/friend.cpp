// classes-> student sports
// stores the marks in student class
// store the sports marks in student class
// use a friend fn. to calculate the total score

#include <bits/stdc++.h>
using namespace std;
class student
{
    int academic_marks;
    friend void total_score(student s, sports sp);
};
class sports{
    private:
    int sports_marks;
    friend void total_score(student s, sports sp);
};
void total_score(student s, sports sp)
{
    cout << "Total score is: " << s.academic_marks + sp.sports_marks;
}