################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/TestCases/CircularLinkedListTest.c \
../src/TestCases/DoublyLinkedListTest.c \
../src/TestCases/QueueTest.c \
../src/TestCases/SinglyLinkedListTest.c \
../src/TestCases/StackTest.c 

OBJS += \
./src/TestCases/CircularLinkedListTest.o \
./src/TestCases/DoublyLinkedListTest.o \
./src/TestCases/QueueTest.o \
./src/TestCases/SinglyLinkedListTest.o \
./src/TestCases/StackTest.o 

C_DEPS += \
./src/TestCases/CircularLinkedListTest.d \
./src/TestCases/DoublyLinkedListTest.d \
./src/TestCases/QueueTest.d \
./src/TestCases/SinglyLinkedListTest.d \
./src/TestCases/StackTest.d 


# Each subdirectory must supply rules for building sources it contributes
src/TestCases/%.o: ../src/TestCases/%.c
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


