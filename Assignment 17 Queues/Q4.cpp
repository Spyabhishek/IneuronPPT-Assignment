#include <iostream>
#include <queue>
using namespace std;

class RecentCounter
{
private:
    queue<int> requests;

public:
    RecentCounter()
    {
    }

    int ping(int t)
    {
        // Add the new request's timestamp to the queue
        requests.push(t);

        // Remove requests that are outside the time frame of 3000 milliseconds
        while (!requests.empty() && requests.front() < t - 3000)
        {
            requests.pop();
        }

        // Return the number of requests within the time frame
        return requests.size();
    }
};

int main()
{
    RecentCounter counter;

    cout << counter.ping(1) << endl;    // Output: 1
    cout << counter.ping(100) << endl;  // Output: 2
    cout << counter.ping(3001) << endl; // Output: 3
    cout << counter.ping(3002) << endl; // Output: 3

    return 0;
}
