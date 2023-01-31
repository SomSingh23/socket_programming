import socket
import os
s=socket.socket()
from write import k3
#host=socket.gethostname() #server hostname
host='192.168.18.181' # vatsal ip address 
port=11912 #same as server
s.connect((host,port))
# while True:
# fileToSend = open(“ToSend.txt”,”r”)
# fileToSend = open('open.txt','r')
# content = fileToSend.read()
    # for x in range(100):
while True:
        

        content = input("->  ")
        if(content=="bye"):break
        s.send(content.encode())
        # if(content =='Bye'):break
        data = s.recv(1024).decode()
        if(data=="connection break"):
            print("server ended the connection on hi request")
        else : print("server : ",data)



