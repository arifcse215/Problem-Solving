import sys

def cal(num, count):
    if num == 1:
        count += 1
        return count
    elif num%2 == 1:
        num = 3*num+1
        count += 1
        return cal(num, count)
    else:
        num = int(num/2)
        count += 1
        return cal(num, count)


def func(num1, num2):
    global maximum
    ans = cal(num1, 0)
    if maximum < ans:
        maximum = ans
    num1 += 1
    if num1 > num2:
        return maximum
    else:
        return func(num1, num2)


for x in sys.stdin:
    num1, num2 = map(int, x.split()[:2])

    maximum = 0
    ans = func(num1, num2)
    print(num1, ' ', num2,' ',ans)                    