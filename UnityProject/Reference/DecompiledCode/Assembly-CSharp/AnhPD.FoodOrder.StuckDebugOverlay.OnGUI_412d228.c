// rea decompile_all
// name: AnhPD.FoodOrder.StuckDebugOverlay$$OnGUI
// address: 0x412d228
// body: available
// range: 0x412d228-0x412d7ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x412d7ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_StuckDebugOverlay__OnGUI(long param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined4 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((DAT_09516313 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_09184b20);
    FUN_03f5c2a4(&DAT_09184b38);
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_0918b450);
    FUN_03f5c2a4(&DAT_091ff250);
    FUN_03f5c2a4(&DAT_0920bcd8);
    FUN_03f5c2a4(&DAT_092134c8);
    FUN_03f5c2a4(&DAT_091fd2c8);
    DAT_09516313 = 1;
  }
  uStack_278 = 0;
  local_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  uStack_258 = 0;
  local_260 = 0;
  uStack_248 = 0;
  uStack_250 = 0;
  uStack_238 = 0;
  local_240 = 0;
  uStack_228 = 0;
  uStack_230 = 0;
  uStack_218 = 0;
  local_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  uStack_1f8 = 0;
  local_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  local_1e0 = 0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  local_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  local_1a0 = 0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  local_180 = 0;
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = CakeOrder_CheatManagerCakeOrder__get_IsShowDebug(0);
  if ((uVar4 & 1) != 0) {
    uVar8 = **(undefined8 **)(DAT_091881a0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUI__get_matrix(&local_2c0,0);
      iVar2 = UnityEngine_Screen__get_width(0);
      fVar13 = 1.0;
      if (1.0 <= (float)iVar2 / 640.0) {
        fVar13 = (float)iVar2 / 640.0;
      }
      if (DAT_09515ce9 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce9 = '\x01';
      }
      puVar6 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
      fVar11 = (float)puVar6[2];
      fVar12 = (float)puVar6[3];
      if (DAT_09515ce8 == '\0') {
        FUN_03f5c2a4(&DAT_0918cb68);
        DAT_09515ce8 = '\x01';
        puVar6 = *(undefined4 **)(DAT_0918cb68 + 0xb8);
      }
      fVar12 = fVar13 * fVar12;
      uVar14 = *puVar6;
      uVar15 = puVar6[1];
      if (*(int *)(DAT_09184b38 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_GUIUtility__ScaleAroundPivot(fVar13 * fVar11,fVar12,uVar14,uVar15,0);
      iVar2 = UnityEngine_Screen__get_width(0);
      iVar3 = UnityEngine_Screen__get_height(0);
      UnityEngine_Screen__get_safeArea(0);
      if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_GUI__Button
                        (0x40800000,((float)iVar3 / fVar13 - fVar12 / fVar13) + -130.0 + -40.0,
                         0x42ac0000,0x42080000,DAT_0920bcd8,0);
      if ((uVar4 & 1) == 0) {
        uStack_b8 = uStack_2b8;
        local_c0 = local_2c0;
      }
      else {
        uStack_f8 = uStack_2b8;
        local_100 = local_2c0;
        uStack_e8 = uStack_2a8;
        uStack_f0 = uStack_2b0;
        uStack_d8 = uStack_298;
        local_e0 = local_2a0;
        uStack_c8 = uStack_288;
        uStack_d0 = uStack_290;
        AnhPD_FoodOrder_StuckDebugOverlay__TakeReport(param_1);
        uStack_b8 = uStack_f8;
        local_c0 = local_100;
        local_2a0 = local_e0;
        uStack_298 = uStack_d8;
        uStack_2b0 = uStack_f0;
        uStack_2a8 = uStack_e8;
        uStack_290 = uStack_d0;
        uStack_288 = uStack_c8;
      }
      uStack_a8 = uStack_2a8;
      local_b0 = uStack_2b0;
      uStack_98 = uStack_298;
      local_a0 = local_2a0;
      plVar9 = (long *)(param_1 + 0x20);
      uStack_88 = uStack_288;
      local_90 = uStack_290;
      if (*plVar9 == 0) {
        puVar7 = &local_c0;
      }
      else {
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (**(long **)(DAT_0918b450 + 0xb8) == 0) {
          if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar5 = UnityEngine_GUI__get_skin(0);
          if (lVar5 == 0) {
LAB_0412d7ec:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar8 = UnityEngine_GUISkin__get_button(lVar5,0);
          lVar5 = thunk_FUN_03f9944c(DAT_09184b20);
          UnityEngine_GUIStyle___ctor(lVar5,uVar8,0);
          if (lVar5 == 0) goto LAB_0412d7ec;
          UnityEngine_GUIStyle__set_fontSize(lVar5,0x20,0);
          UnityEngine_GUIStyle__set_fontStyle(lVar5,1,0);
          **(long **)(DAT_0918b450 + 0xb8) = lVar5;
          thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b450 + 0xb8),lVar5);
        }
        uStack_178 = uStack_b8;
        local_180 = local_c0;
        uStack_168 = uStack_a8;
        uStack_170 = local_b0;
        bVar1 = *(char *)(param_1 + 0x28) != '\0';
        puVar7 = &local_200;
        if (bVar1) {
          puVar7 = &local_1c0;
        }
        fVar12 = ((float)iVar3 / fVar13 + -110.0) * 0.5;
        uStack_158 = uStack_98;
        local_160 = local_a0;
        uStack_148 = uStack_88;
        uStack_150 = local_90;
        puVar7[1] = uStack_b8;
        *puVar7 = local_c0;
        puVar7[3] = uStack_a8;
        puVar7[2] = local_b0;
        fVar13 = ((float)iVar2 / fVar13 + -260.0) * 0.5;
        puVar7[5] = uStack_98;
        puVar7[4] = local_a0;
        puVar7[7] = uStack_88;
        puVar7[6] = local_90;
        puVar7 = &DAT_091fd2c8;
        if (bVar1) {
          puVar7 = &DAT_091ff250;
        }
        uVar8 = *puVar7;
        uStack_238 = uStack_b8;
        local_240 = local_c0;
        uStack_228 = uStack_a8;
        uStack_230 = local_b0;
        uVar10 = **(undefined8 **)(DAT_0918b450 + 0xb8);
        uStack_218 = uStack_98;
        local_220 = local_a0;
        uStack_208 = uStack_88;
        uStack_210 = local_90;
        if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_GUI__Button(fVar13,fVar12,0x43820000,0x42dc0000,uVar8,uVar10,0);
        if ((uVar4 & 1) != 0) {
          uVar8 = AnhPD_FoodOrder_DebugReportCodec__Encode(*plVar9);
          if (*(int *)(DAT_09184b38 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09184b38);
          }
          UnityEngine_GUIUtility__set_systemCopyBuffer(uVar8,0);
          *(undefined1 *)(param_1 + 0x28) = 1;
        }
        uStack_278 = uStack_238;
        local_280 = local_240;
        uStack_268 = uStack_228;
        uStack_270 = uStack_230;
        uStack_258 = uStack_218;
        local_260 = local_220;
        uStack_248 = uStack_208;
        uStack_250 = uStack_210;
        if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_GUI__Button
                          (fVar13 + 260.0 + -22.0,fVar12 + -22.0,0x42300000,0x42300000,DAT_092134c8,
                           0);
        if ((uVar4 & 1) != 0) {
          *plVar9 = 0;
          thunk_FUN_03f5d7b8(plVar9,0);
        }
        puVar7 = &local_280;
      }
      uStack_138 = puVar7[1];
      local_140 = *puVar7;
      uStack_128 = puVar7[3];
      uStack_130 = puVar7[2];
      uStack_118 = puVar7[5];
      local_120 = puVar7[4];
      uStack_108 = puVar7[7];
      uStack_110 = puVar7[6];
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_2f8 = uStack_138;
      local_300 = local_140;
      uStack_2e8 = uStack_128;
      uStack_2f0 = uStack_130;
      uStack_2d8 = uStack_118;
      local_2e0 = local_120;
      uStack_2c8 = uStack_108;
      uStack_2d0 = uStack_110;
      UnityEngine_GUI__set_matrix(&local_300,0);
    }
  }
  return;
}

