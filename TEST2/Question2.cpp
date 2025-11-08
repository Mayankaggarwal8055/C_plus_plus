#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    string players;
    cin >> players;

    int team1 = 0;
    int team2 = 0;

    for (int i = 1; i <= players.length(); i++)
    {
        if (players[i] = "0")
        {
            team1++;
            team2 = 0;
        }
        else
        {
            team2++;
            team1 = 0;
        }
        if (team1 >= 7 || team2 >= 7)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}