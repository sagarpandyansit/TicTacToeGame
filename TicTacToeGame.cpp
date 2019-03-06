#include<iostream>
#include<algorithm>
using namespace std;
void formatdraw()
{
    cout << "  format: 1 | 2 | 3"<<endl;
    cout << "          4 | 5 | 6"<<endl;
    cout << "          7 | 8 | 9"<<endl << endl;
}
void draw(char matrx[10])
{
    for(int i = 1; i < 10; i++)
    {
        if(i%3 == 0)
            cout << matrx[i] << endl;
        else
            cout << matrx[i] << " ";
    }
    cout << endl;
}
int main()
{
    char matrx[10] = {'_','_','_','_','_','_','_','_','_','_'};
    int max_move=0,temp=0,player=1;
    cout<<" start game: "<<endl;
    char playermark = 'o';
    formatdraw();
    draw(matrx);
    while(temp==0 && max_move<9)
    {
            int i,j;
            cout<<"player "<< player <<" turn " << endl;
            cout<<"Make your move"<<endl;
            int choice;
            cin>>choice;
            cout << endl;
            if(choice >= 1 && choice <= 9)
            {
                if(matrx[choice] != 'x' && matrx[choice] != 'o')
                    matrx[choice]=playermark;
                else
                {
                    while(1)
                    {
                        cout << "make a valid move" << endl;
                        cin >> choice;
                        if(choice >= 1 && choice <= 9)
                        {
                            if(matrx[choice] != 'x' && matrx[choice] != 'o')
                            {
                                matrx[choice]=playermark;
                                break;
                            }
                        }
                    }
                }
            }
            else
            {
                while(1)
                {
                    cout << "make a valid move" << endl;
                    cin >> choice;
                    if(choice >= 1 && choice <= 9)
                    {
                        if(matrx[choice] != 'x' && matrx[choice] != 'o')
                        {
                            matrx[choice]=playermark;
                            break;
                        }
                    }
                }
            }
            formatdraw();
            draw(matrx);
            if(matrx[1]==matrx[2] && matrx[1]==matrx[3] && matrx[1] != '_')
            {
             cout<<"player "<<player<<" won..."<<endl;
             temp=1;
            }
            else if(matrx[4]==matrx[5] && matrx[5]==matrx[6] && matrx[4] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[7]==matrx[8] && matrx[8]==matrx[9] && matrx[7] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[1]==matrx[4] && matrx[4]==matrx[7] && matrx[1] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[2]==matrx[5] && matrx[5]==matrx[8] && matrx[2] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[3]==matrx[6] && matrx[6]==matrx[9] && matrx[3] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[1]==matrx[5] && matrx[5]==matrx[9] && matrx[1] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
            else if(matrx[3]==matrx[5] && matrx[5]==matrx[7] && matrx[3] != '_')
            {
             cout<<"player "<<player<<" wins..."<<endl;
             temp=1;
            }
        max_move++;
        if(player==1)
        {
            player=2;
            playermark = 'x';
        }
        else
        {
            player=1;
            playermark = 'o';
        }
    }
    if(temp==0)
        cout<<"Match draw..."<<endl;
    return 0;
}
