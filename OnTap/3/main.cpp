#include <iostream>
#include <iomanip>
using namespace std;
#define MAX_SIZE 10

class matrix {
public:
	double** ptr;
	int size;
	matrix()
	{
		this->size = 0;
		this->ptr = NULL;
	}
	matrix(int size)
	{
		this->size = size;
		ptr = new double*[3];
		for (int i = 0; i < 3; i++)
		{
			ptr[i] = new double[MAX_SIZE];
		}
	}
	friend ostream &operator<< (ostream &output, const matrix &m)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < m.size; j++)
			{
				output << setw(5) << m.ptr[i][j];
			}
			output << endl;
		}
		return output;
	}
	void del()
	{
		for (int i = 0; i < 3; i++)
		{
			if (ptr[i] != NULL)
			{
				delete[] ptr[i];
				ptr[i] = NULL;
			}
		}
		if (ptr != NULL)
		{
			delete[] ptr;
			ptr = NULL;
		}
	}
	~matrix(){}
};

matrix transform(const matrix& Min)
{
	double x = 0, y = 0, z = 0;
	static matrix Mout(Min.size);
	for (int j = 0; j < Min.size; j++)
	{
		x += Min.ptr[0][j];
		y += Min.ptr[1][j];
		z += Min.ptr[2][j];
	}
	x = x / Min.size;
	y = y / Min.size;
	z = z / Min.size;
	for (int j = 0; j < Min.size; j++)
	{
		Mout.ptr[0][j] = Min.ptr[0][j] - x;
		Mout.ptr[1][j] = Min.ptr[1][j] - y;
		Mout.ptr[2][j] = Min.ptr[2][j] - z;
	}
	return Mout;
}

int main()
{
	int N;
	cout << "ENTER N : ";
	cin >> N;
	matrix x(N);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << "a[" << i << "][" << j << "] : ";
			cin >> x.ptr[i][j];
		}
	}
	matrix y;
	y = transform(x);
	cout << x << endl;
	cout << y << endl;
	x.del();
	y.del();
	return 0;
}
