// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyMilestoneItem$$UpdateProgress
// address: 0x435db6c
// body: available
// range: 0x435db6c-0x435de17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435de10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435de14 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyMilestoneItem__UpdateProgress(long param_1,undefined4 param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if ((DAT_0951782f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4bb0);
    FUN_03f5c2a4(&DAT_091a4bb8);
    FUN_03f5c2a4(&DAT_091a4bc0);
    FUN_03f5c2a4(&DAT_091b1590);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951782f = 1;
  }
  local_48 = 0;
  uStack_40 = 0;
  local_38 = 0;
  if (*(long *)(param_1 + 0x98) != 0) {
    iVar2 = CakeOrder_Home_Journey_JourneyProgress__GetMilestoneState
                      (*(undefined4 *)(*(long *)(param_1 + 0x98) + 0x10),param_2,0);
    lVar1 = DAT_09188ad0;
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(int *)(param_1 + 0xa0) = iVar2;
    if (*(int *)(lVar1 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x38) == 0) goto LAB_0435de14;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x38),iVar2 == 2,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x40);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x40) == 0) goto LAB_0435de14;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x40),*(int *)(param_1 + 0xa0) == 1,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x48);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x48) == 0) goto LAB_0435de14;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x48),*(int *)(param_1 + 0xa0) == 0,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(long *)(param_1 + 0x30) == 0) goto LAB_0435de14;
      UnityEngine_UI_Selectable__set_interactable
                (*(long *)(param_1 + 0x30),*(int *)(param_1 + 0xa0) == 1,0);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x68);
    lVar1 = 0x70;
    if (*(int *)(param_1 + 0xa0) != 0) {
      lVar1 = 0x78;
    }
    uVar5 = *(undefined8 *)(param_1 + lVar1);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar5,0);
      if ((uVar3 & 1) != 0) {
        if (*(long *)(param_1 + 0x68) == 0) goto LAB_0435de14;
        UnityEngine_UI_Image__set_sprite(*(long *)(param_1 + 0x68),uVar5,0);
      }
    }
    if (*(long *)(param_1 + 0x88) == 0) {
LAB_0435de14:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_48,*(long *)(param_1 + 0x88),DAT_091b1590);
    while (uVar3 = FUN_071bd28c(&local_48,DAT_091a4bb8), lVar1 = local_38, (uVar3 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(lVar1,0);
      if ((uVar3 & 1) != 0) {
        if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_Home_Journey_UIJourneyRewardIcon__SetClaimed(lVar1,iVar2 == 2);
      }
    }
    FUN_071bd288(&local_48,DAT_091a4bb0);
  }
  return;
}

