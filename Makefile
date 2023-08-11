# Here is the rule:
#<TARGET> : <DEPENDENCY FILES LIST>
# <tab>   <command>
#
# The EXECS need just the default compilation, with perhaps -lm
#          NOTE IF IT EXTENDS TO MULTIPLE LINES DONT PUT A BLANK AFTER THE "\"
EXECS=  gcd lcm 3np1 fact do_op hello_world simple_event_count\
        stats eratosthenes fileio io print_next_char find_max \
	simple_expressions integrate \
	funcs funcs_params funcs_scope \
	list_avg_f list_avg_w list_avg_d list_avg_array  \
	related_arrays matrix_inv matmul matrix_ops\
	search string_simple\
	simple_struct linked_list graph_am \
	basic_sorts qsort qsort_extraspace msort

# These dont compile; students will complete them in class
FILLIN= fillin_if fillin_while fillin_file fillin_findmax_loop fillin_simple fillin_qsort

# This is all objs that gets used in some of the executables
OBJS=timeutil.o

# Programs other than EXECS which need some special compilation, not the default
OTHERS=simple_timing

CC=gcc
LDLIBS=-lm


# By default build all OBJS and all EXECS
all:  $(OBJS) $(EXECS) 

# This is some objs being built used mostly as local utilities
timeutil.o: timeutil.c timeutil.h
	gcc -c timeutil.c

# This is the  OTHERS built one by one
simple_timing: simple_timing.c timeutil.h $(OBJS)
	gcc -o simple_timing simple_timing.c $(OBJS)

fillin: $(FILLIN)

clean:
	rm -f $(EXECS) $(OBJS) $(FILLIN) $(OTHERS) a.out
