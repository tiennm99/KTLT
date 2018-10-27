#include <iostream>

using namespace std;

class Rectangle
{
protected:
    int length;
    int width;
public:
    Rectangle()
    {
        this->length = 20;
        this->width = 10;
    };
    Rectangle (int length, int width)
    {
        this->length = length;
        this->width = width;
    };
    void display()
    {
        cout << "Chieu dai: " << this->length << ". Chieu rong: " << this->width << endl;
    };
    void getInfo()
    {
        cout << "Nhap chieu dai va chieu rong:";
        cin >> this->length >> this->width;
    };
    void setLength(int length)
    {
        this->length = length;
    };
    void setWidth(int width)
    {
        this->width = width;
    };
    int getLength()
    {
        return this->length;
    };
    int getWidth()
    {
        return this->width;
    };
    int area()
    {
        return this->length*this->width;
    };
    ~Rectangle()
    {

    };
};

class Box: public Rectangle
{
protected:
    int depth;
public:
    Box()
    {
        this->length = 20;
        this->width = 10;
        this->depth = 5;
    }
    Box (int length, int width, int depth)
    {
        this->length = length;
        this->width = width;
        this->depth = depth;
    }
    void display()
    {
        cout << "Chieu dai: " << this->length << ". Chieu rong: " << this->width << ". Chieu sau: " << this->depth << endl;
    };
    void getInfo()
    {
        cout << "Nhap chieu dai, chieu rong va chieu sau:";
        cin >> this->length >> this->width >> this->depth;
    };
    int area()
    {
        return this->length*this->width*this->depth;
    };
    ~Box()
    {

    }
};

int main()
{
    return 0;
}
