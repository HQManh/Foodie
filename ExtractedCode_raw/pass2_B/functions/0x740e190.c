// rea decompile_all
// name: Mono.Math.BigInteger$$GenerateRandom
// address: 0x740e190
// body: available
// range: 0x740e190-0x740e2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740e2e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740e2ec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger__GenerateRandom(uint param_1,long *param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  uint uVar5;
  undefined1 auVar6 [16];
  
  if ((DAT_09520ef1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520ef1 = 1;
  }
  iVar1 = (int)param_1 >> 5;
  param_1 = param_1 & 0x1f;
  if (param_1 != 0) {
    iVar1 = iVar1 + 1;
  }
  auVar6 = thunk_FUN_03f9944c(DAT_09181b68);
  lVar2 = auVar6._0_8_;
  Mono_Math_BigInteger___ctor(lVar2,auVar6._8_8_,iVar1 + 1);
  uVar3 = FUN_03f5c394(DAT_0917fc88,iVar1 << 2);
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x198))(param_2,uVar3,*(undefined8 *)(*param_2 + 0x1a0));
    if (lVar2 != 0) {
      System_Buffer__BlockCopy(uVar3,0,*(undefined8 *)(lVar2 + 0x18),0,iVar1 << 2,0);
      if (param_1 == 0) {
        lVar4 = *(long *)(lVar2 + 0x18);
        if (lVar4 == 0) goto LAB_0740e2e8;
        if (*(uint *)(lVar4 + 0x18) <= (uint)((long)iVar1 + -1)) goto LAB_0740e2ec;
        lVar4 = lVar4 + ((long)iVar1 + -1) * 4;
        uVar5 = *(uint *)(lVar4 + 0x20) | 0x80000000;
      }
      else {
        lVar4 = *(long *)(lVar2 + 0x18);
        if (lVar4 == 0) goto LAB_0740e2e8;
        if (*(uint *)(lVar4 + 0x18) <= (uint)((long)iVar1 + -1)) {
LAB_0740e2ec:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar4 = lVar4 + ((long)iVar1 + -1) * 4;
        uVar5 = (*(uint *)(lVar4 + 0x20) | 1 << (ulong)(param_1 - 1 & 0x1f)) &
                0xffffffffU >> (ulong)(-param_1 & 0x1f);
      }
      *(uint *)(lVar4 + 0x20) = uVar5;
      Mono_Math_BigInteger__Normalize(lVar2);
      return lVar2;
    }
  }
LAB_0740e2e8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

