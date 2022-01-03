def listZero(number):
    global amount
    if number == groupMember:
        return
    else:
        amount.append(0)
        number+=1
        listZero(number)

def memberName():
    line = input()
    return line.split(' ')

def getter(i, moneyGiven, personNumber, giveList):
    if personNumber==0:
        return
    
    global amount

    amount[i] += (moneyGiven % personNumber) - moneyGiven
    receive = moneyGiven // personNumber

    for x in giveList:
        amount[names.index(x)] += receive

def info(n):
    if n == groupMember:
        return
    else:
        give = input()
        giveList = give.split(" ")
        i = names.index(giveList[0])
        moneyGiven = int(giveList[1])
        personNumber = int(giveList[2])
        
        getter(i, moneyGiven, personNumber, giveList[3:])
        
        n+=1
        info(n)

def display():
    for x in range(len(names)):
        print(names[x], amount[x])

count = 0
while True:
    amount = []
    try:
        groupMember = int(input())
        if count > 0:
            print()
        listZero(0)
        names = memberName()
        info(0)
        display()
        count += 1
    except EOFError:
        break
