// rea decompile_all
// name: FUN_0747c024
// address: 0x747c024
// body: available
// range: 0x747c024-0x747c0cb inclusive
// range: 0x747c0d0-0x747c0d7 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x747c0d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_0747c024(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  long *plVar5;
  long unaff_x20;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)*piVar4 * 0x10 + 0x138);
        goto LAB_0747c06c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8();
LAB_0747c06c:
  (*(code *)*puVar1)();
  if (unaff_x20 == 0) {
    plVar5 = (long *)(unaff_x19 + 0x18);
    if (*plVar5 == 0) {
      lVar2 = thunk_FUN_03f9944c(DAT_0917be30);
      FUN_057e0400(lVar2,DAT_091ab9a8);
      *plVar5 = lVar2;
      thunk_FUN_03f5d7b8(plVar5,lVar2);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c548();
}

