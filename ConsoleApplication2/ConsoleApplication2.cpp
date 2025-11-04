#include <iostream>

using namespace std;

int main()
{
    //zad 1
    /*int tab[10];
    for (int i = 0; i < 10; i++) {
        cout << "Podaj " << i+1 << " element tablicy: ";
        cin >> tab[i];
        cout << "\n";
    }
    for (int a = 9; a >= 0; a--) {
        cout << a+1 << " element tablicy to: " << tab[a] << endl;
    }*/
    
    //zad 2
    /*int n;
    cout << "Podaj ilosc liczb ciagu Fibbonaciego(Wieksza niz 2):";
    cin >> n;
    int* fib = new int[n];
    fib[0] = 0;
    fib[1] = 1;
    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    for (int a = 0; a < n; a++) {
        cout << fib[a]<<endl;
    }*/

    //zad 3
    /*srand(time(NULL));
    int suma = 0, mns = 0, srednia = 0, min = 10, max=0;
    int tab[10];
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 11;
        suma += tab[i];
        cout << tab[i] << endl;
    }
    srednia = suma / 10;
    for (int a = 0; a < 10; a++) {
        if (tab[a] < srednia) {
            mns += 1;
        }
    }
    for (int i = 1; i < 10; i++) {
        if (tab[i-1] < tab[i] && tab[i-1]<min) min = tab[i-1];
        if (tab[i-1] > tab[i] && tab[i-1]>max) max = tab[i-1];
    }
    cout << "Minimalna wartosc: " << min << ", Maksymalna wartosc: " << max << endl;
    cout <<"Mniej niz srednia :" << mns << ", srednia: " << srednia << endl;*/

    //zad 4
    /*int rows, cols;
    cout << "Podaj liczbe wierszy: ";
    cin >> rows;
    cout << "\nPodaj liczbe kolumn: ";
    cin >> cols;
    int** mac = new int*[rows];
    for (int i = 0; i < rows; ++i)
        mac[i] = new int[cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j+1 << " elementu w "<<i+1 <<" rzedzie: ";
            cin >> mac[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout<< mac[i][j]<<" ";
        }
        cout << endl;
    }*/

    //zad 5
    /*int n, temp = 0;
    const int rozmiar = 10;
    int tab[rozmiar] = {0};
    cout << "Podaj ilosc liczb(z zakresu 0-10) ktora podasz: ";
    cin >> temp;
    if (temp > 10 || temp < 0) {
        cout << "Podales liczbe z poza zakresu";
        return 0;
    }
    for (int i = 0; i < temp; i++) {
            cout << "Podaj liczbe: ";
            cin >> n;
            tab[i] = n;
    }
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }*/

    //zad 6
    /*
    srand(time(NULL));
    int tab[10];
    int ile=0;
    for (int i = 0; i < 10; i++) {
        tab[i] = rand() % 10+1;
        cout << tab[i] << endl;
    }
    int luckynum = rand() % 10 + 1;
    for (int i = 0; i < 10; i++) {
        if (tab[i] == luckynum) {
            ile += 1;
        }
    }
    cout << "Liczba wystapila " << ile << " razy, a byla to liczba " << luckynum;*/

    //zad 7
    /*int rows, cols;
    cout << "Podaj liczbe wierszy i kolumn: ";
    cin >> rows;
    cols = rows;
    int** mac1 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac1[i] = new int[cols];
    int** mac2 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac2[i] = new int[cols];
    int** mac3 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac3[i] = new int[cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j + 1 << " elementu w " << i + 1 << " rzedzie w 1 macierzy: ";
            cin >> mac1[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j + 1 << " elementu w " << i + 1 << " rzedzie w 2 macierzy: ";
            cin >> mac2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mac3[i][j] = mac1[i][j] + mac2[i][j];
            cout << mac3[i][j] << " ";
        }
        cout << endl;
    }*/

    //zad 8
    /*int rows, cols;
    cout << "Podaj liczbe wierszy i kolumn: ";
    cin >> rows;
    cols = rows;
    int** mac1 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac1[i] = new int[cols];
    int** mac2 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac2[i] = new int[cols];
    int** mac3 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac3[i] = new int[cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j + 1 << " elementu w " << i + 1 << " rzedzie w 1 macierzy: ";
            cin >> mac1[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j + 1 << " elementu w " << i + 1 << " rzedzie w 2 macierzy: ";
            cin >> mac2[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            mac3[i][j] = mac1[i][j] * mac2[i][j];
            cout << mac3[i][j] << " ";
        }
        cout << endl;
    }*/

    //zad 9
    /*int rows, cols, suma = 0;
    cout << "Podaj liczbe wierszy i kolumn: ";
    cin >> rows;
    cols = rows;
    int** mac1 = new int* [rows];
    for (int i = 0; i < rows; ++i)
        mac1[i] = new int[cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "\nPodaj wartosc " << j + 1 << " elementu w " << i + 1 << " rzedzie w 1 macierzy: ";
            cin >> mac1[i][j];
        }
    }
    for (int i = 0; i < rows; i++) {
        suma += mac1[i][i];
        cout << endl;
    }
    cout << suma;*/

    //zad 10
//nieskonczone
    int temp;
    int tab[10];
    for (int i = 0; i < 10; i++) {
        cout << "Podaj liczbe: ";
        cin >> tab[i];
    }
    for (int i = 1; i < 10; i++) {
        for (int j = 1; j < 10; j++) {
            if (tab[i - 1] > tab[i]) {
                temp = tab[i - 1];
                tab[i - 1] = tab[i];
                tab[i] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        cout << tab[i] << " ";
    }
    return 0;
}