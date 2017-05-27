################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CC_SRCS += \
../src/lex.cc \
../src/parse.cc \
../src/parseconstructor.cc 

CPP_SRCS += \
../src/main.cpp \
../src/structures.cpp 

CC_DEPS += \
./src/lex.d \
./src/parse.d \
./src/parseconstructor.d 

OBJS += \
./src/lex.o \
./src/main.o \
./src/parse.o \
./src/parseconstructor.o \
./src/structures.o 

CPP_DEPS += \
./src/main.d \
./src/structures.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cc
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/gtk-2.0/ -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -O2 -g -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

src/%.o: ../src/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -I/usr/include/gtk-2.0/ -I/usr/include/atk-1.0 -I/usr/include/cairo -I/usr/include/glib-2.0 -I/usr/include/gdk-pixbuf-2.0 -I/usr/include/pango-1.0 -I/usr/lib/x86_64-linux-gnu/glib-2.0/include -I/usr/lib/x86_64-linux-gnu/gtk-2.0/include -O2 -g -Wall -c -fmessage-length=0 -std=c++11 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


