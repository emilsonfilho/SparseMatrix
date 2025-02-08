# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
SRCS = Main.cpp $(shell find Src -name "*.cpp")
BIN = Bin

# Gerar nomes dos arquivos objeto a partir dos arquivos fonte
OBJS = $(SRCS:Src/%.cpp=$(BIN)/%.o)
OBJS := $(OBJS:Main.cpp=$(BIN)/Main.o)

# Nome do executável
TARGET = app

# Regra padrão para a target final
all: $(TARGET)
	./$(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) $^ -o $@

# Regra para compilar cada arquivo .o (necessita do diretório correspondente em Bin)
$(BIN)/%.o: Src/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

# Regra especial para compilar Main.cpp (não está em Src)
$(BIN)/Main.o: Main.cpp
	@mkdir -p $(BIN)
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

# Limpar arquivos .o e o executável
clean:
	rm -f $(OBJS) $(TARGET)
