################################################################################
# Automatically-generated file. Do not edit!
################################################################################

SHELL = cmd.exe

# Each subdirectory must supply rules for building sources it contributes
LM35.obj: ../LM35.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/cl430" --cmd_file="C:\Users\Tinh Ly\workspace_v7\end_to_end\smpl_config_ED_ACK.dat" --cmd_file="C:\Users\Tinh Ly\workspace_v7\end_to_end\smpl_nwk_config_ED_ACK.dat"  -vmsp --use_hw_mpy=none --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp/boards/MSP430G2553LP" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp/drivers" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/mrfi" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/simpliciti/nwk" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/simpliciti/nwk_applications" --advice:power="all" --define=__MSP430G2553__ --define=MRFI_CC1101 -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="LM35.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '

main_LinkListen_Static.obj: ../main_LinkListen_Static.c $(GEN_OPTS) | $(GEN_HDRS)
	@echo 'Building file: $<'
	@echo 'Invoking: MSP430 Compiler'
	"C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/bin/cl430" --cmd_file="C:\Users\Tinh Ly\workspace_v7\end_to_end\smpl_config_ED_ACK.dat" --cmd_file="C:\Users\Tinh Ly\workspace_v7\end_to_end\smpl_nwk_config_ED_ACK.dat"  -vmsp --use_hw_mpy=none --include_path="C:/ti/ccsv7/ccs_base/msp430/include" --include_path="C:/ti/ccsv7/tools/compiler/ti-cgt-msp430_16.9.0.LTS/include" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp/boards/MSP430G2553LP" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/bsp/drivers" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/mrfi" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/simpliciti/nwk" --include_path="C:/Users/Tinh Ly/workspace_v7/end_to_end/Components/simpliciti/nwk_applications" --advice:power="all" --define=__MSP430G2553__ --define=MRFI_CC1101 -g --printf_support=minimal --diag_warning=225 --diag_wrap=off --display_error_number --preproc_with_compile --preproc_dependency="main_LinkListen_Static.d" $(GEN_OPTS__FLAG) "$<"
	@echo 'Finished building: $<'
	@echo ' '


