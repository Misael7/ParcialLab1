################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ParcialLab1.c \
../src/RequestABM.c \
../src/clientABM.c \
../src/handyFunctions.c \
../src/pedidoDeRecoleccion.c \
../src/procesarResiduos.c 

OBJS += \
./src/ParcialLab1.o \
./src/RequestABM.o \
./src/clientABM.o \
./src/handyFunctions.o \
./src/pedidoDeRecoleccion.o \
./src/procesarResiduos.o 

C_DEPS += \
./src/ParcialLab1.d \
./src/RequestABM.d \
./src/clientABM.d \
./src/handyFunctions.d \
./src/pedidoDeRecoleccion.d \
./src/procesarResiduos.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '

