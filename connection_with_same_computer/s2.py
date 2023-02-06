import socket
connection = socket.socket()
connection.bind(('SOM' , 5994))
connection.listen(4)
clint,address = connection.accept()
print("connection started")
print("connection from" , str(address))
while True:
    data = clint.recv(100).decode()
    print("->",data)
            
    data=input("-> ")
    data=data.encode()
    clint.send(data)
    clint.close()
    break
    