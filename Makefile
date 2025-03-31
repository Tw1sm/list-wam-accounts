BOFNAME := listwamaccounts
COMINCLUDE := 
LIBINCLUDE := -lole32 -loleaut32 -lruntimeobject
CC_x64 := x86_64-w64-mingw32-gcc
CC_x86 := i686-w64-mingw32-gcc
CC=x86_64-w64-mingw32-clang

bof:
	mkdir -p dist
	$(CC_x64) -o dist/$(BOFNAME).x64.o $(COMINCLUDE) -Os -c src/entry.c -DBOF 
	$(CC_x86) -o dist/$(BOFNAME).x86.o $(COMINCLUDE) -Os -c src/entry.c -DBOF

test:
	mkdir -p dist
	$(CC_x64) src/entry.c -I . -g $(COMINCLUDE) $(LIBINCLUDE)  -o dist/$(BOFNAME).x64.exe
	$(CC_x86) src/entry.c -g $(COMINCLUDE) $(LIBINCLUDE) -o dist/$(BOFNAME).x86.exe

clean:
	rm dist/$(BOFNAME).*.exe
	rm dist/$(BOFNAME).*.o