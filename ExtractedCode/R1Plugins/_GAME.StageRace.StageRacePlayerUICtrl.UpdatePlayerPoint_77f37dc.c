// rea decompile_all
// name: _GAME.StageRace.StageRacePlayerUICtrl$$UpdatePlayerPoint
// address: 0x77f37dc
// body: available
// range: 0x77f37dc-0x77f3c17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f3c14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRacePlayerUICtrl__UpdatePlayerPoint(long param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int local_38;
  undefined4 local_34;
  
  if ((DAT_09523157 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b04b0);
    FUN_03f5c2a4(&DAT_091b04b8);
    FUN_03f5c2a4(&DAT_091896c0);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09523157 = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_0918b158 + 0xb8) == 0) || (*(long *)(param_1 + 0x28) == 0))
  goto LAB_077f3c14;
  iVar1 = *(int *)(**(long **)(DAT_0918b158 + 0xb8) + 0x14);
  UnityEngine_UI_Slider__set_maxValue((float)iVar1,*(long *)(param_1 + 0x28),0);
  iVar2 = *(int *)(param_1 + 0x20);
  if (iVar2 < 0) {
    plVar3 = *(long **)(param_1 + 0x28);
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar5 == 0) || (plVar3 == (long *)0x0)) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x428))
              ((float)*(int *)(lVar5 + 0x3c),plVar3,*(undefined8 *)(*plVar3 + 0x430));
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if (lVar5 == 0) goto LAB_077f3c14;
    local_34 = *(undefined4 *)(lVar5 + 0x34);
    lVar5 = *(long *)(param_1 + 0x38);
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_34);
    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
    if (lVar5 == 0) goto LAB_077f3c14;
    TMPro_TMP_Text__SetText(lVar5,uVar4,0);
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar5 == 0) || (*(long *)(param_1 + 0x30) == 0)) goto LAB_077f3c14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),*(int *)(lVar5 + 0x34) < iVar1,0);
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar5 == 0) || (*(long *)(param_1 + 0x40) == 0)) goto LAB_077f3c14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x40),iVar1 <= *(int *)(lVar5 + 0x34),0);
    plVar3 = *(long **)(param_1 + 0x48);
    if (*(int *)(DAT_091896c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) || (plVar3 == (long *)0x0)) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x20),
               *(undefined8 *)(*plVar3 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar3 = *(long **)(param_1 + 0x50), plVar3 == (long *)0x0)) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x24),
               *(undefined8 *)(*plVar3 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar3 = *(long **)(param_1 + 0x58), plVar3 == (long *)0x0)) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x28),
               *(undefined8 *)(*plVar3 + 0x180));
    if ((**(long **)(DAT_091896c0 + 0xb8) == 0) ||
       (plVar3 = *(long **)(param_1 + 0x58), plVar3 == (long *)0x0)) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x188))
              (plVar3,*(undefined8 *)(**(long **)(DAT_091896c0 + 0xb8) + 0x18),1,
               *(undefined8 *)(*plVar3 + 400));
  }
  else {
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if ((lVar5 == 0) || (*(long *)(lVar5 + 0x48) == 0)) goto LAB_077f3c14;
    if (*(int *)(*(long *)(lVar5 + 0x48) + 0x18) <= iVar2) {
      return;
    }
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar5 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      if (lVar5 == 0) goto LAB_077f3c14;
    }
    if (((*(long *)(lVar5 + 0x48) == 0) ||
        (lVar5 = FUN_057e0998(*(long *)(lVar5 + 0x48),*(undefined4 *)(param_1 + 0x20),DAT_091b04b8),
        lVar5 == 0)) || (plVar3 = *(long **)(param_1 + 0x28), plVar3 == (long *)0x0))
    goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x428))
              ((float)*(int *)(lVar5 + 0x30),plVar3,*(undefined8 *)(*plVar3 + 0x430));
    iVar2 = *(int *)(lVar5 + 0x2c);
    lVar6 = *(long *)(param_1 + 0x38);
    local_38 = iVar2;
    if (iVar1 <= iVar2) {
      local_38 = iVar1;
    }
    uVar4 = FUN_03f5c42c(DAT_09535420,&local_38);
    uVar4 = System_String__Format(DAT_09226038,uVar4,0);
    if (lVar6 == 0) goto LAB_077f3c14;
    TMPro_TMP_Text__SetText(lVar6,uVar4,0);
    if (*(long *)(param_1 + 0x30) == 0) goto LAB_077f3c14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),iVar2 < iVar1,0);
    if (*(long *)(param_1 + 0x40) == 0) goto LAB_077f3c14;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x40),iVar1 <= iVar2,0);
    plVar3 = *(long **)(param_1 + 0x48);
    if (plVar3 == (long *)0x0) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(lVar5 + 0x14),*(undefined8 *)(*plVar3 + 0x180));
    plVar3 = *(long **)(param_1 + 0x50);
    if (plVar3 == (long *)0x0) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(lVar5 + 0x18),*(undefined8 *)(*plVar3 + 0x180));
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 == (long *)0x0) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x178))
              (plVar3,*(undefined4 *)(lVar5 + 0x1c),*(undefined8 *)(*plVar3 + 0x180));
    plVar3 = *(long **)(param_1 + 0x58);
    if (plVar3 == (long *)0x0) goto LAB_077f3c14;
    (**(code **)(*plVar3 + 0x188))
              (plVar3,*(undefined8 *)(lVar5 + 0x20),1,*(undefined8 *)(*plVar3 + 400));
  }
  lVar5 = *(long *)(param_1 + 0x60);
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if ((**(long **)(DAT_0918b158 + 0xb8) != 0) && (lVar5 != 0)) {
    _GAME_GameUI_RwBoxUICtrl__SetData
              (lVar5,*(undefined8 *)(**(long **)(DAT_0918b158 + 0xb8) + 0x20),0);
    return;
  }
LAB_077f3c14:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

