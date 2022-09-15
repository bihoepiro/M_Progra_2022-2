#include <iostream>
using namespace std;
int main(){
    bool Jose, Carlos, Carla, Dora= true;
    if (Dora){
        Jose = false;
        if (Jose == false){
            Carlos = false;
            Carla = true;
            cout <<"primer grupo:"<< endl;
            if(Carla){
                cout <<"Carla"<< endl;
            }
            if(Jose){
                cout <<"Jose"<< endl;
            }
            if(Dora){
                cout <<"Dora"<< endl;
            }
            if(Carlos){
                cout <<"Carlos"<< endl;
            }
        }

    }


    if (Carla==true){
        Carlos = true;
        Dora = false;
        cout <<"segundo grupo:"<< endl;
        if(Carla){
            cout <<"Carla"<< endl;
        }
        if(Jose){
            cout <<"Jose"<< endl;
        }
        if(Dora){
            cout <<"Dora"<< endl;
        }
        if(Carlos){
            cout <<"Carlos"<< endl;
        }
    }

    Jose = true;
    if  (Jose = true || Carlos == true){
        Carla = false;
        cout <<"tercer grupo:"<< endl;
        if(Carla){
            cout <<"Carla"<< endl;
        }
        if(Jose){
            cout <<"Jose"<< endl;
        }
        if(Dora){
            cout <<"Dora"<< endl;
        }
        if(Carlos){
            cout <<"Carlos"<< endl;
        }
    }
}