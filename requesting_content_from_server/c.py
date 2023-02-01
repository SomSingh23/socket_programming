import socket
import os
import sys

def client_program():
    host = 'SOM' # as both code is running on same pc
    port = 11912  # socket server port number

    client_socket = socket.socket()  # instantiate
    client_socket.connect((host, port))  # connect to the server

    message = input(" which file you want from server -> ")  # take input

    while True:
        client_socket.send(message.encode())  # send message

        data = client_socket.recv(1024).decode()  # receive response

        print('Received from server: ' + data)  # show in terminal
        break
        message = input(" -> ")  # again take input
        

    client_socket.close()  # close the connection


if __name__ == '__main__':
    client_program()