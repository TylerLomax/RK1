#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <algorithm>
#include <string>
#include <regex>


using namespace std;
void task3(const char* bin, int length)
{
    int num = 0;
    for (int i = 0; i < length; i++)
    {

        if (bin[i] == 0x31)
        {
            num++;
        }
        if (i != length-1)
        {
            num = num << 1;
        }

    }
    printf("Число в шестнадцатеричном виде:%x", num);

}

void callTasks()
{
const char* inpt = "0x310x300x310x300x30";
  string line = string(inpt);
  regex rx("0x3");
  string fmt("");
  line = regex_replace(line, rx, fmt);
  inpt = line.c_str();
  task3(inpt, strlen(inpt));
  cout << endl;
  cout << "Третья задача выполнена." << endl;
  cout << endl;
}
