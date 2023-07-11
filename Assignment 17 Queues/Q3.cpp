#include <bits/stdc++.h>
using namespace std;

int countStudentsUnableToEat(const vector<int> &students, const vector<int> &sandwiches)
{
    queue<int> studentQueue;
    stack<int> sandwichStack;

    // Initialize the student queue
    for (int student : students)
    {
        studentQueue.push(student);
    }

    // Initialize the sandwich stack
    for (int sandwich : sandwiches)
    {
        sandwichStack.push(sandwich);
    }

    int unableToEat = 0;

    while (!studentQueue.empty() && !sandwichStack.empty())
    {
        int student = studentQueue.front();
        int sandwich = sandwichStack.top();

        if (student == sandwich)
        {
            // Student prefers the sandwich, so they eat it
            studentQueue.pop();
            sandwichStack.pop();
        }
        else
        {
            // Student doesn't prefer the sandwich, so they go to the end of the queue
            studentQueue.pop();
            studentQueue.push(student);

            unableToEat++;
        }
    }

    return unableToEat;
}

int main()
{
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};

    int unableToEat = countStudentsUnableToEat(students, sandwiches);

    cout << "Number of students unable to eat: " << unableToEat << endl;

    return 0;
}
