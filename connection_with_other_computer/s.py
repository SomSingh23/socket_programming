
import socket
import os
import sys
s=socket.socket()
#host=socket.gethostname()
host='' # put ip address of server inside quotes
port=10000
#ports after 6000 are free
s.bind((host,port)) # connection start
s.listen(4)
print("connection started")
c,addr=s.accept()
print("request accepted")
# d2,addr2 = s.accept()
print("connection from " , str(addr))
# print("connection from ",str(addr2))
while True:
    # content2 = d2.recv(1024).decode()
    content=c.recv(1024).decode()
    if content=='hi':
        break
    print (content)
    send_karo = input('->')
    c.send(send_karo.encode())
    # d2.send(send_karo.encode())
