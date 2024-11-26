IP = input("Enter IP address: ")
list = IP.split(".")
ans= []
for string in list:
 num = int(string)
 binary = f'{num:b}'
 ans.append(binary)
out = '.'.join(ans)
print(out)
