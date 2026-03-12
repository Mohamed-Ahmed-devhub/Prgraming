#include <iostream>
using namespace std;
int main()
{
    int points = 0;
    int answers[5];

    cout << " Type the Missing number In sequences : \n";

    cout << " sequences 1\n";
    cout << " 1 | 5 | 10 | 16 | ? \n";
    cin >> answers[0];

    cout << " sequences 2\n";
    cout << " 2 | 4 | 8 | 16 | ? \n";
    cin >> answers[1];

    cout << " sequences 3\n";
    cout << " 1 | 1 | 2 | 3 | ? \n";
    cin >> answers[2];

    cout << " sequences 4\n";
    cout << " 3 | 6 | 12 | 24 | ? \n";
    cin >> answers[3];

    cout << " sequences 5\n";
    cout << " 3 | 9 | 18 | 21 | ? \n";
    cin >> answers[4];

    int sequences[5][5] = {
        {1, 5, 10, 16, 23},
        {2, 4, 8, 16, 32},
        {1, 1, 2, 3, 5},
        {3, 6, 12, 24, 48},
        {3, 9, 18, 21, 24}};

    if (answers[0] == sequences[0][4])
    {
        points++;
    }
    if (answers[1] == sequences[1][4])
    {
        points++;
    }
    if (answers[2] == sequences[2][4])
    {
        points++;
    }
    if (answers[3] == sequences[3][4])
    {
        points++;
    }
    if (answers[4] == sequences[4][4])
    {
        points++;
    }

    cout << " your points is : " << points << " From 5";

    char showAnswers;
    cout << "\nDo You Want To See The Correct Answers? (y/n): ";
    cin >> showAnswers;

    if (showAnswers == 'y')
    {
        cout << " Correct Answers:\n";
        cout << "Sequence 1 => " << sequences[0][4] << "\n";
        cout << "Sequence 2 => " << sequences[1][4] << "\n";
        cout << "Sequence 3 => " << sequences[2][4] << "\n";
        cout << "Sequence 4 => " << sequences[3][4] << "\n";
        cout << "Sequence 5 => " << sequences[4][4] << "\n";
    }
    else if (showAnswers == 'n')
    {
        cout << " Ok ! Better Louk Next time \n";
    }
    else
        cout << "Invalid choice! Please enter 'y' or 'n'.\n";

    return 0;
}