CXX = g++
INCLUDES= -I./
CXXFLAGS = -g $(INCLUDES)
SRCM= ../Vector.cpp
OBJM = $(SRCM:.cpp=.o)
LINKFLAGS= -lcppunit

testsVector: main.cpp $(OBJM)
	$(CXX) $(CXXFLAGS) -o $@ main.cpp $(OBJM) $(LINKFLAGS) $(LINKFLAGSLOG4) $(LIBLOG)

# Default compile

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@