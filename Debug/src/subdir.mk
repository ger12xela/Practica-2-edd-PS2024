################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/Contacto.cpp \
../src/CrearG.cpp \
../src/GestionC.cpp \
../src/Grupo.cpp \
../src/Insercion.cpp \
../src/Split.cpp 

CPP_DEPS += \
./src/Contacto.d \
./src/CrearG.d \
./src/GestionC.d \
./src/Grupo.d \
./src/Insercion.d \
./src/Split.d 

OBJS += \
./src/Contacto.o \
./src/CrearG.o \
./src/GestionC.o \
./src/Grupo.o \
./src/Insercion.o \
./src/Split.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.cpp src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/Contacto.d ./src/Contacto.o ./src/CrearG.d ./src/CrearG.o ./src/GestionC.d ./src/GestionC.o ./src/Grupo.d ./src/Grupo.o ./src/Insercion.d ./src/Insercion.o ./src/Split.d ./src/Split.o

.PHONY: clean-src

