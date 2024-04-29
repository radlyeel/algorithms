PROG = demo

# Call as "make SRC=main", and add specialization here and at check: as needed
OBJS = $(SRC).o
CXX = g++
CXXFLAGS = -Wall -Werror -std=c++20
LIBS =

$(PROG): $(OBJS)
	$(CXX) $(OBJS) -o $(PROG) $(LIBS)
	
clean:
	rm -f *.o $(PROG)

check: $(PROG)
	./$(PROG)
