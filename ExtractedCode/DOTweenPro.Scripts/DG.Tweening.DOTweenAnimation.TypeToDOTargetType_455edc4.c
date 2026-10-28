// rea decompile_all
// name: DG.Tweening.DOTweenAnimation$$TypeToDOTargetType
// address: 0x455edc4
// body: available
// range: 0x455edc4-0x455efb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x455efac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x455efb0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 DG_Tweening_DOTweenAnimation__TypeToDOTargetType(long *param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 *puVar6;
  long lVar7;
  
  if ((DAT_0951882d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09173878);
    FUN_03f5c2a4(&DAT_0918fa08);
    FUN_03f5c2a4(&DAT_0920d7b8);
    FUN_03f5c2a4(&DAT_0920bc08);
    FUN_03f5c2a4(&DAT_09203900);
    FUN_03f5c2a4(&DAT_0920b538);
    FUN_03f5c2a4(&DAT_09204768);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_0951882d = 1;
  }
  if (((param_1 != (long *)0x0) &&
      (lVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined8 *)(*param_1 + 0x170)),
      lVar2 != 0)) &&
     ((iVar1 = System_String__LastIndexOf(lVar2,DAT_091f8f68,0), iVar1 == -1 ||
      (lVar2 = System_String__Substring(lVar2,iVar1 + 1,0), lVar2 != 0)))) {
    iVar1 = System_String__IndexOf(lVar2,DAT_0920bc08,0);
    lVar7 = lVar2;
    if ((iVar1 != -1) &&
       (uVar3 = System_String__op_Inequality(lVar2,DAT_0920d7b8,0), lVar7 = DAT_0920bc08,
       (uVar3 & 1) == 0)) {
      lVar7 = lVar2;
    }
    uVar3 = System_String__op_Equality(lVar7,DAT_0920b538,0);
    if (((uVar3 & 1) != 0) ||
       (uVar3 = System_String__op_Equality(lVar7,DAT_09203900,0), (uVar3 & 1) != 0)) {
      lVar7 = DAT_09204768;
    }
    uVar4 = DAT_09173878;
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = System_Type__GetTypeFromHandle(uVar4,0);
    if (*(int *)(DAT_09535470 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535470);
    }
    plVar5 = (long *)System_Enum__Parse(uVar4,lVar7,0);
    if (plVar5 != (long *)0x0) {
      if (*(long *)(*plVar5 + 0x40) != *(long *)(DAT_0918fa08 + 0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0();
      }
      puVar6 = (undefined4 *)thunk_FUN_03f99594();
      return *puVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

