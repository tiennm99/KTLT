#include <iostream>

using namespace std;

int main()
{
    const char *c[] = {"GeksQuiz", "MCQ", "TEST", "QUIZ"};
    const char **cp[] = {c + 3, c + 2, c + 1, c};
    const char ***cpp = cp;
    cout << c[2] << " " << (char*) &c[0][3] << " " << c[3][3] << " " << (char*) &c[1][1] << endl;
    return 0;
}
