#include <iostream>
using namespace std;

int stringLength(const char *str, int index)
{
    if (str[index] == '\0')
    {
        return 0;
    }

    return 1 + stringLength(str, index + 1);
}

int main()
{
    const char *str = "GEEKSFORGEEKS";
    int length = stringLength(str, 0);

    cout << "Length of the string: " << length << endl;

    return 0;
}
