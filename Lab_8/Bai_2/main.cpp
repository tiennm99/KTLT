#include "Bai_2.h"

int main()
{
    int n;
    cin >> n;
    if (n == 0)
    {
        cout << "zero";
    }
    else if (n < 0)
    {
        cout << "negative ";
        n *= -1;
    }
    int num_digits = get_num_digits(n);
    int chunk_count = (num_digits%3 == 0) ? (num_digits/3) : (num_digits/3) + 1;
    int t;
    while (chunk_count > 0)
    {
        t = pow(10, (chunk_count - 1)*3);
        translateThousand(n/t);
        if (chunk_count > 1)
        {
            cout << " ";
        }
        power_to_text(chunk_count - 1);
        n = n%t;
        chunk_count--;
    }
    return 0;
}

void num_to_text(int num)
{
    char* arr_num[19] =
    {
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "night",
        "ten",
        "eleven",
        "twelve",
        "thirteen",
        "fourteen",
        "fifteen",
        "sixteen",
        "seventeen",
        "eighteen",
        "nineteen"
    };
    if (num > 0 && num < 20)
    {
        cout << arr_num[num - 1];
    }
}

void tens_to_text(int tens)
{
    char* arr_tens[8] =
    {
        "twenty",
        "thirty",
        "forty",
        "fifty",
        "sixty",
        "seventy",
        "eighty",
        "ninety"
    };
    if (tens > 1 && tens < 10)
    {
        cout << arr_tens[tens - 2];
    }
}

void power_to_text(int power)
{
    char* arr_power[3] =
    {
        "thousand ",
        "million ",
        "billion "
    };
    if (power > 0 && power < 3)
    {
        cout << arr_power[power - 1];
    }
}

int get_num_digits(int n)
{
    int num_digits = 0;
    while (n != 0)
    {
        n /= 10;
        num_digits++;
    }
    return num_digits;
}

void translateThousand(int thousand_chunk)
{
    if (thousand_chunk >= 100)
    {
        num_to_text(thousand_chunk/100);
        cout << " hundred ";
    }
    translateHundred(thousand_chunk%100);
}

void translateHundred(int hundred_chunk)
{
    if (hundred_chunk >= 20)
    {
        tens_to_text(hundred_chunk/10);
        cout << " ";
        num_to_text(hundred_chunk%10);
    }
    else
    {
        num_to_text(hundred_chunk);
    }
}
