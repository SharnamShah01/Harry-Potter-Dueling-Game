

#ifndef UNTITLED_GAME_VALUES_H
#define UNTITLED_GAME_VALUES_H

#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>

using namespace std;
typedef long long ll;

extern ll ROUND;
extern ll user_heart_left;
extern ll opponent_heart_left;
extern vector<string> spells;
extern ll wrong_answers;
extern ll right_answers;
extern ll master_of_death_user;
extern ll master_of_death_opponent;
extern ll user_avada_kedavra_staus;
extern ll opponent_avada_kedavra_status;


ll get_ROUND();
ll get_user_heart_left();
ll get_opponent_heart_left();
string get_spells();
ll get_wrong_answers();
ll get_master_of_death_user();
ll get_master_of_death_opponent();
ll get_right_answers();
ll get_user_avada_kedavra_staus();
ll get_opponent_avada_kedavra_status();


#endif //UNTITLED_GAME_VALUES_H
