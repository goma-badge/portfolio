#!/usr/bin/env python3
# -*- coding: utf-8 -*-

import datetime
import socket
import sys

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
        ans = datetime.datetime.now()
        ans = str(ans)
        conn.sendall(ans.encode('utf-8'))
    except OSError as msg:
        print(msg)
        conn.close()
        sys.exit(1)
    print('通信終了')
    conn.close()

sock.close()
