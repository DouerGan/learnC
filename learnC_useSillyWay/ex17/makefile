CFLGAS := -g -Wall
TARGET := ex17
all: $(TARGET)
$(TARGET): $(TARGET).c
	gcc $(CFLGAS) $^ -o $@
run: $(TARGET)
	./$(TARGET)
clean:
	find -name "*$(TARGET)*" -not -name "$(TARGET).c" -delete
rebuild:
	make clean
	make
