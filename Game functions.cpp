#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>
//#include "GAME VALUES.h"

using namespace std;

string suggest_spells(string s){
    if(s == "Stupefy"){
        return "Protego";
    }

    else if(s == "Expelliarmus"){
        vector<string> tmp = {"Duck","Attach wand to strap"};
        std::random_shuffle(tmp.begin(), tmp.end());
        string re = tmp[0];

        return re;
    }

    else if(s == "Sectumsempra"){
        return "Vulnera Sanentur";
    }

    return "this is shown as it was needed to return a string";



}

string round_left_finder(ll R){
    string r = "ROUND ";
    string pu = to_string(R);
    cout<<r<<endl;
    r.append(pu);
    return r;
}
