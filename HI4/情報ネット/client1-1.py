#!/usr/bin/env python3
# -*- coding: utf-8 -*- 

import socket
import sys

host = "127.0.0.1"
port = 10015
bufsize = 4096

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.settimeout(3)

try:
    sock.connect((host, port))
except OSError as msg:
    print(msg)
    sys.exit(1)

data = str(input("please input a width > "))
data2 = str(input("please input a height > "))
sock.sendall(data.encode('utf-8'))
sock.sendall(data2.encode('utf-8'))

msg = sock.recv(bufsize)
msg = msg.decode('utf-8')
print('(Received) square measure = ',msg)

sock.close()
