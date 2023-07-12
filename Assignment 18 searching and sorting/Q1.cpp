#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Custom comparator function to sort intervals based on their start times
bool compareIntervals(const vector<int> &interval1, const vector<int> &interval2)
{
    return interval1[0] < interval2[0];
}

vector<vector<int>> mergeIntervals(const vector<vector<int>> &intervals)
{
    if (intervals.empty())
    {
        return {};
    }

    vector<vector<int>> result;
    vector<vector<int>> sortedIntervals = intervals;

    // Sort the intervals based on their start times
    sort(sortedIntervals.begin(), sortedIntervals.end(), compareIntervals);

    result.push_back(sortedIntervals[0]); // Initialize the result with the first interval

    for (int i = 1; i < sortedIntervals.size(); ++i)
    {
        vector<int> &currentInterval = sortedIntervals[i];
        vector<int> &lastMergedInterval = result.back();

        // Check for overlap
        if (currentInterval[0] <= lastMergedInterval[1])
        {
            // Merge the intervals by updating the end time of the last merged interval, if necessary
            lastMergedInterval[1] = max(lastMergedInterval[1], currentInterval[1]);
        }
        else
        {
            // Add the current interval to the result list
            result.push_back(currentInterval);
        }
    }

    return result;
}

int main()
{
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    vector<vector<int>> merged = mergeIntervals(intervals);

    // Print the merged intervals
    for (const auto &interval : merged)
    {
        cout << "[" << interval[0] << ", " << interval[1] << "] ";
    }
    cout << endl;

    return 0;
}
