#include <iostream>
#include <string>

using namespace std;

class ExpCalculator
{
public:
    string s;
    int a, b, c;
    ExpCalculator()
    {
        this->s = "";
        this->a = 0;
        this->b = 0;
        this->c = 0;
    }
    void set(string s, int n)
    {
        if (s == "a")
        {
            this->a = n;
        }
        else if (s == "b")
        {
            this->b = n;
        }
        else if (s == "c")
        {
            this->c = n;
        }
    }

    ~ExpCalculator();
};

int main()
{
    string s = "abcdefgh";
    int a = 12;
    s.replace()
    cout << s;
    return 0;
}
