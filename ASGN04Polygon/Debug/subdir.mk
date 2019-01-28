################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../ASGN04Polygon.cpp \
../Line.cpp \
../Point.cpp \
../Polygon.cpp 

OBJS += \
./ASGN04Polygon.o \
./Line.o \
./Point.o \
./Polygon.o 

CPP_DEPS += \
./ASGN04Polygon.d \
./Line.d \
./Point.d \
./Polygon.d 


# Each subdirectory must supply rules for building sources it contributes
%.o: ../%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cross G++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


