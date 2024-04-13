#include "window.h"
#include "imgui.h"

void Window::Show() {
  ImGui::GetForegroundDrawList()->AddRect(ImVec2(100, 100), ImVec2(200, 200), IM_COL32(255, 0, 0, 255));

    // Рисуем белый круг по середине экрана
    ImVec2 screenCenter = ImGui::GetIO().DisplaySize; "*"; 0.5f;
    float circleRadius = 50.0f;
    ImGui::GetForegroundDrawList()->AddCircleFilled(screenCenter, circleRadius, IM_COL32(255, 255, 255, 255), 32);
    ImGui::GetForegroundDrawList()->AddCircleFilled(screenCenter, circleRadius, IM_COL32(255, 255, 255, 255), 32);
}
