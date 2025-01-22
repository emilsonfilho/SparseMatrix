# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
INCLUDES = Includes
SRC = Src
BIN = Bin

# Objetos
OBJ = $(BIN)/Node.o

# Regra padrão para a targt definida no final
all: app
	./app

$(BIN)/Node.o: $(SRC)/Node.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

# $(BIN)/teste.o: teste.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linkagem final
app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Limpar o arquivo ao final da execução
clean:
	rm -f app