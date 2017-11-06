#include <iostream>
#include <cstring>

using namespace std;

void reverse(char* sentence, char*& reversed)
{
    int index = 0;
    char* pnt = sentence;

    while(*pnt != ' ' && *pnt != '\0')
    {
        pnt++;
        index++;
    }
    if (*pnt != '\0')
    {
        pnt++;
        reverse(pnt, reversed);
    }
    snprintf(reversed, index+2, "%s ", sentence);
    reversed += index+1;
}

int main()
{
    char sentence[200];
    char reversed[200];
    std::cin.getline(sentence,200);
    char* ref = reversed;
    reverse(sentence, ref);

    cout << reversed << endl;
    return 0;
}
