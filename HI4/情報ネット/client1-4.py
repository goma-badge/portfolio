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

print("SEE:メモの一覧を表示")
print("ADD [任意の文字列]:メモの追加")
print("DEL [任意のメモ番号]:メモの削除")

data = str(input("select mode > "))
sock.sendall(data.encode('utf-8'))

msg = sock.recv(bufsize)
msg = msg.decode('utf-8')
print('(Received) : ',msg)
if (msg[0:4] == "show"):
    for i in range(int(msg[4:])):
        msg = sock.recv(bufsize)
        msg = msg.decode('utf-8')
        print(msg)


sock.close()
