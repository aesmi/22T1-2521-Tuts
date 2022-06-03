CC=gcc
CFLAGS=-Wall -Werror

length: length.o List.o
length.o: length.c List.h

count_odds: count_odds.o List.o
count_odds.o: count_odds.c List.h

delete_evens: delete_evens.o List.o
delete_evens.o: delete_evens.c List.h

fib: fib.o
fib.o: fib.c

List.o: List.c List.h

clean:
	rm -f *.o length count_odds delete_evens fib
