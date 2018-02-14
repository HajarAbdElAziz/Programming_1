#numOfplayers=0
player=1
coin=21
#numOfCoins=0

numOfplayers = input("Please Enter Number of players you want\n")
numOfplayers = int(numOfplayers)

while (coin>1):
    print("player number "+str(player)+" turn\n")
    print("Available coins = "+str(coin)+"\n")
    while True :
        numOfCoins = input("Please Enter Number of Coins you want\n")
        numOfCoins = int(numOfCoins)
        if (numOfCoins>0 and numOfCoins<4):
            break;
    coin-=numOfCoins
    if (coin >= 1):
        player+=1
    if (player>numOfplayers):
        player=1


print("OPPS , sorry player "+str(player)+" Game Over :(\n")
