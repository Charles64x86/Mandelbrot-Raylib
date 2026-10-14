CC = gcc
RAYFLAGS = -lraylib -lGL -lm -lpthread -ldl -lrt -lX11
main: main.c
	$(CC) main.c -o mandelbrot $(RAYFLAGS)
clean:
	rm -rf mandelbrot
run:
	$(CC) main.c -o mandelbrot $(RAYFLAGS)
	./mandelbrot
