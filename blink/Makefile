# Variáveis
SKETCH = blink.ino
PORT = /dev/ttyUSB0
FQBN = arduino:avr:uno

# Comandos
ARDUINO_CLI = arduino-cli
COMPILE = $(ARDUINO_CLI) compile --fqbn $(FQBN) $(SKETCH)
UPLOAD = $(ARDUINO_CLI) upload -p $(PORT) --fqbn $(FQBN) $(SKETCH)

# Regras
all: compile upload

compile:
	@echo "Compilando o sketch..."
	$(COMPILE)

upload:
	@echo "Fazendo upload do sketch..."
	$(UPLOAD)

clean:
	@echo "Limpando arquivos temporários..."
	rm -rf build/

.PHONY: all compile upload clean