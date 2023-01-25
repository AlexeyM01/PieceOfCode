#include <string>
#include <iostream>

using namespace std;

string getDataFromBD()
{
    return "get Data From BD";
}

string getDataFromWebServer()
{
    return "get Data From Web Server";
}

string getDataFromAstral()
{
    return "get Data From Astral";
}

void showInfo(string(*example)())
{
    cout << example() << endl;
}

int main()
{
    showInfo(getDataFromAstral);//вызов функции с параметром указателя функции
    return 1;
}