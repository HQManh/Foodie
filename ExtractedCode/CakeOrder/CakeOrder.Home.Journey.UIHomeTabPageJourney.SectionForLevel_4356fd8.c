// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$SectionForLevel
// address: 0x4356fd8
// body: available
// range: 0x4356fd8-0x435716b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4357164 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4357168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_Journey_UIHomeTabPageJourney__SectionForLevel(float param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_78;
  undefined8 *puStack_70;
  long local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  long local_50;
  
  if ((DAT_095177e4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b50);
    FUN_03f5c2a4(&DAT_091a4b58);
    FUN_03f5c2a4(&DAT_091a4b60);
    FUN_03f5c2a4(&DAT_091b1500);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e4 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  if (*(long *)(param_2 + 0x120) != 0) {
    FUN_057e185c(&local_78,*(long *)(param_2 + 0x120),DAT_091b1500);
    local_50 = local_68;
    puStack_58 = puStack_70;
    local_60 = local_78;
    local_78 = 0;
    lVar4 = 0;
    lVar2 = 0;
    puStack_70 = &local_60;
    while (lVar5 = lVar2, uVar3 = FUN_071bd28c(&local_60,DAT_091a4b58), lVar1 = local_50,
          (uVar3 & 1) != 0) {
      if (local_50 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = lVar5;
      if (*(char *)(local_50 + 0x78) != '\0') {
        uVar3 = CakeOrder_Home_Journey_UIJourneyChapterSection__ContainsLevel(param_1,local_50,0);
        if ((uVar3 & 1) != 0) {
          FUN_071bd288(&local_60,DAT_091a4b50);
          return lVar1;
        }
        lVar4 = lVar1;
        lVar2 = lVar1;
        if (lVar5 != 0) {
          lVar2 = lVar5;
        }
      }
    }
    FUN_071bd288(&local_60,DAT_091a4b50);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar3 & 1) != 0) {
      if (lVar4 == 0) goto LAB_04357168;
      if (param_1 < (float)*(int *)(lVar4 + 0x68)) {
        return lVar4;
      }
    }
    return lVar5;
  }
LAB_04357168:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

