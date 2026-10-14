CC      := clang
ISPC    := ispc

CFLAGS  := -std=c23 -Wall -Wextra -O2
LDFLAGS :=
LDLIBS  := -lm

BUILD   := build
TARGET  := $(BUILD)/main

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(BUILD)/main.o $(BUILD)/times2.o
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

$(BUILD)/main.o: main.c times2.h | $(BUILD)
	$(CC) $(CFLAGS) -c $< -o $@

$(BUILD)/times2.o: times2.ispc | $(BUILD)
	$(ISPC) -O2 $< -o $@

$(BUILD):
	mkdir -p $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(BUILD)
