#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

void task1()
{
    cout << "First:" << endl;
    int k = 0;
    char str[] = "Hello12 World!";
    cout << str << endl;
    for (int i = 0; i <  strlen(str); i++)
    {
        for (char  j = 48; j <= 57; j++)
        {
            if (str[i] == j) k++;
        }
    }
    cout << k;
    cout<<endl;
}
void task2()
{
    cout << "Second:" << endl;
    char str[255] = "Hello* World!*";
    cout << str << endl;  
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '*')
        {
            int n = strlen(str);
            str[n + 2] = '\0';
            for (int k = n + 2 - 1; k > i; k--)
                str[k] = str[k - 1];
            for (int k = 2 ; k > 0; k--)
                str[i+1] = '|';
            i += 2;
        }
    }
    cout << str << endl;
}
void task3()
{
    cout << "Third:" << endl;
    setlocale(0, "");
    char str[255] = "Hello*я яWorld!*";
    cout << str << endl;
    for (int i = 1; i < strlen(str); i += 2)
    {
        //int t = str[i - 1];
        //str[i - 1] = str[i];
        //str[i] = t;
        swap(str[i - 1], str[i]);
    }
    cout << str << endl;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'я')str[i] = ' ';
    }
    cout << str;
}
int main()
{
    task1();
    task2();
    task3();
}
