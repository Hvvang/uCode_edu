all: getsource getheader install clean

getsource:
	 cp ./src/*.c .

getheader:
	cp ./inc/*.h .

install:
	clang -Wall -Werror -Wextra -Wpedantic -o race04 *.c

uninstall:
	rm -rf h
clean:
	rm -rf *.o
	rm -rf *.c
	rm -rf *.h

reinstall: uninstall install clean
