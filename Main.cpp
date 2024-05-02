#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include "Play.cpp"
#include "GAME VALUES.h"

using namespace std;
typedef long long ll;

int main()
{
    ll iint;
    string istr;
    HANDLE console_color;
    console_color = GetStdHandle(
            STD_OUTPUT_HANDLE);

    // Print different colors from 1
    // to 50 on the output screen
    ll P=1;
    SetConsoleTextAttribute( console_color, P);
    print_line(100);
    cout<<endl<<"WELCOME TO THE HARRY POTTER DUELLING GAME"<<endl;

    ll Q=7;
    SetConsoleTextAttribute( console_color, Q);
    cout<<endl<<"To see the rules press 1 to play press 2"<<endl;
    cin>>iint;

    if(iint ==1){
        ifstream file("C:\\Users\\sharn\\CLionProjects\\untitled\\OWN PROJECTS\\HARRY POTTER DUELLING GAME\\Harry-Potter-Dueling-Game\\RULES HARRY POTTER DUIELLING GAME"); // Assuming it's a text file
        if (file.is_open())
        {
            string line;
            while (getline(file, line))
            {
                cout << line << endl;
            }
            file.close();
        }
        else
        {
            cout << "Unable to open file!" << endl;
        }
        print_blue_line();
        n_space(5);
        cout << "to play press 2" << endl;
        cin >> iint;
        cin.ignore();
        play();

    }

    else if(iint == 2){
        cin.ignore();
        play();
    }

}
