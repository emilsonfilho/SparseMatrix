# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
INCLUDES = Includes
SRC = Src
BIN = Bin

# Objetos
OBJ = $(BIN)/Node.o $(BIN)/Iterator.o $(BIN)/HelpCommand.o $(BIN)/Invoker.o $(BIN)/Validation.o $(BIN)/Messages.o $(BIN)/Main.o $(BIN)/InvalidColumnException.o $(BIN)/InvalidRowException.o $(BIN)/InvalidCommandException.o $(BIN)/SparseMatrix.o $(BIN)/DifferentColsException.o $(BIN)/AreSameValues.o

CLASSES = $(SRC)/Classes
COMMAND_PATTERN = $(SRC)/CommandPattern
UTILS = $(SRC)/Utils

# Regra padrão para a targt definida no final
all: app
	./app

$(BIN)/HelpCommand.o: $(COMMAND_PATTERN)/Commands/HelpCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Invoker.o: $(COMMAND_PATTERN)/Invoker/InvokerCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Main.o: Main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BIN)/Node.o: $(CLASSES)/Node/Node.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Iterator.o: $(CLASSES)/Iterator/Iterator.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Validation.o: $(UTILS)/Validation/Validation.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Messages.o: $(SRC)/Messages/Messages.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/InvalidColumnException.o: $(SRC)/Exceptions/InvalidColumnException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/InvalidCommandException.o: $(SRC)/Exceptions/InvalidCommandException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/InvalidRowException.o: $(SRC)/Exceptions/InvalidRowException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@
  
$(BIN)/SparseMatrix.o: $(CLASSES)/SparseMatrix/SparseMatrix.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/DifferentColsException.o: $(SRC)/Exceptions/DifferentColsException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/AreSameValues.o: $(UTILS)/Complements/AreSameValues.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@
  
# $(BIN)/teste.o: test.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linkagem final
app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Limpar o arquivo ao final da execução
clean:
	rm -f app