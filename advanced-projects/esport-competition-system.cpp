#include <iostream>
#include <limits>
#include <string>

using namespace std;

int main(){

    int i, j, k=0;
    int minut, secnd, minINsec, min=INT_MAX, max=INT_MIN, sum[6], *ptr;
    string group[1][6], player[6][4], champ; // Declarations are statements

    cout<<"---------E-SPORT COMPETITION POLITEKNIK MERSING---------";

    for(i=0; i<6; i++){

        cout<<"\nEnter Group Name : ";
        getline(cin>>ws, group[k][i]);

            for(j=0; j<3; j++){
                cout<<"Enter Player Name "<<j+1<<":";
                cin>>player[i][j];
            }

        cout<<"Player "<<group[k][i]<<" is : "<<player[i][0]<<", "<<player[i][1]<<", "<<player[i][2];
        cout<<"\nGroup Leader is : "<<player[i][0]<<endl;
        cout<<"Enter Time Finish The Games in Minutes and Second : ";

        cout<<"\nEnter Minutes : ";
        cin>>minut;
        cout<<"Enter Second : ";
        cin>>secnd;

        minINsec = minut*60;
        sum[i] = minINsec+secnd;
        ptr = &sum[i];

        cout<<"Total Time in Finish The Game is : "<<minut<<" Minutes and "<<secnd<<" Seconds.";
        cout<<"\nTotal Second For Group "<<group[k][i]<<" is : "<<*ptr;

        if(*ptr < min){
            min = *ptr;
            champ = group[k][i];
        } else if (*ptr > max){
            max = *ptr;
        }

    cout<<"\n--------------------------------------------------------";

    }

    cout<<"\nWinner of The Competition is : "<<champ<<" and Score is : "<<min;

    return 0;
}
