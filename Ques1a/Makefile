PROJECT_NAME = all.out
SRC = main.c\
src/sum.c\
src/mul.c\
src/diff.c\
test_complex.c

INC = inc
TEST = unity\unity.c

$(PROJECT_NAME): $(SRC) $(TEST)
	gcc -I $(INC) $(SRC) $(TEST) -o all.out
	
run: $(PROJECT_NAME)
	./$(PROJECT_NAME)
	
clean:
	rm /q *.out