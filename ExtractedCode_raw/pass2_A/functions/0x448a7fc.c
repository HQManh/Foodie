// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c$$<RecordAutoComplete>b__43_0
// address: 0x448a7fc
// body: available
// range: 0x448a7fc-0x448a8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448a8bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingLevelSimulation_<>c__<RecordAutoComplete>b__43_0
               (undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09518117 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cb0);
    DAT_09518117 = 1;
  }
  if (param_2 != 0) {
    uVar8 = *(undefined8 *)(param_2 + 0x48);
    uVar7 = *(undefined8 *)(param_2 + 0x40);
    uVar6 = *(undefined8 *)(param_2 + 0x50);
    uVar3 = *(undefined4 *)(param_2 + 0x6c);
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined4 *)(param_2 + 0x30);
    lVar5 = thunk_FUN_03f9944c(DAT_09182cb0);
    System_Object___ctor(lVar5,0);
    *(undefined4 *)(lVar5 + 0x18) = 6;
    *(undefined4 *)(lVar5 + 0x10) = uVar3;
    *(undefined4 *)(lVar5 + 0x14) = uVar4;
    *(undefined8 *)(lVar5 + 0x20) = uVar2;
    *(undefined8 *)(lVar5 + 0x30) = uVar8;
    *(undefined8 *)(lVar5 + 0x28) = uVar7;
    *(undefined8 *)(lVar5 + 0x38) = uVar6;
    thunk_FUN_03f5d7b8(lVar5 + 0x30,0);
    *(undefined8 *)(lVar5 + 0x40) = uVar1;
    *(undefined1 *)(lVar5 + 0x48) = 1;
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

