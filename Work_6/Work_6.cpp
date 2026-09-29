#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    //Task 1

    double x, y, y_new, eps;
    int n;
    int i = 0;

    cout << "\tTask 1 \n" << endl;
    cout << "Enter x : ";
    cin >> x;
    cout << "Enter n : ";
    cin >> n;
    cout << "Enter epsilon : ";
    cin >> eps;

    y = x;

    do
    {
        y_new = (1.0 / n) * (x / pow(y, n - 1) + (n - 1) * y);
        i++;

        cout << "y" << i << " = " << y_new << endl;

        if (fabs(y_new - y) <= eps)
            break;

        y = y_new;

    } while (true);

    cout << "\nRoot : " << y_new << endl;
    cout << "Number of iterations : " << i << endl;



    //Task 2

    double X, X_new, E;
    int j = 0;

    cout << "\n\n\tTask 2 \n" << endl;
    cout << "Enter x : ";
    cin >> X;
    cout << "Enter epsilon:  ";
    cin >> E;

    do
    {
        X_new = 2 - log(X);
        j++;

        cout << "X" << j << " = " << X_new << endl;

        if (fabs(X_new - X) < E)
            break;

        X = X_new;

    } while (true);

    cout << "\nRoot : " << X_new << endl;
    cout << "Number of iterations : " << j << endl;



    //Task 3

    double x_3, term, sum, e;
    int k = 0;

    cout << "\n\n\tTask 3 \n" << endl;
    cout << "Enter x : ";
    cin >> x_3;
    cout << "Enter epsilon : ";
    cin >> e;

    term = 1.0;
    sum = term;

    do
    {
        k++;
        term *= -x_3 / k;
        sum += term;

        cout << "term" << k << " = " << term << endl;

    } while (fabs(term) > e);

    cout << "\nFunction value : " << sum << endl;
    cout << "x value : " << x_3 << endl;
    cout << "Number of iterations : " << k << endl;
}
