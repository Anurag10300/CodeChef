# I'm just adding Highest Time Consuming Dishes and removing them from queue.

# Number of test cases
numtest = int(input())

# To store answer of each test case
ans = []

for _ in range(numtest):

    # sum1 is time consumed by stove 1 
    sum1 = 0
    # sum2 is time consumed by stove 2
    sum2 = 0

    
    num = int(input())

    # c stores the time consumed by dishes
    c = list(map(int,input().split()))
    # We can either sort the list and keep popping last element 
    # OR we can find max element in c and then remove it after storing in variable
    c.sort()
    for i in range(len(c)):
        num = c.pop()
        if ((sum1+num)<=sum2+num):
            sum1 = sum1+num
        else:
            sum2 = sum2+num
            
    ans.append(max(sum1,sum2))

for ele in ans:
    print(ele)