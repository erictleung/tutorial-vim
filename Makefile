# pandoc version 1.12.4.2 tested

all: vim-tutorial.pdf

clean:
	rm vim-tutorial.pdf

.PHONY: all clean

# rules

%.pdf: %.md
	pandoc -t beamer -s $< -o $@
