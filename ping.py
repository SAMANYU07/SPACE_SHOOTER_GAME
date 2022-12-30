from socket import *
tcp_ip = "2409:4043:4e99:961:7da3:b8a7:1749:aea2"
tcp_host = 80
buffer1 = 1024
m = "ye"
s = socket(AF_INET, SOCK_STREAM)
s.connect((tcp_ip, tcp_host))