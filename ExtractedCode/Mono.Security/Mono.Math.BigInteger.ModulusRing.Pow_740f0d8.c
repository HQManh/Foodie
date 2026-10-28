// rea decompile_all
// name: Mono.Math.BigInteger.ModulusRing$$Pow
// address: 0x740f0d8
// body: available
// range: 0x740f0d8-0x740f1db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740f1d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Math_BigInteger_ModulusRing__Pow(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_09520f01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    DAT_09520f01 = 1;
  }
  uVar3 = thunk_FUN_03f9944c(DAT_09181b68);
  Mono_Math_BigInteger___ctor(uVar3,1);
  if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = Mono_Math_BigInteger__op_Equality(param_3,0);
  uVar5 = uVar3;
  if ((uVar4 & 1) == 0) {
    if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar4 = Mono_Math_BigInteger__TestBit(param_3,0);
    uVar5 = param_2;
    if ((uVar4 & 1) == 0) {
      uVar5 = uVar3;
    }
    iVar1 = Mono_Math_BigInteger__BitCount(param_3);
    if (1 < iVar1) {
      iVar1 = 1;
      do {
        param_2 = Mono_Math_BigInteger_ModulusRing__Multiply(param_1,param_2,param_2);
        uVar4 = Mono_Math_BigInteger__TestBit(param_3,iVar1);
        if ((uVar4 & 1) != 0) {
          uVar5 = Mono_Math_BigInteger_ModulusRing__Multiply(param_1,param_2,uVar5);
        }
        iVar1 = iVar1 + 1;
        iVar2 = Mono_Math_BigInteger__BitCount(param_3);
      } while (iVar1 < iVar2);
    }
  }
  return uVar5;
}

