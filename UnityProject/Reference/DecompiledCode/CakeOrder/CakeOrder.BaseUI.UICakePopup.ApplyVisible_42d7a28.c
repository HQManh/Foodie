// rea decompile_all
// name: CakeOrder.BaseUI.UICakePopup$$ApplyVisible
// address: 0x42d7a28
// body: available
// range: 0x42d7a28-0x42d7d4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42d7bbc to 0x42d7f08 CakeOrder.BaseUI.UICakePopup$$SetContentActive (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d7d44 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42d7d48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_BaseUI_UICakePopup__ApplyVisible(long param_1,ulong param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  byte bVar8;
  undefined4 uVar9;
  
  if ((DAT_095173db & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189470);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcf8);
    FUN_03f5c2a4(&DAT_091dbe80);
    FUN_03f5c2a4(&DAT_091dc008);
    FUN_03f5c2a4(&DAT_091dc728);
    DAT_095173db = 1;
  }
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar5,0,0);
  if ((uVar2 & 1) != 0) {
    return;
  }
  if (*(char *)(param_1 + 0x90) == '\0') {
    bVar8 = *(byte *)(param_1 + 0x91) ^ 1;
  }
  else {
    bVar8 = 0;
  }
  if (*(long *)(param_1 + 0x88) != 0) {
    UnityEngine_CanvasGroup__set_blocksRaycasts
              (*(long *)(param_1 + 0x88),*(char *)(param_1 + 0x90) == '\0',0);
    if (*(long *)(param_1 + 0x88) != 0) {
      UnityEngine_CanvasGroup__set_interactable
                (*(long *)(param_1 + 0x88),*(char *)(param_1 + 0x90) == '\0',0);
      plVar6 = (long *)(param_1 + 0x98);
      if (*plVar6 != 0) {
        DG_Tweening_TweenExtensions__Kill(*plVar6,0,0);
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
      thunk_FUN_03f5d7b8(plVar6,0);
      if (*(char *)(param_1 + 0x90) == '\0') {
        CakeOrder_BaseUI_UICakePopup__SetContentActive(param_1,1);
      }
      uVar9 = 0;
      if (bVar8 != 0) {
        uVar9 = 0x3f800000;
      }
      if ((param_2 & 1) == 0) {
        uVar5 = *(undefined8 *)(param_1 + 0xb0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Inequality(uVar5,0,0);
        lVar7 = 0;
        if ((uVar2 & 1) != 0) {
          if (*(long *)(param_1 + 0xb0) == 0) goto LAB_042d7d48;
          lVar7 = *(long *)(*(long *)(param_1 + 0xb0) + 0x70);
        }
        if (bVar8 == 0) {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Inequality(lVar7,0,0);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(DAT_09189470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar4 = (undefined4 *)(*(long *)(DAT_09189470 + 0xb8) + 8);
          }
          else {
            if (lVar7 == 0) goto LAB_042d7d48;
            puVar4 = (undefined4 *)(lVar7 + 0x20);
          }
        }
        else {
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar2 = UnityEngine_Object__op_Inequality(lVar7,0,0);
          if ((uVar2 & 1) == 0) {
            if (*(int *)(DAT_09189470 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            puVar4 = *(undefined4 **)(DAT_09189470 + 0xb8);
          }
          else {
            if (lVar7 == 0) goto LAB_042d7d48;
            puVar4 = (undefined4 *)(lVar7 + 0x18);
          }
        }
        uVar1 = puVar4[1];
        uVar5 = DG_Tweening_DOTweenModuleUI__DOFade(uVar9,*puVar4,*(undefined8 *)(param_1 + 0x88),0)
        ;
        uVar5 = FUN_04d95e8c(uVar5,uVar1,DAT_091dbe80);
        uVar5 = FUN_04d9656c(uVar5,1,DAT_091dc008);
        uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar3,param_1,DAT_091dc728,0);
        uVar5 = FUN_04d956bc(uVar5,uVar3,DAT_091dbcf8);
        *(undefined8 *)(param_1 + 0x98) = uVar5;
        thunk_FUN_03f5d7b8(plVar6);
        return;
      }
      if (*(long *)(param_1 + 0x88) != 0) {
        UnityEngine_CanvasGroup__set_alpha(uVar9,*(long *)(param_1 + 0x88),0);
        if (*(char *)(param_1 + 0x90) == '\0') {
          return;
        }
        CakeOrder_BaseUI_UICakePopup__SetContentActive(param_1,0);
        return;
      }
    }
  }
LAB_042d7d48:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

