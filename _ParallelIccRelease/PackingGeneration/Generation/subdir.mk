################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../PackingGeneration/Generation/GenerationManager.cpp 

OBJS += \
./PackingGeneration/Generation/GenerationManager.o 

CPP_DEPS += \
./PackingGeneration/Generation/GenerationManager.d 


# Each subdirectory must supply rules for building sources it contributes
PackingGeneration/Generation/%.o: ../PackingGeneration/Generation/%.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: Cygwin C++ Compiler'
	mpiicpc -DPARALLEL -DMPICH_IGNORE_CXX_SEEK -DBOOST_DISABLE_ASSERTS -DMPICH_SKIP_MPICXX -I../Externals/Boost -I../PackingGeneration -O3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$(@:%.o=%.d)" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


