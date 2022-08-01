#!/bin/bash
for i in *.md ; do
	echo ""
	echo ""
	echo "[comment]: # (---------" $i "---------)" 
	cat $i
	echo ""
	echo ""
done
