Clear Browser Cache:
Before starting, clear your browser cache. The cache stores old data, which might affect the new network traffic you want to capture. This ensures that you're capturing fresh data during the lab.

Start Wireshark:
Open the Wireshark tool. This tool will capture all the network data passing through your computer, including packets for websites you visit.

Access Website:
In your browser, visit the given URL (http://gaia.cs.umass.edu/wireshark-labs/HTTP-ethereal-lab-file3.html). This will generate some network traffic that Wireshark can capture, specifically related to HTTP requests and responses.

Stop Packet Capture:
After the website fully loads, stop Wireshark from capturing more packets. By now, it should have captured all the necessary data from your browsing activity.

Filter Ethernet Protocols:
To focus on Ethernet-level data, go to Analyze > Enabled Protocols in Wireshark. Then uncheck IP to filter out unnecessary data. This will show you only Ethernet packets, which are the lowest-level network traffic.

Analyze Ethernet Frames:
Look for Ethernet frames that contain HTTP requests (like the GET request for a webpage) and HTTP responses (the content you received from the website). Examine the details of these packets to understand how the data flows through the network.

View ARP Cache:
ARP (Address Resolution Protocol) is used to map IP addresses to MAC addresses on a network. Open your computer’s command line or terminal and run the arp command to view the current ARP cache, which stores these mappings.

Clear ARP Cache:
Clear the ARP cache by running arp -d * in your terminal. This will delete all the stored mappings of IP addresses to MAC addresses on your computer, forcing it to request new ones.

Generate ARP Traffic:
After clearing the ARP cache, revisit the same website you accessed earlier. This will cause your computer to send out ARP requests to obtain the correct MAC addresses for the IP addresses involved in the network communication.

Filter ARP Packets:
In Wireshark, filter for ARP packets by adjusting your filters. This allows you to see the ARP messages that your computer sends and receives as it tries to map IP addresses to MAC addresses.

Analyze ARP Messages:
Look closely at the ARP request and reply packets. These show the process of how your computer discovers the MAC addresses associated with the IP addresses of the website you visited.

Conclusion:
In this lab, you learned how Ethernet and ARP protocols work. You traced the process of how your computer communicates with other devices over the network using Ethernet frames and how it uses ARP to map IP addresses to MAC addresses.

