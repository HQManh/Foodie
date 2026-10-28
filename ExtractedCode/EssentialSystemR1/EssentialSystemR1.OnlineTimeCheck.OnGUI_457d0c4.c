// rea decompile_all
// name: EssentialSystemR1.OnlineTimeCheck$$OnGUI
// address: 0x457d0c4
// body: available
// range: 0x457d0c4-0x457d3bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x457d3b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void EssentialSystemR1_OnlineTimeCheck__OnGUI(long param_1)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 auStack_190 [8];
  undefined8 local_150 [8];
  undefined4 local_110;
  undefined8 local_10c;
  undefined8 local_104;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  if ((DAT_0951891d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091d55a0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_09190cd0);
    FUN_03f5c2a4(&DAT_0920e3b0);
    DAT_0951891d = 1;
  }
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (*(char *)(param_1 + 0x48) != '\0') {
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_GUI__get_matrix(&local_d0,0);
    local_110 = 0x3f99999a;
    uStack_88 = uStack_c8;
    local_90 = local_d0;
    uStack_78 = uStack_b8;
    local_80 = uStack_c0;
    local_fc = 0x3f99999a;
    local_104 = 0;
    uStack_68 = uStack_a8;
    local_70 = local_b0;
    uStack_58 = uStack_98;
    uStack_60 = uStack_a0;
    local_10c = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_e8 = 0x3f800000;
    local_d4 = 0x3f800000;
    UnityEngine_GUI__set_matrix(&local_110,0);
    iVar1 = UnityEngine_Screen__get_width(0);
    fVar10 = (float)iVar1 / 1.2;
    iVar1 = UnityEngine_Screen__get_height(0);
    fVar12 = (float)iVar1 / 1.2;
    UnityEngine_GUI__set_depth(0xfffff830,0);
    if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = EssentialSystemR1_OnlineTimeCheck__GetCheatDimTexture();
    UnityEngine_GUI__DrawTexture(0,0,fVar10,fVar12,uVar3,0);
    fVar9 = (float)NEON_fminnm(fVar10 * 0.94,0x44340000);
    fVar8 = 1.0;
    if (1.0 <= fVar12 + -16.0) {
      fVar8 = fVar12 + -16.0;
    }
    *(float *)(param_1 + 0x80) = fVar9;
    *(float *)(param_1 + 0x84) = fVar8;
    *(float *)(param_1 + 0x78) = (fVar10 - fVar9) * 0.5;
    *(float *)(param_1 + 0x7c) = (fVar12 - fVar8) * 0.5;
    uVar4 = EssentialSystemR1_OnlineTimeCheck__DrawBackdropCloseButtons(fVar10,fVar12,param_1);
    if ((uVar4 & 1) == 0) {
      uVar11 = *(undefined4 *)(param_1 + 0x78);
      uVar13 = *(undefined4 *)(param_1 + 0x7c);
      uVar14 = *(undefined4 *)(param_1 + 0x80);
      uVar15 = *(undefined4 *)(param_1 + 0x84);
      uVar3 = thunk_FUN_03f9944c(DAT_09190cd0);
      UnityEngine_GUI_WindowFunction___ctor(uVar3,param_1,DAT_091d55a0,0);
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = EssentialSystemR1_OnlineTimeCheck__PanelWindowStyle();
      if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09184ac0);
      }
      UnityEngine_GUI__ModalWindow(uVar11,uVar13,uVar14,uVar15,0xc66be,uVar3,DAT_0920e3b0,uVar5,0);
      lVar6 = UnityEngine_Event__get_current(0);
      if (lVar6 == 0) {
LAB_0457d3b8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar2 = UnityEngine_Event__get_type(lVar6,0);
      puVar7 = auStack_190;
      if ((uVar2 < 7) && (puVar7 = auStack_190, uVar2 != 2)) {
        lVar6 = UnityEngine_Event__get_current(0);
        if (lVar6 == 0) goto LAB_0457d3b8;
        UnityEngine_Event__Use(lVar6,0);
        puVar7 = auStack_190;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x48) = 0;
      EssentialSystemR1_OnlineTimeCheck__SetCheatPanelInteractionBlocked(param_1,0);
      puVar7 = local_150;
    }
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar7[7] = uStack_58;
    puVar7[6] = uStack_60;
    puVar7[3] = uStack_78;
    puVar7[2] = local_80;
    puVar7[5] = uStack_68;
    puVar7[4] = local_70;
    puVar7[1] = uStack_88;
    *puVar7 = local_90;
    UnityEngine_GUI__set_matrix(puVar7,0);
  }
  return;
}

