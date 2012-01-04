##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SMSReader
ConfigurationName      :=Debug
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
WorkspacePath          := "/home/phill/.codelite/SMSReader"
ProjectPath            := "/home/phill/.codelite/SMSReader"
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=phill
Date                   :=04/01/12
CodeLitePath           :="/home/phill/.codelite"
LinkerName             :=g++
ArchiveTool            :=ar rcus
SharedObjectLinkerName :=g++ -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-gstab
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
CompilerName           :=g++
C_CompilerName         :=gcc
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)__WX__ 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
MakeDirCommand         :=mkdir -p
CmpOptions             := -g $(shell wx-config --cxxflags --unicode=yes --debug=yes) $(Preprocessors)
LinkOptions            :=  -mwindows $(shell wx-config --debug=yes --libs --unicode=yes)
IncludePath            :=  "$(IncludeSwitch)." 
RcIncludePath          :=
Libs                   :=$(LibrarySwitch)tinyxml 
LibPath                := "$(LibraryPathSwitch)." 


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects=$(IntermediateDirectory)/gui$(ObjectSuffix) $(IntermediateDirectory)/main$(ObjectSuffix) $(IntermediateDirectory)/gui_message_item$(ObjectSuffix) $(IntermediateDirectory)/sms_message$(ObjectSuffix) 

##
## Main Build Targets 
##
all: $(OutputFile)

$(OutputFile): makeDirStep $(Objects)
	@$(MakeDirCommand) $(@D)
	$(LinkerName) $(OutputSwitch)$(OutputFile) $(Objects) $(LibPath) $(Libs) $(LinkOptions)

makeDirStep:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/gui$(ObjectSuffix): gui.cpp $(IntermediateDirectory)/gui$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/phill/.codelite/SMSReader/gui.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/gui$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gui$(DependSuffix): gui.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/gui$(ObjectSuffix) -MF$(IntermediateDirectory)/gui$(DependSuffix) -MM "/home/phill/.codelite/SMSReader/gui.cpp"

$(IntermediateDirectory)/gui$(PreprocessSuffix): gui.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gui$(PreprocessSuffix) "/home/phill/.codelite/SMSReader/gui.cpp"

$(IntermediateDirectory)/main$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/phill/.codelite/SMSReader/main.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/main$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main$(DependSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/main$(ObjectSuffix) -MF$(IntermediateDirectory)/main$(DependSuffix) -MM "/home/phill/.codelite/SMSReader/main.cpp"

$(IntermediateDirectory)/main$(PreprocessSuffix): main.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main$(PreprocessSuffix) "/home/phill/.codelite/SMSReader/main.cpp"

$(IntermediateDirectory)/gui_message_item$(ObjectSuffix): gui_message_item.cpp $(IntermediateDirectory)/gui_message_item$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/phill/.codelite/SMSReader/gui_message_item.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/gui_message_item$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/gui_message_item$(DependSuffix): gui_message_item.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/gui_message_item$(ObjectSuffix) -MF$(IntermediateDirectory)/gui_message_item$(DependSuffix) -MM "/home/phill/.codelite/SMSReader/gui_message_item.cpp"

$(IntermediateDirectory)/gui_message_item$(PreprocessSuffix): gui_message_item.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/gui_message_item$(PreprocessSuffix) "/home/phill/.codelite/SMSReader/gui_message_item.cpp"

$(IntermediateDirectory)/sms_message$(ObjectSuffix): sms_message.cpp $(IntermediateDirectory)/sms_message$(DependSuffix)
	$(CompilerName) $(SourceSwitch) "/home/phill/.codelite/SMSReader/sms_message.cpp" $(CmpOptions) $(ObjectSwitch)$(IntermediateDirectory)/sms_message$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/sms_message$(DependSuffix): sms_message.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) -MT$(IntermediateDirectory)/sms_message$(ObjectSuffix) -MF$(IntermediateDirectory)/sms_message$(DependSuffix) -MM "/home/phill/.codelite/SMSReader/sms_message.cpp"

$(IntermediateDirectory)/sms_message$(PreprocessSuffix): sms_message.cpp
	@$(CompilerName) $(CmpOptions) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/sms_message$(PreprocessSuffix) "/home/phill/.codelite/SMSReader/sms_message.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) $(IntermediateDirectory)/gui$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/gui$(DependSuffix)
	$(RM) $(IntermediateDirectory)/gui$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/main$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/main$(DependSuffix)
	$(RM) $(IntermediateDirectory)/main$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/gui_message_item$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/gui_message_item$(DependSuffix)
	$(RM) $(IntermediateDirectory)/gui_message_item$(PreprocessSuffix)
	$(RM) $(IntermediateDirectory)/sms_message$(ObjectSuffix)
	$(RM) $(IntermediateDirectory)/sms_message$(DependSuffix)
	$(RM) $(IntermediateDirectory)/sms_message$(PreprocessSuffix)
	$(RM) $(OutputFile)


