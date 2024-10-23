#include "shortcuts.hpp"

void manageShortcuts(){
    using namespace ImGui;
    ImGuiIO& io = ImGui::GetIO();
    const auto isOSX = io.ConfigMacOSXBehaviors;
    const auto alt = io.KeyAlt;
    const auto ctrl = io.KeyCtrl;
    const auto shift = io.KeyShift;
    const auto super = io.KeySuper;

    const auto isCtrlShortcut = (isOSX ? (super && !ctrl) : (ctrl && !super)) && !alt && !shift;
    const auto isCtrlShiftShortcut = (isOSX ? (super && !ctrl) : (ctrl && !super)) && shift && !alt;
    const auto isWordMoveKey = isOSX ? alt : ctrl;
    const auto isAltOnly = alt && !ctrl && !shift && !super;
    const auto isCtrlOnly = ctrl && !alt && !shift && !super;
    const auto isShiftOnly = shift && !alt && !ctrl && !super;

    io.WantCaptureKeyboard = true;
    io.WantTextInput = true;

    if (isCtrlShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_S)))){
        saveFile = true;
    }
    if (isCtrlShiftShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_S)))){
        saveFileAs = true;
    }
    if (isCtrlShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_O)))){
        openFile = true;
    }
    if (isCtrlShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_Period)))){
        changeEmulationSettingsOpt = true;
    }
    if (isCtrlShiftShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_M)))){
       saveContextToFile = true;
    }
    if (isCtrlShiftShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_O)))){
        fileLoadContext = true;
    }
    if (isCtrlOnly && IsKeyPressed(GetKeyIndex(ImGuiKey_GraveAccent))){
        use32BitLanes = !use32BitLanes;
        updateRegistersOnLaneChange();
    }
    if (isShiftOnly && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F5)))){
        if (debugModeEnabled){
            debugStop = true;
        }
        return;
    }
    else if (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F5))){
        if (!debugModeEnabled){
            enableDebugMode = true;
        }
        else if ((isCtrlShortcut) &&ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F5))){
            debugRestart = true;
        }
        else{
            debugContinue = true;
        }
    }
    if (debugModeEnabled){
        if (isCtrlShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_J)))){
            debugStepIn = true;
        }
        if (isCtrlShortcut && (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_K)))){
            debugStepOver = true;
        }
    }
    if (ImGui::IsKeyPressed(ImGui::GetKeyIndex(ImGuiKey_F9))){
        toggleBreakpoint = true;
    }
    if (IsKeyPressed(GetKeyIndex(ImGuiKey_F3))){
        runSelectedCode = true;
    }
    if (IsKeyPressed(GetKeyIndex(ImGuiKey_F4))){
        goToDefinition = true;
    }
    if (IsKeyPressed(GetKeyIndex(ImGuiKey_F6))){
        debugPause = true;
    }
    if (IsKeyPressed(GetKeyIndex(ImGuiKey_F10))){
        debugRun = true;
    }
}