# code for fun 
import socket
import os # we need this module because socket module use some functions of os 
import sys
import w
s=socket.socket()
#host=socket.gethostname()
host='SOM' # ip address apna if you are connecting with other computer
port=11912
#ports after 6000 are free
s.bind((host,port)) # connection start
s.listen(4)
print("connection started")
c,addr=s.accept()
message = "successful connection from server"
print("request accepted from clint " , str(addr))
flag = True
while flag:
    input_len = 0

    clint_message = c.recv(1024).decode()
    if clint_message in w.files:
        print("File found")
        data = "file found on server side content of file is 👇"

        # c.send(data.encode())
        # data = ""
        
        # c.send(data.encode())

        with open(clint_message) as obj:
            data_in_file = obj.read()
            data+=data_in_file
            c.send(data.encode())
            inp = input(f"write anything on file {clint_message} :  ")

            file2 = open(clint_message,'a')
            file2.write('\n')
            file2.write(inp)
            input_len = len(inp)
            
       # this needs to be rewrite
        with open(clint_message) as obj2:
             
             
            _list = obj2.readlines()
            # print(_list)

            print(f"no of line in {clint_message} are {len(_list)}")
            array = []
            for x in _list:
                array.append(x.split())
            words = int(0)
            print(array)
            for x in array:
                words+=len(x)
            words+=input_len
            print(f"no of words in {clint_message} are {words}")
            s.close()
            flag = False
            

        
        

    else :
        clint_message = "Requested file not found breaking the connection"
        print(clint_message)
        c.send(clint_message.encode())
        s.close()
        flag = False




