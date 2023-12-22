CFLAGS := -Wall -g
TARGET := ex10
all: $(TARGET)
$(TARGET): $(TARGET).c
	gcc $(CFLAGS) $^ -o $@
run: $(TARGET)
	./$(TARGET)
clean:
	find -name "*$(TARGET)*" -not -name "$(TARGET).c" -exec rm -rf {} \;
rebuild:
	make clean
	make
