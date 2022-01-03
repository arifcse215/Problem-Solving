while True:
    try:
        n = int(input())
        p = int(input())
    except ValueError:
        break

    k = p**(1/n)
    print(round(k))