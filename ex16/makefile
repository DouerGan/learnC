CFLGAS := -g -Wall
TARGET := ex16
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
