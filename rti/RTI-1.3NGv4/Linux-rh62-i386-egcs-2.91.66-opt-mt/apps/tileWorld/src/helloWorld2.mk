############################################################### -*- Makefile -*-
#
# Filename:  helloWorld.mk
#
# Summary:   
# 
# Notes:
#   This file is only for use with GNU make version 3.78.1 or greater
#
################################################################################

OBJS = \
	llist.o \
	RTIAmbWrapper.o \
	SimFederateAmbassador.o \

HELLOWORLD_INC_DIR = ../include
HELLOWORLD_EXE_DIR = ../data
EXECUTABLE = ${HELLOWORLD_EXE_DIR}/librti.so

RTI_ROOT_DIR = ${RTI_HOME}/${RTI_BUILD_TYPE}
RTI_INC_DIR = ${RTI_ROOT_DIR}/include
RTI_LIB_DIR = ${RTI_ROOT_DIR}/lib

INC_PATH = \
	-I${HELLOWORLD_INC_DIR} \
	-I${RTI_INC_DIR}

LIB_PATH = \
	-L${RTI_LIB_DIR}

# Build targets
%.o : %.cpp
	@echo
	@echo Compiling $< ...
	@echo 
	${C++} -c -fPIC ${INC_PATH} $< -o $@
#${C++FLAGS}
default: ${EXECUTABLE}

${EXECUTABLE}: ${OBJS}
	@echo
	@echo Linking $@ ...
	@echo 
	${C++} -shared ${LDFLAGS} ${OBJS} -o $@ ${LIBS}

clean:
	rm -rf *.o core *~ .depend Templates.DB ${EXECUTABLE}
