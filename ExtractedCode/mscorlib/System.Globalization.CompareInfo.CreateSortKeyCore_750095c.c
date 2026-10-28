// rea decompile_all
// name: System.Globalization.CompareInfo$$CreateSortKeyCore
// address: 0x750095c
// body: available
// range: 0x750095c-0x7500a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7500a90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Globalization_CompareInfo__CreateSortKeyCore
          (long param_1,undefined8 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  int *piVar7;
  
  if ((DAT_09521670 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091827f8);
    FUN_03f5c2a4(&DAT_09186630);
    FUN_03f5c2a4(&DAT_0918ae78);
    DAT_09521670 = 1;
  }
  if (*(int *)(DAT_091827f8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = System_Globalization_CompareInfo__get_UseManagedCollation();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = thunk_FUN_03f9944c(DAT_0918ae78);
    System_Globalization_SortKey___ctor(uVar5,uVar1,param_2,param_3,0);
    return uVar5;
  }
  plVar3 = (long *)System_Globalization_CompareInfo__GetCollator(param_1);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar6 = *plVar3;
  uVar2 = (ulong)*(ushort *)(lVar6 + 0x12e);
  if (uVar2 != 0) {
    piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09186630) {
        puVar4 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_07500a70;
      }
      uVar2 = uVar2 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar2 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09186630,0);
LAB_07500a70:
                    /* WARNING: Could not recover jumptable at 0x07500a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*(code *)*puVar4)(plVar3,param_2,param_3,puVar4[1]);
  return uVar5;
}

