1. Open Command Prompt
Press Win + R, type cmd, and press Enter.

2.Execute Commands One by One

Command 1: ping

Purpose: Test connectivity to another device or website.
Steps:
Type:
cmd
Copy code
ping www.google.com
Observe the response time and packet loss details.
Command 2: ipconfig

Purpose: Display network configuration details like IP address, subnet mask, and gateway.

Steps:

Type:
cmd
Copy code
ipconfig
Review the displayed network information.
To see more details:

cmd
Copy code
ipconfig /all
Command 3: hostname

Purpose: Display your computer's hostname.
Steps:
Type:
cmd
Copy code
hostname
Observe the hostname of your system.
Command 4: tracert

Purpose: Trace the path packets take to a destination (similar to traceroute in Linux).
Steps:
Type:
cmd
Copy code
tracert www.google.com
Review the path and hops taken by the data packets.
Command 5: arp

Purpose: Display and modify the ARP (Address Resolution Protocol) cache.
Steps:
Type:
cmd
Copy code
arp -a
Review the list of IP addresses and their corresponding MAC addresses.
Command 6: netstat

Purpose: Display network statistics and current connections.
Steps:
Type:
cmd
Copy code
netstat -an
Observe active connections and their states (listening, established, etc.).
Command 7: nslookup

Purpose: Get information about DNS servers and domain name resolution.
Steps:
Type:
cmd
Copy code
nslookup www.google.com
Review the server and IP address details for the domain.
Command 8: pathping

Purpose: Combine ping and tracert to test the path and packet loss.
Steps:
Type:
cmd
Copy code
pathping www.google.com
Observe the detailed path and latency information.

3. Observe the Output
For each command, carefully review the information displayed in the Command Prompt.

4. Understand the Output
ping: Confirms if another device is reachable.
ipconfig: Provides your network settings.
hostname: Displays your computer's name.
tracert: Maps the route to a target host.
arp: Shows IP-to-MAC address mappings.
netstat: Lists active connections and ports.
nslookup: Resolves domain names to IPs.
pathping: Analyzes connectivity and performance on a path.

5. Document Results
Take screenshots or note the output of each command for future reference.
6. Summarize Observations
Write a summary of what you learned from each command and how it helps in networking.

Conclusion
By following these steps, you have successfully studied and implemented basic networking commands in Windows. These commands are essential for troubleshooting and understanding network configurations.






