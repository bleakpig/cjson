exefile := leptjson_test

$(exefile) : leptjson.c test.c
	gcc leptjson.c test.c -o $@

.PHONY : clear

clear :
	rm $(exefile).exe