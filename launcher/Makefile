
.PHONY: all clean install

CPP     = i686-w64-mingw32-g++-win32
WINDRES = i686-w64-mingw32-windres

OBJ = main.o res.o
PRG = Launcher.exe

CFLAGS = -O2 -Wall
LDFLAGS = -static-libgcc -static-libstdc++ -ldbgeng -luuid -s -Wl,--subsystem,windows

all: ${PRG}

install: all
	cp ${PRG} ../

clean:
	rm -f ${OBJ} ${PRG} ../${PRG}

main.o: main.c
	${CPP} ${CFLAGS} -c "$<" -o "$@"

res.o: res.rc icon.ico
	${WINDRES} -J rc -i "$<" -o "$@"

${PRG}: ${OBJ}
	${CPP} -o "$@" ${OBJ} ${LDFLAGS}
