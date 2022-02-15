# Problem statement link
# https://www.hackerrank.com/challenges/the-minion-game/problem

def minion_string(string):
    temp_str = str(string)
    vowels = 'AEIOU'
    kevsc = 0
    stusc = 0
    for i in range(len(temp_str)):
        if temp_str[i] in vowels:
            kevsc += (len(temp_str)-i)
        else:
            stusc += (len(temp_str)-i)
    
    if kevsc > stusc:
        print ("Kevin", kevsc)
    elif kevsc < stusc:
        print ("Stuart", stusc)
    else:
        print ("Draw")

if __name__ == '__main__':
    s = 'BANANA'
    p = "ANANAASDEFSD"
    minion_string(s)
    minion_string(p)