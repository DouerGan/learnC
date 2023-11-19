CFLAGS := -Wall -g
TARGET := ex8
all: $(TARGET)
$(TARGET): $(TARGET).c
	gcc $(CFLAGS) $^ -o $@
run: $(TARGET)
	./$(TARGET)
clean:
	find -name "*$(TARGET)*" -not -name "$(TARGET).c" -delete
rebuild:
	make clean
	make
