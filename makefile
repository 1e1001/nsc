build:
	rm nsc -f
ifdef CMP
	echo "#define COMPILER \"$(CMP)\"" >ma.h
	$(CMP) main.n.c -o nsc
	rm ma.h
else
	echo "#define COMPILER \"gcc\"" >ma.h
	gcc main.n.c -o nsc
	rm ma.h
endif

debug: build
	bash test.sh
	rm test

install: build
ifdef OVR
ifdef LOC
	echo "install nsc into $(LOC)"
	cp ./nsc $(LOC)
else
	echo "install nsc into /usr/bin/nsc"
	cp ./nsc /usr/bin/nsc
endif
else
ifdef LOC
	bash ih1.sh $(LOC)
else
	bash ih2.sh
endif
endif

uninstall:
ifdef LOC
	rm $(LOC)
else
	rm /usr/bin/nsc
endif
