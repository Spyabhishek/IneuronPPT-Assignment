#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMinArrowShots(vector<vector<int>> &points)
{
    if (points.empty())
    {
        return 0;
    }

    // Sort the balloons based on their end points in ascending order
    sort(points.begin(), points.end(), [](const vector<int> &a, const vector<int> &b)
         { return a[1] < b[1]; });

    int end = points[0][1];
    int arrows = 1;

    for (int i = 1; i < points.size(); ++i)
    {
        // If the current balloon's start point is greater than 'end',
        // a new arrow is needed to burst the balloon
        if (points[i][0] > end)
        {
            end = points[i][1];
            arrows++;
        }
    }

    return arrows;
}

int main()
{
    vector<vector<int>> points = {{10, 16}, {2, 8}, {1, 6}, {7, 12}};
    int minArrows = findMinArrowShots(points);

    cout << "Minimum number of arrows needed: " << minArrows << endl;

    return 0;
}
