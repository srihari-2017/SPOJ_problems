# Problem : EIGHTS - Triple Fat Ladies
# author : srihari vasupalli
# college : JNTU KAKINADA
# language : Python3


t = int(input())    #The first line of the input contains an integer t, the number of test cases

while t > 0 :
    n = int(input())       #Each test case consists of a single line containing a single integer k
    r = 192 + (n-1)*250    # kth number whose cube ends in 888
    print(r)  
    t -= 1
#thank you
