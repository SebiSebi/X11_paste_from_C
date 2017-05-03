.PHONY: build run clean

build: paste
	
paste: paste.c
	gcc paste.c -o paste -lX11 -lxdo

run: paste
	./paste

clean:
	rm -rf paste

