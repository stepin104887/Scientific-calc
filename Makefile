SRC=src/calculator_operations.h\
main.c

INC=-Iinc

PROJECT_NAME=calculator_operations.c

$(PROJECT_NAME):$(SRC)
  gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run:$(PROJECT_NAME)
  ./${PROJECT_NAME}

