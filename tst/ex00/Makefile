CC = g++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all: btc

btc: main.cpp BitcoinExchange.cpp
	$(CC) $(CFLAGS) -o btc main.cpp BitcoinExchange.cpp

clean:
	rm -f btc
