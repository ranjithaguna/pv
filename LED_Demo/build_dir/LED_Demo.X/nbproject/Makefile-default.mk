#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

ifdef SUB_IMAGE_ADDRESS

else
SUB_IMAGE_ADDRESS_COMMAND=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=../../source/app/main.c ../../source/debug/trace.c ../../source/gpio/gpio_api.c ../../source/gpio/gpio_app.c ../../source/gpio/gpio_perphl.c ../../source/interrupt/interrupt_api.c ../../source/interrupt/interrupt_ecia_perphl.c ../../source/interrupt/interrupt_nvic_perphl.c ../../source/interrupt/pcr_api.c ../../source/interrupt/pcr_perphl.c ../../source/pic32cx/startup_pic32cx0525sg12144.c ../../source/system/system_Everglades_internal.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/_ext/1987995597/main.o ${OBJECTDIR}/_ext/794244865/trace.o ${OBJECTDIR}/_ext/1498500003/gpio_api.o ${OBJECTDIR}/_ext/1498500003/gpio_app.o ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o ${OBJECTDIR}/_ext/1996630799/interrupt_api.o ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o ${OBJECTDIR}/_ext/1996630799/pcr_api.o ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o
POSSIBLE_DEPFILES=${OBJECTDIR}/_ext/1987995597/main.o.d ${OBJECTDIR}/_ext/794244865/trace.o.d ${OBJECTDIR}/_ext/1498500003/gpio_api.o.d ${OBJECTDIR}/_ext/1498500003/gpio_app.o.d ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d ${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d ${OBJECTDIR}/_ext/1996630799/pcr_api.o.d ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/_ext/1987995597/main.o ${OBJECTDIR}/_ext/794244865/trace.o ${OBJECTDIR}/_ext/1498500003/gpio_api.o ${OBJECTDIR}/_ext/1498500003/gpio_app.o ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o ${OBJECTDIR}/_ext/1996630799/interrupt_api.o ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o ${OBJECTDIR}/_ext/1996630799/pcr_api.o ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o

# Source Files
SOURCEFILES=../../source/app/main.c ../../source/debug/trace.c ../../source/gpio/gpio_api.c ../../source/gpio/gpio_app.c ../../source/gpio/gpio_perphl.c ../../source/interrupt/interrupt_api.c ../../source/interrupt/interrupt_ecia_perphl.c ../../source/interrupt/interrupt_nvic_perphl.c ../../source/interrupt/pcr_api.c ../../source/interrupt/pcr_perphl.c ../../source/pic32cx/startup_pic32cx0525sg12144.c ../../source/system/system_Everglades_internal.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

# The following macros may be used in the pre and post step lines
Device=MEC1701H
ProjectDir="D:\depot\depot_pcs\FWEng\projects\Everglades\maincodeline\LED_Demo\build_dir\LED_Demo.X"
ProjectName=LED_Demo
ConfName=default
ImagePath="dist\default\${IMAGE_TYPE}\LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}"
ImageDir="dist\default\${IMAGE_TYPE}"
ImageName="LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}"
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IsDebug="true"
else
IsDebug="false"
endif

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
	@echo "--------------------------------------"
	@echo "User defined post-build step: [postbuild_fh.bat]"
	@postbuild_fh.bat
	@echo "--------------------------------------"

MP_PROCESSOR_OPTION=MEC1701H
MP_LINKER_FILE_OPTION=,--script="..\..\source\pic32cx\PIC32CX0525SG12144.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/_ext/1987995597/main.o: ../../source/app/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1987995597" 
	@${RM} ${OBJECTDIR}/_ext/1987995597/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1987995597/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1987995597/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1987995597/main.o.d" -o ${OBJECTDIR}/_ext/1987995597/main.o ../../source/app/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/794244865/trace.o: ../../source/debug/trace.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/794244865" 
	@${RM} ${OBJECTDIR}/_ext/794244865/trace.o.d 
	@${RM} ${OBJECTDIR}/_ext/794244865/trace.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/794244865/trace.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/794244865/trace.o.d" -o ${OBJECTDIR}/_ext/794244865/trace.o ../../source/debug/trace.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_api.o: ../../source/gpio/gpio_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_api.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_api.o ../../source/gpio/gpio_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_app.o: ../../source/gpio/gpio_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_app.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_app.o ../../source/gpio/gpio_app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_perphl.o: ../../source/gpio/gpio_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o ../../source/gpio/gpio_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_api.o: ../../source/interrupt/interrupt_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_api.o ../../source/interrupt/interrupt_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o: ../../source/interrupt/interrupt_ecia_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o ../../source/interrupt/interrupt_ecia_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o: ../../source/interrupt/interrupt_nvic_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o ../../source/interrupt/interrupt_nvic_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/pcr_api.o: ../../source/interrupt/pcr_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/pcr_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/pcr_api.o.d" -o ${OBJECTDIR}/_ext/1996630799/pcr_api.o ../../source/interrupt/pcr_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/pcr_perphl.o: ../../source/interrupt/pcr_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o ../../source/interrupt/pcr_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o: ../../source/pic32cx/startup_pic32cx0525sg12144.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/886568118" 
	@${RM} ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d 
	@${RM} ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d" -o ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o ../../source/pic32cx/startup_pic32cx0525sg12144.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o: ../../source/system/system_Everglades_internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1596626179" 
	@${RM} ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_ICD4=1  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d" -o ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o ../../source/system/system_Everglades_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
else
${OBJECTDIR}/_ext/1987995597/main.o: ../../source/app/main.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1987995597" 
	@${RM} ${OBJECTDIR}/_ext/1987995597/main.o.d 
	@${RM} ${OBJECTDIR}/_ext/1987995597/main.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1987995597/main.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1987995597/main.o.d" -o ${OBJECTDIR}/_ext/1987995597/main.o ../../source/app/main.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/794244865/trace.o: ../../source/debug/trace.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/794244865" 
	@${RM} ${OBJECTDIR}/_ext/794244865/trace.o.d 
	@${RM} ${OBJECTDIR}/_ext/794244865/trace.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/794244865/trace.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/794244865/trace.o.d" -o ${OBJECTDIR}/_ext/794244865/trace.o ../../source/debug/trace.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_api.o: ../../source/gpio/gpio_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_api.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_api.o ../../source/gpio/gpio_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_app.o: ../../source/gpio/gpio_app.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_app.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_app.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_app.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_app.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_app.o ../../source/gpio/gpio_app.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1498500003/gpio_perphl.o: ../../source/gpio/gpio_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1498500003" 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1498500003/gpio_perphl.o.d" -o ${OBJECTDIR}/_ext/1498500003/gpio_perphl.o ../../source/gpio/gpio_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_api.o: ../../source/interrupt/interrupt_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_api.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_api.o ../../source/interrupt/interrupt_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o: ../../source/interrupt/interrupt_ecia_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_ecia_perphl.o ../../source/interrupt/interrupt_ecia_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o: ../../source/interrupt/interrupt_nvic_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/interrupt_nvic_perphl.o ../../source/interrupt/interrupt_nvic_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/pcr_api.o: ../../source/interrupt/pcr_api.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_api.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_api.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/pcr_api.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/pcr_api.o.d" -o ${OBJECTDIR}/_ext/1996630799/pcr_api.o ../../source/interrupt/pcr_api.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1996630799/pcr_perphl.o: ../../source/interrupt/pcr_perphl.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1996630799" 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d 
	@${RM} ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1996630799/pcr_perphl.o.d" -o ${OBJECTDIR}/_ext/1996630799/pcr_perphl.o ../../source/interrupt/pcr_perphl.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o: ../../source/pic32cx/startup_pic32cx0525sg12144.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/886568118" 
	@${RM} ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d 
	@${RM} ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o.d" -o ${OBJECTDIR}/_ext/886568118/startup_pic32cx0525sg12144.o ../../source/pic32cx/startup_pic32cx0525sg12144.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o: ../../source/system/system_Everglades_internal.c  nbproject/Makefile-${CND_CONF}.mk
	@${MKDIR} "${OBJECTDIR}/_ext/1596626179" 
	@${RM} ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d 
	@${RM} ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o 
	@${FIXDEPS} "${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d" $(SILENT) -rsi ${MP_CC_DIR}../  -c ${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -MMD -MF "${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o.d" -o ${OBJECTDIR}/_ext/1596626179/system_Everglades_internal.o ../../source/system/system_Everglades_internal.c    -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)   ${PACK_COMMON_OPTIONS} 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    ../../source/pic32cx/PIC32CX0525SG12144.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g  -D__MPLAB_DEBUGGER_ICD4=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__ICD2RAM=1,--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_ICD4=1,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   ../../source/pic32cx/PIC32CX0525SG12144.ld
	@${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_default=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--report-mem,--memorysummary,dist/${CND_CONF}/${IMAGE_TYPE}/memoryfile.xml 
	${MP_CC_DIR}\\xc32-bin2hex dist/${CND_CONF}/${IMAGE_TYPE}/LED_Demo.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
