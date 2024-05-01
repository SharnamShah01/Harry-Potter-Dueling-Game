#include <iostream>
#include <bits/stdc++.h>
#include <windows.h>
#include <fstream>
#include <algorithm>
#include "print functions.cpp"
#include "Game functions.cpp"
#include "GAME VALUES.cpp"
#include <ostream>


//#include "GAME VALUES.h"


using namespace std;


void play(){
    string str = round_left_finder(get_ROUND());
    print_in_middle(str);
    n_space(2);

    print_in_middle(Health_left_printer(get_user_heart_left(),"Your "));
    print_in_middle(Health_left_printer(get_opponent_heart_left(),"Opponent's "));
    print_user_master_of_death(master_of_death_user);
    print_opponent_master_of_death(master_of_death_opponent);
    print_avada_kedavara_status("You",user_avada_kedavra_staus);
    print_avada_kedavara_status("Opponent",opponent_avada_kedavra_status);

    n_space(2);

    if(wrong_answers == 2){
        cout<<"AVADA KEDVARA INVOKED";

        if(master_of_death_user){
            string input_for_user = "Elder wand resserection stone clock of invisibility";
            print_suggested_spell(input_for_user,"AVADA KEDVARA INVOKED");
            string input;
            getline(cin,input);

            if(input == input_for_user){
                opponent_heart_left = opponent_heart_left -2;
                master_of_death_user =0;
            }

        }
        else{
            user_heart_left =0;
        }
    }

    else {
        string opponent_spell = get_spells();
        cout << "Opponent: " << opponent_spell;

        string SUGGESTED_SPELLS = suggest_spells(opponent_spell);
        string sender = "Opponent: ";
        sender.append(opponent_spell);

        print_suggested_spell(SUGGESTED_SPELLS, opponent_spell);
        if(right_answers == 3){
            print_suggested_spell("Avada Kedavra",opponent_spell);
        }

        cout << "You:";
        string INPUT;
        getline(cin, INPUT);
        string user_spell = INPUT;


        if (user_spell == SUGGESTED_SPELLS || user_spell == "Avada Kedavra") {
            if(right_answers !=3 && user_spell == "Avada Kedavra"){
                cout<<"YOU TOOK DAMAGE"<<endl;
                user_heart_left--;
                right_answers =0;
                wrong_answers++;

            }

            else if(right_answers ==3 && user_spell == "Avada Kedavra"){
                if(master_of_death_opponent){
                    cout<<"Avada Kedvara failed, opponent used master of death"<<endl;
                }
                else{
                    opponent_heart_left =0;
                }
            }
            else {
                wrong_answers = 0;
                cout << "HIT" << endl;
                opponent_heart_left = opponent_heart_left - 1;
                right_answers++;
                if(right_answers >=2){

                }
                if(right_answers ==2){

                }
            }
        }
        else if (user_spell != SUGGESTED_SPELLS) {
            cout << "you took damage" << endl;
            wrong_answers++;
            user_heart_left--;
            right_answers =0;


        }
    }

    if(opponent_heart_left == 0){
        cout<<"YOU WON"<<endl;
        return;
    }
    else if(user_heart_left == 0){
        cout<<"YOU LOST, BETTER LUCK NEXT TIME"<<endl;
    }

    print_line(100);


    if(user_heart_left > 0){
        ROUND++;

        if(wrong_answers >= 1){
            opponent_avada_kedavra_status=1;
        }
        else{
            opponent_avada_kedavra_status =0;
        }

        if(right_answers >= 2){
            user_avada_kedavra_staus =1;
        }
        else{
            user_avada_kedavra_staus=0;
        }

        if(right_answers>=2){
            master_of_death_user =1;
        }
        else{
            master_of_death_user =0;
        }

        if(wrong_answers >= 1){
            master_of_death_opponent =1;
        }
        else{
            master_of_death_opponent =0;
        }


        play();
    }




}
