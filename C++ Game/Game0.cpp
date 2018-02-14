#include <iostream>

using namespace std;

int main()
{
    int numOfplayers=0;
    int player=1;
    int coin=21;
    int numOfCoins=0;
    cout<<"Please Enter Number of players you want"<<endl;
    cin>>numOfplayers;
    //3shan awl ma yeb2a 1 yetla3
    while (coin>1)
    {
        cout<<"player number "<<player<<" turn"<<endl;
        cout<<"Available coins = "<<coin<<endl;
        do
        {
            cout<<"Please Enter Number of Coins you want "<<endl;
            cin>>numOfCoins;
        }
        while (numOfCoins<0 || numOfCoins>3);
        coin-=numOfCoins;
        //3shan law 2akher user sa7ab el 3
        if (coin>=1)
        player++;
        if (player>numOfplayers)
            player=1;
    }
    cout<<"OPPS , sorry player "<<player<<" Game Over :("<<endl;
    return 0;
}
