# Tags de configuração
CXX = g++
CXXFLAGS = -Wall -Wextra -Werror
INCLUDETAGS = -Iinclude

# Tags de diretórios
INCLUDES = Includes
SRC = Src
BIN = Bin

# Objetos
OBJ = $(BIN)/Node.o $(BIN)/Iterator.o $(BIN)/HelpCommand.o $(BIN)/Invoker.o $(BIN)/Validation.o $(BIN)/Messages.o $(BIN)/Main.o $(BIN)/InvalidColumnException.o $(BIN)/InvalidRowException.o $(BIN)/InvalidCommandException.o $(BIN)/SparseMatrix.o $(BIN)/DifferentColsException.o $(BIN)/AreSameValues.o $(BIN)/DifferentRowsException.o $(BIN)/PrintMatrixCommand.o $(BIN)/PrintMatrixContextCommand.o $(BIN)/IgnoreCin.o $(BIN)/InvalidArgumentException.o $(BIN)/ArgumentOutOfRangeException.o $(BIN)/GetCommand.o $(BIN)/GetContextCommand.o $(BIN)/NoMatricesException.o $(BIN)/GetValidNumber.o $(BIN)/ReadMatrixContextCommand.o $(BIN)/ReadMatrixCommand.o $(BIN)/ReadMatrices.o $(BIN)/GetValidString.o $(BIN)/MultiplyCommand.o $(BIN)/MultiplyContextCommand.o $(BIN)/MultiplyMatrices.o $(BIN)/SumMatrices.o $(BIN)/SumMatrixCommand.o $(BIN)/SumMatrixContextCommand.o $(BIN)/InvalidMatrixOperationException.o $(BIN)/FileIOException.o $(BIN)/Trim.o $(BIN)/FormatOperationOrigin.o $(BIN)/ShowContextCommand.o $(BIN)/ShowCommand.o


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

$(BIN)/PrintMatrixCommand.o: $(COMMAND_PATTERN)/Commands/PrintMatrixCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/PrintMatrixContextCommand.o: $(COMMAND_PATTERN)/Contexts/PrintMatrixContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/IgnoreCin.o: $(UTILS)/Tools/IgnoreCin.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/InvalidArgumentException.o: $(SRC)/Exceptions/InvalidArgumentException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ArgumentOutOfRangeException.o: $(SRC)/Exceptions/ArgumentOutOfRangeException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/DifferentColsException.o: $(SRC)/Exceptions/DifferentColsException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/AreSameValues.o: $(UTILS)/Complements/AreSameValues.cpp

	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@
  
$(BIN)/DifferentRowsException.o: $(SRC)/Exceptions/DifferentRowsException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/GetContextCommand.o: $(COMMAND_PATTERN)/Contexts/GetContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/GetCommand.o: $(COMMAND_PATTERN)/Commands/GetCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/NoMatricesException.o: $(SRC)/Exceptions/NoMatricesException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/GetValidNumber.o: $(UTILS)/Tools/GetValidNumber.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ReadMatrixContextCommand.o: $(COMMAND_PATTERN)/Contexts/ReadMatrixContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ReadMatrixCommand.o: $(COMMAND_PATTERN)/Commands/ReadMatrixCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ReadMatrices.o: $(UTILS)/Operations/ReadMatrices.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@
	
$(BIN)/GetValidString.o: $(UTILS)/Tools/GetValidString.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/MultiplyCommand.o: $(COMMAND_PATTERN)/Commands/MultiplyCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/MultiplyContextCommand.o: $(COMMAND_PATTERN)/Contexts/MultiplyContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/MultiplyMatrices.o: $(UTILS)/Operations/MultiplyMatrices.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/SumMatrices.o: $(UTILS)/Operations/SumMatrices.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/SumMatrixCommand.o: $(COMMAND_PATTERN)/Commands/SumMatrixCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/SumMatrixContextCommand.o: $(COMMAND_PATTERN)/Contexts/SumMatrixContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/InvalidMatrixOperationException.o: $(SRC)/Exceptions/InvalidMatrixOperationException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/FileIOException.o: $(SRC)/Exceptions/FileIOException.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/Trim.o: $(UTILS)/Tools/Trim.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/FormatOperationOrigin.o: $(UTILS)/Complements/FormatOperationOrigin.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ShowContextCommand.o: $(COMMAND_PATTERN)/Contexts/ShowContextCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

$(BIN)/ShowCommand.o: $(COMMAND_PATTERN)/Commands/ShowCommand.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDETAGS) -c $< -o $@

# $(BIN)/teste.o: test.cpp
# 	$(CXX) $(CXXFLAGS) -c $< -o $@

# Linkagem final
app: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

# Limpar o arquivo ao final da execução
clean:
	rm -f app