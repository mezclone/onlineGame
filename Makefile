#test1: test.cpp common.cpp common.h
#	g++ -Wall -o test1  test.cpp common.cpp


server: server.cpp ../tinySockets/tinySockets.h ../tinySockets/tinySockets.cpp
	 g++ -Wall -o server server.cpp ../tinySockets/tinySockets.cpp