CFLAGS := -Wall -g
TARGET := ex7
all: $(TARGET)
$(TARGET): $(TARGET).c
	gcc $(CFLAGS) $(TARGET).c -o $(TARGET)
run: $(TARGET)
	./$(TARGET)
clean:
	find -name "*$(TARGET)*" -not -name "$(TARGET).c" -delete
