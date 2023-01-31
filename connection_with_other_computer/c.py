import socket
import os
s=socket.socket()
#host=socket.gethostname() #server hostname
host='' # server ip address should be there inside single quotes 
port=10000 #same as server
s.connect((host,port))
while True:
# fileToSend = open(“ToSend.txt”,”r”)
    content = input("input : ")
    # for x in range(100):
     
    s.send(content.encode())
    if(content =='Bye'):break
    data = s.recv(1024).decode()
    print("server : ",data)