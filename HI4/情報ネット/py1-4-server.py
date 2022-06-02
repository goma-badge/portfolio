#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import socket
import sys

port = 10015
bufsize = 4096

sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
sock.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)

sock.bind(('', port))
sock.listen(1)

memoList = list()

while True:
    conn,addr = sock.accept()
    print('connected!', addr)
    try:
        data = conn.recv(bufsize)
        try:
            data = data.decode('utf-8')
        except UnicodeDecodeError as msg:
            print(msg)
            conn.close()
            sys.exit(1)
        print('cliant decided : ',data)
        try:
            hoge = data.decode('utf-8')
            if(hoge == "SEE"):
                ans = "show " + str(len(memoList))
            elif(hoge[0:3] == "ADD"):
                memoList.append(hoge[4:])
                ans = "addok"
            elif(hoge[0:3] == "DEL"):
                memoList.pop(int(hoge[4:]))
                ans = "delok"
            else:
                print(hoge)
                ans = "please select exist mode"
        except IndexError:
            ans = 'please select exist number'
            conn.sendall(ans.encode('utf-8'))
            print('通信終了')
            conn.close()
            continue
        ans = str(ans)
        conn.sendall(ans.encode('utf-8'))
        if(ans[0:4] == "show"):
            for i in range(len(memoList)):
                ans = str(i)+" : "+memoList[i]
                print("send",ans)
                conn.sendall(ans.encode('utf-8'))
    except OSError as msg:
        print(msg)
        conn.close()
        sys.exit(1)
    print('通信終了')
    conn.close()

sock.close()
