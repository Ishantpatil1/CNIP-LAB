1. Open Wireshark and Start Capturing Traffic:
Open Wireshark and begin capturing packets on your network interface (Wi-Fi or Ethernet).
You can filter the traffic using tcp to capture only TCP packets.

2. Identify Client and Server Information:
Find the packet from the client (your computer) transferring the file to gaia.cs.umass.edu.
Look at the IP address and TCP port number used by the client.
Example: Client IP: 192.168.1.102, TCP Port: 1161.

3.Identify Server Information:
Look at the IP address and TCP port number used by gaia.cs.umass.edu.
Example: Server IP: 128.119.245.12, TCP Port: 80.

4.Locate TCP SYN Segment (Connection Initiation):
Find the first TCP segment in the capture where the connection is initiated (SYN segment).
Check the sequence number of this segment.
The sequence number in the SYN segment will be 0 (relative sequence number).
The SYN flag will be set to 1 (this identifies it as a SYN segment).

5. Locate TCP SYN-ACK Segment (Server Response):
Find the second segment from the server, which is a SYN-ACK reply.
Check the sequence number and acknowledgment number.
The acknowledgment number will be the sequence number of the client’s SYN segment + 1.
The SYN and ACK flags will be set to 1 in this segment (this identifies it as a SYN-ACK segment).

6. Find the TCP Segment with the HTTP POST Command:
Search for the HTTP POST command in the captured packets.
Find the sequence number of the TCP segment containing the POST request.
Note: This is the data being sent in the TCP connection.

7. Analyze the Sequence Numbers of the First Six TCP Segments:
Identify the sequence numbers of the first six TCP segments in the connection.
Find the time at which each segment was sent and when the acknowledgment (ACK) was received.
Calculate the Round Trip Time (RTT) for each segment by subtracting the sent time from the acknowledgment time.

8. Use Wireshark’s RTT Graph:
In Wireshark, select one of the TCP segments from the client to the server.
Go to Statistics → TCP Stream Graph → Round Trip Time Graph to visualize the RTT for each segment in the TCP connection.

9. Calculate EstimatedRTT:
For each subsequent TCP segment, calculate the EstimatedRTT using the formula (based on the first RTT).
EstimatedRTT = (1 - α) * EstimatedRTT + α * SampleRTT, where α = 0.125 (usually).

10. Analyze the Data:
Use this data to understand how TCP ensures reliable communication between client and server.
Look at the sequence and acknowledgment numbers, and the round-trip times to evaluate the performance of the network.
