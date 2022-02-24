garbage: zumbi.c  
	gcc zumbi.c -o garbage-W -Wall -pedantic

.PHONY: clean run

run: 
	./garbage

clean: 
	rm -rf garbage
