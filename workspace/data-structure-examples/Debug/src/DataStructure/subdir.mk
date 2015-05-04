################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/DataStructure/CircularLinkedList.c \
../src/DataStructure/DoublyLinkedList.c \
../src/DataStructure/Queue.c \
../src/DataStructure/SinglyLinkedList.c \
../src/DataStructure/Stack.c 

OBJS += \
./src/DataStructure/CircularLinkedList.o \
./src/DataStructure/DoublyLinkedList.o \
./src/DataStructure/Queue.o \
./src/DataStructure/SinglyLinkedList.o \
./src/DataStructure/Stack.o 

C_DEPS += \
./src/DataStructure/CircularLinkedList.d \
./src/DataStructure/DoublyLinkedList.d \
./src/DataStructure/Queue.d \
./src/DataStructure/SinglyLinkedList.d \
./src/DataStructure/Stack.d 


# Each subdirectory must supply rules for building sources it contributes
src/DataStructure/%.o: ../src/DataStructure/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


