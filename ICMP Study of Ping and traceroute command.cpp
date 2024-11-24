Wireshark Lab: ICMP - Ping and Traceroute Command Study (Simplified)

Steps
1. Open Wireshark: Start capturing packets with Wireshark.

2. Use Ping Command:
Send a few ping requests to a specific destination (e.g., ping <destination IP>). This tests the connection and measures round-trip time.
Use Traceroute Command:

3. Use the traceroute command to check the route packets take to reach the destination. Each hop along the route sends back an ICMP response.
4. Stop Wireshark: After running the commands, stop the capture to analyze the packets.

5. Analyze Packets in Wireshark:
Look for ICMP packets. These can include Echo Request (Type 8) and Echo Reply (Type 0).
Check details like source/destination IP, checksum, sequence numbers, and more.
 
Conclusion
Used Wireshark to capture and study ICMP packets, understanding the details of ping and traceroute commands, including how packets travel and respond through the network.
