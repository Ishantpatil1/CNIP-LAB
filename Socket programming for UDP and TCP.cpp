Steps for TCP Socket Programming

Server

1. Create a server socket and bind it to a specific port (e.g., 4444).

2. Listen for incoming client connections.

3. When a client connects:
Accept the connection.
Retrieve the current date and time.
Send the date and time to the client.
Read the client's IP address sent by the client.
Display the client details (IP address).

4. Repeat steps 2–3 for additional client connections until the server is terminated.

5. Close all streams and the server socket.
6. Stop the program.

Client
1. Create a client socket and connect to the server's port number.
2. Retrieve the client's IP address using a built-in function.
3. Send the client's IP address to the server.
4. Receive the server's date and time and display it.
5. Close all streams and the client socket.
6. Stop the program.


Steps for UDP Socket Programming

Server

1. Create two ports: one for the server and one for the client.

2. Create a datagram socket and bind it to the client port.

3. Create a datagram packet to receive messages from the client.

4. Wait for the client's message and accept it.

5. Display the client's message.

6. Get a reply message from the user.

7. Create a datagram packet and send the reply through the server port.

8. Repeat steps 3–7 until the client stops sending data.

9. Close the server socket.

10. Stop the program.

Client

1. Create two ports: one for the server and one for the client.
2. Create a datagram socket and bind it to the server port.
3. Get a message from the user to send to the server.
4. Create a datagram packet and send the message to the server.
5. Create another datagram packet to receive the server's reply.
6. Display the server's reply.
7. Repeat steps 3–6 until the user stops the conversation.
8. Close the client socket.
9. Stop the program.
