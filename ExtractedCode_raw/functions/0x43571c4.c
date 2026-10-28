// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$GetLevelWorldY
// address: 0x43571c4
// body: available
// range: 0x43571c4-0x43572a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4357254 to 0x435d3f8 CakeOrder.Home.Journey.UIJourneyChapterSection$$GetLevelWorldY (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43572a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
CakeOrder_Home_Journey_UIHomeTabPageJourney__GetLevelWorldY
          (undefined4 param_1,uint param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  if ((DAT_095177e5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e5 = 1;
  }
  lVar1 = CakeOrder_Home_Journey_UIHomeTabPageJourney__SectionForLevel(param_1,param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar2 = UnityEngine_Object__op_Inequality(lVar1,0,0);
  if ((uVar2 & 1) != 0) {
    if (lVar1 != 0) {
      auVar5 = CakeOrder_Home_Journey_UIJourneyChapterSection__GetLevelWorldY(param_1,lVar1,0);
      return auVar5;
    }
LAB_043572a4:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(undefined8 *)(param_3 + 0xa8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  uVar4 = 0;
  if ((uVar2 & 1) != 0) {
    if (*(long *)(param_3 + 0xa8) == 0) goto LAB_043572a4;
    UnityEngine_Transform__get_position(0,*(long *)(param_3 + 0xa8),0);
    uVar4 = (ulong)param_2;
  }
  auVar5._8_8_ = 0;
  auVar5._0_8_ = uVar4;
  return auVar5;
}

