CC=gcc
all: hellofriend cookie pyrymadcalc tom triangle grade cat_age

hellofriend: ./src/hello.c
	$(CC) -g ./src/hello.c -o ./bin/hellofriend -lm
cookie: ./src/cookie.c
	$(CC) -g ./src/cookie.c -o ./bin/cookie -lm
pyrymadcalc: ./src/Pyrymad_calc.c
	$(CC) -g ./src/Pyrymad_calc.c -o ./bin/Pyrymad_calc -lm
tom: ./src/tom.c
	$(CC) -g ./src/tom.c -o ./bin/tom -lm
triangle: ./src/triangle.c
	$(CC) -g ./src/triangle.c -o ./bin/triangle -lm
grade: ./src/grade.c
	$(CC) -g ./src/grade.c -o ./bin/grade -lm
cat_age: ./src/cat_age.c
	$(CC) -g ./src/cat_age.c -o ./bin/cat_age -lm
.PHONY: uninstall
.PHONY: install
.PHONY: clean

clean:
	rm -f ./bin/*
install:
	cp ./bin/* /bin/
uninstall:
	rm /bin/hellofriend
	rm /bin/cookie
	rm /bin/Pyrymad_calc
	rm /bin/tom
	rm /bin/triangle
	rm /bin/grade