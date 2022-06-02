#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import math
import random
import socket
import sys

#host = "127.0.0.1"
port = 10015
bufsize = 4096

sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
sock.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)

sock.bind(('', port))
sock.listen(1)

randomnum = random.randint(1,20)

while True:
    conn,addr = sock.accept()
    print('client1 connected!', addr)
    conn2,addr2 = sock.accept()
    print('client2 connected!', addr)
    print(randomnum) #debug用
    try:
        conn.sendall("you are client 1: send number".encode('utf-8'))
        data = conn.recv(bufsize)
        conn2.sendall("you are client 2: send number".encode('utf-8'))
        data2 = conn2.recv(bufsize)
        try:
            data = data.decode('utf-8')
            data2 = data2.decode('utf-8')
        except UnicodeDecodeError as msg:
            print(msg)
            conn.close()
            conn2.close()
            sys.exit(1)
        print('cliant1 decided number : ',data)
        print('cliant2 decided number : ',data2)
        try:
            data1_int = math.fabs(int(data) - randomnum)
            data2_int = math.fabs(int(data2) - randomnum)
            print(data1_int,data2_int)
            if(data1_int > data2_int):
                ans = "client2 win"
                randomnum = random.randint(1,20)
            elif(data1_int < data2_int):
                ans = "client1 win"
            else:
                ans = "draw"
        except ValueError:
            ans = 'please input number'
            conn.sendall(ans.encode('utf-8'))
            conn2.sendall(ans.encode('utf-8'))
            print('通信終了')
            conn.close()
            conn2.close()
            continue
        ans = str(ans)
        conn.sendall(ans.encode('utf-8'))
        conn2.sendall(ans.encode('utf-8'))
    except OSError as msg:
        print(msg)
        conn.close()
        conn2.close()
        sys.exit(1)
    print('通信終了')
    conn.close()
    conn2.close()

sock.close()
