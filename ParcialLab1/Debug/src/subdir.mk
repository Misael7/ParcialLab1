################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/ParcialLab1.c \
../src/clientABM.c \
../src/handyFunctions.c 

OBJS += \
./src/ParcialLab1.o \
./src/clientABM.o \
./src/handyFunctions.o 

C_DEPS += \
./src/ParcialLab1.d \
./src/clientABM.d \
./src/handyFunctions.d 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


