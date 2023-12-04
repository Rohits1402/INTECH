#include <iostream>
#include <string>

using namespace std;

string stringCompression(const string &input);

int main()
{
    string stringInput;

    cout << "Enter a string: ";
    getline(cin, stringInput);

    string outputCompression = stringCompression(stringInput);

    cout << "Compressed string: " << outputCompression << endl;

    return 0;
}

string stringCompression(const string &input)
{
    string result;

    char prev = input[0];
    int count = 1;

    for (size_t i = 1; i < input.length(); ++i)
    {
        if (input[i] == prev)
        {
            count++;
        }
        else
        {
            result = result + prev + to_string(count);
            prev = input[i];
            count = 1;
        }
    }

    result = result + prev + to_string(count);

    return result;
}
