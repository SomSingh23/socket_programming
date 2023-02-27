data = input()
divisor = input()
for x in range(len(divisor)-1):
    data+='0'
cdivisor = divisor
zero_divisor = ""
for x in divisor:zero_divisor+='0'
starting = data[:4]
loda = len(divisor)
bitch_answer = ""
while True:
    if(loda==len(data)-1):break
    som = ""
    for (x,y) in zip(starting,divisor):
        if x!=y:som+='1'
        else : som+='0'
    starting = starting[1:]
    starting+=data[loda]
    print(starting)
    loda+=1
    if(starting[0]=='0'):
        bitch_answer+='0'
        divisor = zero_divisor
    else :
        bitch_answer+='1'
        divisor=cdivisor
    
print("final answer"  , bitch_answer)