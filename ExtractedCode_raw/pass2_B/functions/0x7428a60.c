// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$Compare
// address: 0x7428a60
// body: available
// range: 0x7428a60-0x7428ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7428b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7428ba0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Mono_Math_BigInteger_Kernel__Compare(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_07428b9c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar3 = *(uint *)(param_1 + 0x10);
  do {
    uVar4 = uVar3;
    uVar1 = *(uint *)(param_2 + 0x10);
    if (uVar4 == 0) break;
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_07428b9c;
    uVar3 = uVar4 - 1;
    if (*(uint *)(lVar6 + 0x18) <= uVar3) goto LAB_07428ba0;
  } while (*(int *)(lVar6 + (long)(int)uVar3 * 4 + 0x20) == 0);
  do {
    uVar3 = uVar1;
    if (uVar3 == 0) break;
    lVar6 = *(long *)(param_2 + 0x18);
    if (lVar6 == 0) goto LAB_07428b9c;
    uVar1 = uVar3 - 1;
    if (*(uint *)(lVar6 + 0x18) <= uVar1) goto LAB_07428ba0;
  } while (*(int *)(lVar6 + (long)(int)uVar1 * 4 + 0x20) == 0);
  if (uVar3 == 0 && uVar4 == 0) {
    uVar2 = 0;
  }
  else {
    if (uVar3 <= uVar4) {
      if (uVar4 != uVar3) {
        return 1;
      }
      lVar6 = *(long *)(param_1 + 0x18);
      do {
        uVar4 = uVar4 - 1;
        uVar2 = (ulong)uVar4;
        if (uVar4 == 0) {
          if (lVar6 == 0) goto LAB_07428b9c;
          break;
        }
        if (lVar6 == 0) goto LAB_07428b9c;
        if (*(uint *)(lVar6 + 0x18) <= uVar4) goto LAB_07428ba0;
        lVar5 = *(long *)(param_2 + 0x18);
        if (lVar5 == 0) goto LAB_07428b9c;
        if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07428ba0;
      } while (*(int *)(lVar6 + uVar2 * 4 + 0x20) == *(int *)(lVar5 + uVar2 * 4 + 0x20));
      if (*(uint *)(lVar6 + 0x18) <= uVar4) {
LAB_07428ba0:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar5 = *(long *)(param_2 + 0x18);
      if (lVar5 == 0) goto LAB_07428b9c;
      if (*(uint *)(lVar5 + 0x18) <= uVar4) goto LAB_07428ba0;
      uVar3 = *(uint *)(lVar6 + uVar2 * 4 + 0x20);
      uVar1 = *(uint *)(lVar5 + uVar2 * 4 + 0x20);
      if (uVar1 <= uVar3) {
        return (ulong)(uVar1 < uVar3);
      }
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

