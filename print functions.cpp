#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include <iomanip>
#include<iostream>


typedef long long ll;

using namespace std;

string Health_left_printer(ll H,string whose_health){
    string r = whose_health;
    r.append("Health ");
    for(ll i=0;i<H;i++){
        r.push_back('*');
        r.push_back(' ');
    }
    return r;
}

void print_in_middle(string s){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    ll width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // The width of the console window
    ll spaces = (width - s.length()) / 2;

    for (ll i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout<<s<<endl;
}

void n_space(ll n){
    for(int i=0;i<n;i++){
        cout<<endl;
    }
}

void print_line(ll n){
    cout<<endl;
    for(ll i=0;i<n;i++){
        cout<<"*";
    }
    cout<<endl;
}

void print_blue_line(){
    HANDLE console_color;
    console_color = GetStdHandle(
            STD_OUTPUT_HANDLE);
    ll P=1;
    SetConsoleTextAttribute( console_color, P);
    print_line(100);

    ll Q=7;
    SetConsoleTextAttribute( console_color, Q);


}

void print_left(string s){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    ll width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // The width of the console window

    cout<<setw(width  - s.size() -1)<<s<<endl;
}


void print_suggested_spell(string s,string skip){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    ll width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // The width of the console window

    string tmp = "SUGGESTED SPELL : ";
    ll spaces = width -tmp.length()-1-skip.length();

    for (ll i = 0; i < spaces/2; i++) {
        cout << " ";
    }
    cout<<tmp<<endl;

    for (ll i = skip.length(); i < spaces; i++) {
        cout << " ";
    }
    cout<<s<<endl;

}

void print_user_master_of_death(ll user_master_of_death_values){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    ll width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // The width of the console window
    string s = "YOUR MASTER OF DEATH : ";
    string adder = to_string(user_master_of_death_values);
    s.append(adder);

    ll spaces = (width - s.length()) / 2;

    for (ll i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout<<s<<endl;
}

void print_opponent_master_of_death(ll opponent_master_of_death_values){
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    ll width = csbi.srWindow.Right - csbi.srWindow.Left + 1; // The width of the console window
    string s = "OPPONENT MASTER OF DEATH : ";
    string adder = to_string(opponent_master_of_death_values);
    s.append(adder);

    ll spaces = (width - s.length()) / 2;

    for (ll i = 0; i < spaces; i++) {
        cout << " ";
    }
    cout<<s<<endl;
}

void print_avada_kedavara_status(string whose,ll status_value){

    if(status_value == 1){
        string s = whose;
        if(whose == "Opponent"){
            s.append(" will Avada Kedavra if you misspell this ");
        }
        else {
            s.append(" will have Avada Kedavra if you spell this correctly");
        }
        print_in_middle(s);
        return;
    }

    string str = whose;
    if(whose == "You"){
        str.append(" Don't have Avada Kedavra");
    }
    else {
        str.append(" Doesn't have Avada Kedavra");
    }
    print_in_middle(str);

}



