#include <iostream>
using namespace std;
#define max 10
int n;
class matrix
{
public:
    int mt[max][max];
    
    matrix()
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                mt[i][j] = 0;
            }
        }
    }
    void insertMatrix()
    {
        cout << endl;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                cout << "Matrix [" << i << "][" << j << "]: ";
                cin >> mt[i][j];
            }
        }
        cout << endl;
    }
    void printMatrix()
    {
        for(int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << mt[i][j] << " ";
            }
            cout << endl;
        }
    }
};
    matrix Addition(matrix a, matrix b)
    {
        matrix c;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                c.mt[i][j] +=a.mt[i][j] + b.mt[i][j];
            }
        }
        return c;
    }
    matrix Subtraction(matrix a, matrix b)
    {
        matrix c;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                c.mt[i][j] += a.mt[i][j] - b.mt[i][j];
            }
        }
        return c;
    }
    matrix Multiplication(matrix a,matrix b)
    {
        matrix c;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {

                c.mt[i][j] += a.mt[i][j] * b.mt[i][j];
            }
        }
        return c;
    }

void main()
{
    matrix a,b,c,d;
    cout << "Level matrix: ";
    cin >> n;
    cout << "Matrix A:";
    a.insertMatrix();
    cout << "\nMatrix B:";
    b.insertMatrix();
    system("cls");
    cout << "\n Matrix A:\n";
    a.printMatrix();
    cout << "\n Matrix B:\n";
    b.printMatrix();
    c = Addition(a,b);
    cout << "\n Addition 2 matrix AB:\n";
    c.printMatrix();
    c = Subtraction(a,b);
    cout << "\n Subtraction 2 matrix AB:\n";
    c.printMatrix();
    c = Multiplication(a,b);
    cout << "\n Multiplication 2 matrix AB:\n";
    c.printMatrix();
    system("pause");
}