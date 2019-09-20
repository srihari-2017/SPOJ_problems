# Problem : JULKA - Julka
# author : srihari vasupalli
# college : JNTU KAKINADA
# language : Python3


t = 10        # input will have 10 test cases so t = 10

while t > 0:  # for each test case
    x = int(input())    # The first line says how many apples both girls have together
    y = int(input())    # The second line says how many more apples Klaudia has
    n = (x-y)//2
    print(x-n)          # The first line should contain the number of apples belonging to Klaudia.
    print(n)            # The second line should contain the number of apples belonging to Natalia.
    t = t-1
