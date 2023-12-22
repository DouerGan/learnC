CFLAGS := -Wall -g
file := ex6
all: $(file)
$(file): $(file).c
	gcc $(CFLAGS) $(file).c -o $(file)
run: $(file)
	./$(file)
clean:
	find -name "*$(file)*" -not -name "$(file).c" -exec rm -rf {} \;
