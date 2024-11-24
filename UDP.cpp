1. Select One UDP Packet
Open Wireshark and capture UDP packets.
Pick any UDP packet from the capture.

2. Examine the UDP Header
The UDP header contains 4 fields:
Source Port (2 bytes)
Destination Port (2 bytes)
Length (2 bytes)
Checksum (2 bytes)
Each field is 2 bytes long, making the total header size 8 bytes.

3. Analyze the Length Field
The Length field in the UDP header represents the total length of the UDP packet, including both the header and the data.
You can verify this by looking at the Length field in your captured UDP packet.

4. Determine Maximum UDP Payload
The maximum UDP packet size is 65,535 bytes (with the header included).
Since the header is 8 bytes, the maximum UDP payload (data) size is 65,527 bytes (65,535 - 8).

5. Find the Largest Source Port Number
The largest possible source port number in UDP is 65,535 (as the source port field is 2 bytes).

6. Identify UDP Protocol Number
To find the protocol number for UDP, examine the IP header.
The UDP protocol number is 17 in decimal, or 0x11 in hexadecimal.

7. Understand UDP Checksum Calculation
The UDP checksum is a 16-bit value computed using the UDP header, data, and a pseudo-header from the IP header.
It is the one's complement sum of all the data in these fields, with any extra bits padded to make the total length an even multiple of 16 bits.

8. Examine Request and Reply UDP Packets
Look at a pair of UDP packets: the first packet sent from your host and the reply packet.
You will observe that the source port of the first packet is the destination port in the reply, and the destination port of the first packet is the source port in the reply.

Conclusion:
By analyzing the captured UDP packets, you have studied the structure of UDP packets, including the header fields and how the data is transmitted. You also explored the checksum mechanism and the relationship between source and destination ports.
