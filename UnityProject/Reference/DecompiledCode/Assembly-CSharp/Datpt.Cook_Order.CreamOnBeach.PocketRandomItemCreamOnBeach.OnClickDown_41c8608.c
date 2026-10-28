// rea decompile_all
// name: Datpt.Cook_Order.CreamOnBeach.PocketRandomItemCreamOnBeach$$OnClickDown
// address: 0x41c8608
// body: available
// range: 0x41c8608-0x41c870b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41c86f8 to 0x4535820 MoreMountains.NiceVibrations.MMVibrationManager$$Haptic (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41c8708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_CreamOnBeach_PocketRandomItemCreamOnBeach__OnClickDown(long param_1)

{
  char cVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  if ((DAT_095169e7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d96f0);
    DAT_095169e7 = 1;
  }
  lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
  if (lVar2 != 0) {
    if (*(char *)(lVar2 + 0x19c) == '\0') {
      if (*(int *)(param_1 + 0x20) < 1) {
        return;
      }
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
      Datpt_Cook_Order_PocketRandomItem__UpdateVisualCount(param_1,0);
      if (*(int *)(param_1 + 0x20) < 1) {
        if (*(long *)(param_1 + 0x30) == 0) goto LAB_041c8708;
        UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x30),0,0);
      }
    }
    cVar1 = *(char *)(param_1 + 0x38);
    plVar3 = (long *)Datpt_Cook_Order_LevelControlCookOrder__get_Ins(0);
    if (cVar1 == '\0') {
      if (plVar3 == (long *)0x0) goto LAB_041c8708;
      puVar4 = (undefined8 *)(*plVar3 + 0x388);
      puVar5 = (undefined8 *)(*plVar3 + 0x390);
    }
    else {
      if (plVar3 == (long *)0x0) goto LAB_041c8708;
      puVar4 = (undefined8 *)(*plVar3 + 0x318);
      puVar5 = (undefined8 *)(*plVar3 + 800);
    }
    (*(code *)*puVar4)(plVar3,*puVar5);
    lVar2 = Datpt_Cook_Order_SoundControl__get_Ins();
    if (lVar2 != 0) {
      FUN_04d59cfc(lVar2,9,0,DAT_091d96f0);
      MoreMountains_NiceVibrations_MMVibrationManager__Haptic(4,0);
      return;
    }
  }
LAB_041c8708:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

