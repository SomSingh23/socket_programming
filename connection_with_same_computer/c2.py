import socket
connection = socket.socket()
connection.connect(('SOM',5994))
while True:
    data = input("-> ")
    connection.send(data.encode())
    data = connection.recv(1000).decode()
    print(data)
    connection.close()
    break
