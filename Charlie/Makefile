CCOPTION = Wall std=gnu++11 D__USE_MINGW_ANSI_STDIO=1
FLAGS = $(addprefix -,$(CCOPTION))
CC = g++
OBJ = Prey_Class.o Kangaroo_Class.o Animal_Class.o Dingo_Class.o Rabbit_Class.o Predator_Class.o Fox_Class.o main.o 
SRC_DIR = /Users/charliewatts/Documents/GitHub/major-practical/Charlie

output.out: $(OBJ) 
	 $(CC) $(FLAGS) $(OBJ) -o output.out 

Prey_Class.o: $(SRC_DIR)\Prey_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Prey_Class.cpp -o Prey_Class.o 

Kangaroo_Class.o: $(SRC_DIR)\Kangaroo_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Kangaroo_Class.cpp -o Kangaroo_Class.o 

Animal_Class.o: $(SRC_DIR)\Animal_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Animal_Class.cpp -o Animal_Class.o 

Dingo_Class.o: $(SRC_DIR)\Dingo_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Dingo_Class.cpp -o Dingo_Class.o 

Rabbit_Class.o: $(SRC_DIR)\Rabbit_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Rabbit_Class.cpp -o Rabbit_Class.o 

Predator_Class.o: $(SRC_DIR)\Predator_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Predator_Class.cpp -o Predator_Class.o 

Fox_Class.o: $(SRC_DIR)\Fox_Class.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\Fox_Class.cpp -o Fox_Class.o 

main.o: $(SRC_DIR)\main.cpp 
	 $(CC) $(FLAGS) -c $(SRC_DIR)\main.cpp -o main.o 


clean: 
	rm $(OBJ_DIR)/*.o
	rm $(BUILD_DIR)/*.out
