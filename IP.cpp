Steps for Wireshark Lab: IP

1. Start Wireshark: Open Wireshark and begin packet capture.

2. Run Traceroute:
For Windows: Use PingPlotter to send traceroute packets with the following packet sizes:
56 bytes
2000 bytes
3500 bytes
Adjust these in Edit > Advanced Options > Packet Options, then press Trace and Resume after each size change.
For Linux/Unix: Run traceroute commands with varying sizes using:
traceroute <destination> 56
traceroute <destination> 2000
traceroute <destination> 3500


3. Stop Capture: End the packet capture in Wireshark after sending all traceroute packets.

4. Analyze Captured Trace: Examine the ICMP Echo Request or UDP packets sent by your computer and the ICMP TTL-exceeded messages returned by intermediate routers.

5. Inspect IP Details:
Select an ICMP Echo Request packet.
Expand the Internet Protocol section in the packet details window.

Conclusion:
Traced and analyzed IP protocol details, including datagram structure and TTL behavior, using Wireshark.
