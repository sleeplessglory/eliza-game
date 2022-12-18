win:
	g++ -std=c99 -Wall -Wpedantic eliza.cpp utils.c functions.c -o gamewin.exe
	./gamewin.exe
linux:
	g++ eliza.cpp utils.c functions.c -o gamelinux 
	./gamelinux
installemsdk: 
	cd .. && git clone https://github.com/emscripten-core/emsdk.git
	cd ../emsdk  && emsdk install latest && emsdk activate latest && emsdk_env.bat && cd ../el++ && emcc eliza.cpp utils.c web.c -s NO_EXIT_RUNTIME=0 -o eliza++.html -sSINGLE_FILE -sASYNCIFY