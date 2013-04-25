TEX = pdflatex
MAIN = main.tex

all: $(MAIN) #clean
	$(TEX) $(MAIN)
	$(TEX) $(MAIN)

copen: all
	open main.pdf

.PHONY:
clean:
	rm *.aux *.pdf *.log
