################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ParcialLab1.c \
../src/RequestABM.c \
../src/buscaCuitReciclo.c \
../src/buscaLocalidad.c \
../src/clientABM.c \
../src/funcionKilos.c \
../src/handyFunctions.c \
../src/harcodeos.c \
../src/imprimirClientesPendientesProcesados.c \
../src/masPedidos.c \
../src/pedidoDeRecoleccion.c \
../src/porcentajeCompletado.c \
../src/ppReciclado.c \
../src/procesarResiduos.c 

OBJS += \
./src/ParcialLab1.o \
./src/RequestABM.o \
./src/buscaCuitReciclo.o \
./src/buscaLocalidad.o \
./src/clientABM.o \
./src/funcionKilos.o \
./src/handyFunctions.o \
./src/harcodeos.o \
./src/imprimirClientesPendientesProcesados.o \
./src/masPedidos.o \
./src/pedidoDeRecoleccion.o \
./src/porcentajeCompletado.o \
./src/ppReciclado.o \
./src/procesarResiduos.o 

C_DEPS += \
./src/ParcialLab1.d \
./src/RequestABM.d \
./src/buscaCuitReciclo.d \
./src/buscaLocalidad.d \
./src/clientABM.d \
./src/funcionKilos.d \
./src/handyFunctions.d \
./src/harcodeos.d \
./src/imprimirClientesPendientesProcesados.d \
./src/masPedidos.d \
./src/pedidoDeRecoleccion.d \
./src/porcentajeCompletado.d \
./src/ppReciclado.d \
./src/procesarResiduos.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


