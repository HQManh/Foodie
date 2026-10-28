// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$OnGUI
// address: 0x4295094
// body: available
// range: 0x4295094-0x429533f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x429533c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__OnGUI(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if ((DAT_095171c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184ac0);
    FUN_03f5c2a4(&DAT_091dc688);
    FUN_03f5c2a4(&DAT_09190cd0);
    FUN_03f5c2a4(&DAT_091fc770);
    FUN_03f5c2a4(&DAT_092067f0);
    DAT_095171c7 = 1;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (*(int *)(param_1 + 0x200) != 0) {
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_GUI__get_matrix(&local_e0,0);
    local_120 = 0x3f99999a;
    uStack_98 = uStack_d8;
    local_a0 = local_e0;
    uStack_88 = uStack_c8;
    uStack_90 = uStack_d0;
    local_10c = 0x3f99999a;
    local_114 = 0;
    uStack_78 = uStack_b8;
    local_80 = local_c0;
    uStack_68 = uStack_a8;
    uStack_70 = uStack_b0;
    local_11c = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_f8 = 0x3f800000;
    local_ec = 0;
    local_f4 = 0;
    local_e4 = 0x3f800000;
    UnityEngine_GUI__set_matrix(&local_120,0);
    UnityEngine_GUI__set_depth(0xfffff7cc,0);
    iVar2 = UnityEngine_Screen__get_width(0);
    fVar10 = (float)iVar2 / 1.2;
    iVar2 = UnityEngine_Screen__get_height(0);
    uVar4 = CakeOrder_InGame_UICakePauseMenuInGame__GetCheatPanelDimTexture();
    UnityEngine_GUI__DrawTexture(0,0,fVar10,(float)iVar2 / 1.2,uVar4,0);
    uVar4 = DAT_09190cd0;
    *(undefined4 *)(param_1 + 0x208) = 0x41000000;
    fVar9 = (float)NEON_fminnm(fVar10 * 0.94,0x44340000);
    fVar8 = (float)iVar2 / 1.2 + -16.0;
    *(float *)(param_1 + 0x20c) = fVar9;
    fVar11 = 1.0;
    if (1.0 <= fVar8) {
      fVar11 = fVar8;
    }
    fVar8 = (fVar10 - fVar9) * 0.5;
    puVar1 = &DAT_091fc770;
    if (*(int *)(param_1 + 0x200) != 1) {
      puVar1 = &DAT_092067f0;
    }
    *(float *)(param_1 + 0x210) = fVar11;
    *(float *)(param_1 + 0x204) = fVar8;
    uVar7 = *puVar1;
    uVar4 = thunk_FUN_03f9944c(uVar4);
    UnityEngine_GUI_WindowFunction___ctor(uVar4,param_1,DAT_091dc688,0);
    uVar5 = CakeOrder_InGame_UICakePauseMenuInGame__CheatPanelWindowStyle();
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184ac0);
    }
    UnityEngine_GUI__ModalWindow(fVar8,0x41000000,fVar9,fVar11,0xded5f,uVar4,uVar7,uVar5,0);
    lVar6 = UnityEngine_Event__get_current(0);
    if (lVar6 == 0) {
LAB_0429533c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = UnityEngine_Event__get_type(lVar6,0);
    if ((uVar3 < 7) && (uVar3 != 2)) {
      lVar6 = UnityEngine_Event__get_current(0);
      if (lVar6 == 0) goto LAB_0429533c;
      UnityEngine_Event__Use(lVar6,0);
    }
    if (*(int *)(DAT_09184ac0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_158 = uStack_98;
    local_160 = local_a0;
    uStack_148 = uStack_88;
    uStack_150 = uStack_90;
    uStack_138 = uStack_78;
    local_140 = local_80;
    uStack_128 = uStack_68;
    uStack_130 = uStack_70;
    UnityEngine_GUI__set_matrix(&local_160,0);
  }
  return;
}

