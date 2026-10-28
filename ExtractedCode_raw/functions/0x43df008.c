// rea decompile_all
// name: FUN_043df008
// address: 0x43df008
// body: available
// range: 0x43df008-0x43df0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43df0bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_043df008(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long *in_x10;
  int *piVar4;
  long unaff_x19;
  long unaff_x22;
  long *plVar5;
  
  uVar3 = (ulong)*(ushort *)(param_1 + 0x12e);
  plVar5 = *(long **)(unaff_x22 + 0xff8);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(param_1 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *in_x10) {
        puVar1 = (undefined8 *)(param_1 + (long)(*piVar4 + 7) * 0x10 + 0x138);
        goto LAB_043df05c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8();
LAB_043df05c:
  uVar2 = (*(code *)*puVar1)();
  if (*(int *)(*plVar5 + 0xe4) == 0) {
    FUN_03f5c424(*plVar5);
  }
  uVar3 = UnityEngine_Object__op_Inequality(param_2,uVar2,0);
  if ((uVar3 & 1) != 0) {
    if (*(long *)(unaff_x19 + 0x1e0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    ChocDino_UIFX_ErodeDilate__FreeTextures(*(long *)(unaff_x19 + 0x1e0),0);
  }
  return uVar2;
}

