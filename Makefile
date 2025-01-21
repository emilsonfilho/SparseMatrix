# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
INCLUDES = Includes
SRC = Src
BIN = Bin

# Diretórios adicionais
COMMANDS = Src/CommandPattern/Commands
CONTEXTS = Src/CommandPattern/Contexts
INVOKER = Src/CommandPattern/Invoker

# Objetos
OBJ = $(BIN)/HelpCommand.o $(BIN)/Invoker.o $(BIN)/main.o

# Regra padrão para a targt definida no final
all: app
	./app

$(BIN)/HelpCommand.o: $(COMMANDS)/HelpCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Invoker.o: $(INVOKER)/InvokerCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/main.o: main.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linkagem final
app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Limpar o arquivo ao final da execução
clean:
	rm -f app