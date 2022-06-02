#!/usr/bin/env python3
# -*- coding: utf-8 -*-

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
    print('connected!', addr)
    #print(randomnum) #debug用
    try:
        data = conn.recv(bufsize)
        try:
            data = data.decode('utf-8')
        except UnicodeDecodeError as msg:
            print(msg)
            conn.close()
            sys.exit(1)
        print('cliant decided number : ',data)
        try:
            if(data == str(randomnum)):
                ans = "correct!"
                randomnum = random.randint(1,20)
            else:
                ans = "fairule!"
        except ValueError:
            ans = 'please input number'
            conn.sendall(ans.encode('utf-8'))
            print('通信終了')
            conn.close()
            continue
        ans = str(ans)
        conn.sendall(ans.encode('utf-8'))
    except OSError as msg:
        print(msg)
        conn.close()
        sys.exit(1)
    print('通信終了')
    conn.close()

sock.close()
