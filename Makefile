# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
INCLUDES = Includes
SRC = Src
BIN = Bin

# Objetos
OBJ = $(BIN)/HelpCommand.o $(BIN)/Invoker.o $(BIN)/main.o
CLASSES = $(SRC)/Classes
COMMAND_PATTERN = $(SRC)/CommandPattern

# Objetos
OBJ = $(BIN)/Node.o $(BIN)/Iterator.o $(BIN):HelpCommand.o $(BIN)/Invoker.o $(BIN)/main.o

# Regra padrão para a targt definida no final
all: app
	./app

$(BIN)/HelpCommand.o: $(COMMAND_PATTERN)/Commands/HelpCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Invoker.o: $(COMMAND_PATTERN)/Invoker/InvokerCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BIN)/Node.o: $(CLASSES)/Node/Node.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Iterator.o: $(CLASSES)/Iterator/Iterator.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

# $(BIN)/teste.o: test.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linkagem final
app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Limpar o arquivo ao final da execução
clean:
	rm -f app