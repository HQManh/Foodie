// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$MultiplyByDword
// address: 0x7429364
// body: available
// range: 0x7429364-0x7429453 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742944c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7429450 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_Kernel__MultiplyByDword(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [12];
  
  if ((DAT_09520fde & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fde = 1;
  }
  if (param_1 != 0) {
    iVar2 = *(int *)(param_1 + 0x10);
    auVar11 = thunk_FUN_03f9944c(DAT_09181b70);
    lVar5 = auVar11._0_8_;
    Mono_Math_BigInteger___ctor(lVar5,auVar11._8_4_,iVar2 + 1);
    lVar9 = *(long *)(param_1 + 0x18);
    if (lVar9 != 0) {
      uVar3 = *(uint *)(lVar9 + 0x18);
      uVar6 = 0;
      uVar7 = 0;
      do {
        if (uVar3 == uVar6) goto LAB_07429450;
        if ((lVar5 == 0) || (lVar10 = *(long *)(lVar5 + 0x18), lVar10 == 0)) goto LAB_0742944c;
        uVar4 = *(uint *)(lVar10 + 0x18);
        if (uVar4 <= uVar6) goto LAB_07429450;
        uVar8 = uVar7 + (ulong)*(uint *)(lVar9 + 0x20 + uVar6 * 4) * (ulong)param_2;
        lVar1 = uVar6 * 4;
        uVar6 = uVar6 + 1;
        *(int *)(lVar10 + lVar1 + 0x20) = (int)uVar8;
        uVar7 = uVar8 >> 0x20;
      } while (uVar6 < *(uint *)(param_1 + 0x10));
      if ((uint)uVar6 < uVar4) {
        *(int *)(lVar10 + uVar6 * 4 + 0x20) = (int)(uVar8 >> 0x20);
        Mono_Math_BigInteger__Normalize(lVar5);
        return lVar5;
      }
LAB_07429450:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_0742944c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

