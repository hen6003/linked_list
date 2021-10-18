override CFLAGS  += -Iinclude
override LDFLAGS +=

OUT := test

SRCS := $(wildcard src/*.c)
OBJS := $(SRCS:.c=.o)

all: ${OUT}

%.o: %.c
	${CC} -o $@ -c $< ${CFLAGS}

${OUT}: ${OBJS}
	${CC} -o $@ $^ ${LDFLAGS}

debug:
	${MAKE} -B CFLAGS="-g -O0" ${OUT}

clean:
	rm -f ${OBJS} ${OUT}

.PHONY: clean debug
