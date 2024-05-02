#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include "GAME VALUES.h"

using namespace std;
typedef long long ll;


ll ROUND = 1;
ll user_heart_left = 5;
ll opponent_heart_left =10;
ll wrong_answers =0;
ll master_of_death_user =0;
ll master_of_death_opponent = 0;
ll right_answers =0;
ll user_avada_kedavra_staus=0;
ll opponent_avada_kedavra_status =0;
vector<string> spells = {"Stupefy","Expelliarmus","Sectumsempra",};

ll get_ROUND(){
    return ROUND;
}

ll get_user_heart_left(){
    return user_heart_left;
};

ll get_opponent_heart_left(){
    return opponent_heart_left;
};

ll get_wrong_answers(){
    return wrong_answers;
}

string get_spells(){
    random_shuffle(spells.begin(), spells.end());
    return spells[0];
}

ll get_master_of_death_user(){
    return master_of_death_user;
}

ll get_master_of_death_opponent(){
    return master_of_death_opponent;
}

ll get_right_answers(){
    return right_answers;
}

ll get_user_avada_kedavra_staus(){
    return user_avada_kedavra_staus;
}

ll get_opponent_avada_kedavra_status(){
    return opponent_avada_kedavra_status;
}