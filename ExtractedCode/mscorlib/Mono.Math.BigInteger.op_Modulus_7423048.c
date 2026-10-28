// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$DwordMod
// address: 0x7423048
// body: available
// range: 0x7423048-0x742304b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_Kernel__DwordMod(long param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  
  if (param_1 == 0) {
LAB_07428db0:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(param_1 + 0x10) == 0) {
    lVar1 = 0;
  }
  else {
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 == 0) goto LAB_07428db0;
    lVar1 = 0;
    uVar4 = (ulong)param_2;
    uVar2 = (ulong)*(uint *)(param_1 + 0x10);
    do {
      uVar6 = uVar2 - 1;
      if (*(uint *)(lVar5 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558(lVar1);
      }
      uVar3 = (ulong)*(uint *)(lVar5 + 0x1c + uVar2 * 4) | lVar1 << 0x20;
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = uVar3 / uVar4;
      }
      lVar1 = uVar3 - uVar2 * uVar4;
      uVar2 = uVar6;
    } while (uVar6 != 0);
  }
  return lVar1;
}

