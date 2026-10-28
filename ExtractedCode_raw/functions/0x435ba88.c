// rea decompile_all
// name: CakeOrder.Home.Journey.UIJourneyChapterCard$$SetUpComingSoon
// address: 0x435ba88
// body: available
// range: 0x435ba88-0x435bb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x435bb70 to 0x435b8dc CakeOrder.Home.Journey.UIJourneyChapterCard$$ApplyPreview (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x435bb74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_Journey_UIJourneyChapterCard__SetUpComingSoon(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09517808 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517808 = 1;
  }
  lVar3 = DAT_09188ad0;
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  *(undefined1 *)(param_1 + 0x78) = 1;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x30);
    if (plVar2 == (long *)0x0) goto LAB_0435bb74;
    (**(code **)(*plVar2 + 0x558))(plVar2,param_2,*(undefined8 *)(*plVar2 + 0x560));
  }
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) != 0) {
    if ((*(long *)(param_1 + 0x38) == 0) ||
       (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x38),0), lVar3 == 0)) {
LAB_0435bb74:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    UnityEngine_GameObject__SetActive(lVar3,0,0);
  }
  CakeOrder_Home_Journey_UIJourneyChapterCard__ApplyPreview(param_1,0);
  return;
}

