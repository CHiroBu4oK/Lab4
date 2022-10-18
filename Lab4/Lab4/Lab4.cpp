#include<iostream>;
using namespace std;

int main()
{
    int y;
    cout << "Enter the number of checks:";
    cin >> y;
    for (int i = 0; i < y; i++) {
        char Seasons[12][10] = { "Winter","Winter","Spring", "Spring", "Spring","Summer", "Summer", "Summer", "Autum","Autum","Autum", "Winter" };
        int x;
        cout << "Enter the number of mounth:";
        cin >> x;
        cout << Seasons[abs(x % 12) - 1] << endl;
    }
    return 0;
}