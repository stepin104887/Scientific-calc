SRC = project_main.c\
src/calculator_operations.c\

INC = -Iinc

PROJECT_NAME = calculator_operations.exe

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
	./${PROJECT_NAME}
