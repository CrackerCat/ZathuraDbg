#ifndef ZATHURA_UI_ASSEMBLER_HPP
#define ZATHURA_UI_ASSEMBLER_HPP

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <tsl/ordered_map.h>

#include "../../dialogs/dialogHeader.hpp"
#include "../tasks/editorTasks.hpp"
#include "../../app/integration/utils/hex/hex.hpp"
#include "../../../vendor/keystone/include/keystone/keystone.h"
#include <map>

#define ASM_FILE_NAME selectedFile.c_str()

typedef struct{
    ks_arch arch;
    ks_mode mode;
    ks_opt_type optionType;
    ks_opt_value optionValue;
} keystoneSettings;

extern uint64_t totalInstructions;
extern uint64_t lastInstructionLineNo;
extern std::map<std::string, std::string> addressLineNoMap;
extern std::map<std::string, int> labelLineNoMapInternal;
extern tsl::ordered_map<std::string, std::pair<uint64_t, uint64_t>> labelLineNoRange;
extern std::vector<uint16_t> instructionSizes;
extern std::stringstream assembly;
extern void initInsSizeInfoMap();
extern std::vector<std::string> labels;
extern bool isFirstLineLabel;
extern std::pair<std::string, std::size_t> assemble(const std::string& assemblyString, const keystoneSettings& ksSettings);
extern uint64_t countValidInstructions(std::stringstream& asmStream);
extern std::string getBytes(const std::string& fileName);
extern std::string getBytes(const std::stringstream& assembly);
extern uint64_t codeFinalLen;
extern ks_engine *ks;
extern std::vector<uint64_t> emptyLineNumbers;
#endif //ZATHURA_UI_ASSEMBLER_HPP
