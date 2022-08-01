OUTPUT=SCRIPT

$(OUTPUT).md:
	rm -f $(OUTPUT) $(OUTPUT).md
	./combine-mds.sh > $(OUTPUT)
	mv $(OUTPUT) $(OUTPUT).md

clean:
	rm -f $(OUTPUT) $(OUTPUT).md
