#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import socket
import sys

#host = "127.0.0.1"
port = 10015
bufsize = 4096

sock = socket.socket(socket.AF_INET,socket.SOCK_STREAM)
sock.setsockopt(socket.SOL_SOCKET,socket.SO_REUSEADDR,1)

sock.bind(('', port))
sock.listen(1)

while True:
    conn,addr = sock.accept()
    print('クライアントが接続しました', addr)
    try:
        data = conn.recv(bufsize)
        data2 = conn.recv(bufsize)
        try:
            data = data.decode('utf-8')
        except UnicodeDecodeError as msg:
            print(msg)
            conn.close()
            sys.exit(1)
        print('クライアントからの文字列: ',data)
        try:
            ans = int(int(data)*int(data2))
        except ValueError:
            ans = '整数を入力してください'
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
