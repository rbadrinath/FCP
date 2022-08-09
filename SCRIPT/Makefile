OUTPUT=SCRIPT
MD_FILES= 00_books.md 00_motivation.md 01_intro_crud_compile.md 02_expr_stmt_var.md 03_binary_rep.md 04_confidence_fileio.md 05_conditional_indenting.md 06_looping.md 07_more_looping.md 08_arrays.md 09_strings.md 10_strings_libraries.md 11_multid_arrays.md 12_functions.md 13_complexity_sorting_searching.md 14_more_complexity.md 15_structure.md 16_linked_list.md 17_mergesort.md 18_quicksort.md 

$(OUTPUT).md: $(MD_FILES) combine-mds.sh
	rm -f $(OUTPUT) $(OUTPUT).md
	./combine-mds.sh > $(OUTPUT)
	mv $(OUTPUT) $(OUTPUT).md

clean:
	rm -f $(OUTPUT) $(OUTPUT).md
