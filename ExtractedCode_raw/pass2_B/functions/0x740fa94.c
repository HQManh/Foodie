// rea decompile_all
// name: Mono.Math.BigInteger.ModulusRing$$Difference
// address: 0x740fa94
// body: available
// range: 0x740fa94-0x740fc47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740fb18 to 0x7408f90 Mono.Math.BigInteger$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740fc0c to 0x7409034 Mono.Math.BigInteger$$op_Subtraction (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740fc10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740fc44 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long Mono_Math_BigInteger_ModulusRing__Difference
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  if ((DAT_09520f00 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b68);
    DAT_09520f00 = 1;
  }
  iVar1 = Mono_Math_BigInteger_Kernel__Compare(param_2,param_3);
  if (iVar1 == -1) {
    uVar4 = param_3;
    if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 0) {
        thunk_FUN_03fc39d4(&DAT_091842a0);
        uVar4 = thunk_FUN_03f9944c();
        System_Exception___ctor(uVar4,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091e6208);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar5);
      }
      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = Mono_Math_BigInteger__op_Implicit(0);
      return lVar3;
    }
    uVar4 = param_2;
    param_2 = param_3;
    if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  lVar3 = Mono_Math_BigInteger__op_Subtraction(uVar4,param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar2 = Mono_Math_BigInteger_Kernel__Compare(lVar3,uVar4);
  if (-1 < iVar2) {
    if ((lVar3 == 0) || (lVar6 = *(long *)(param_1 + 0x10), lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar3 + 0x10) < (uint)(*(int *)(lVar6 + 0x10) << 1)) {
      Mono_Math_BigInteger_ModulusRing__BarrettReduction(param_1,lVar3);
    }
    else {
      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar3 = Mono_Math_BigInteger__op_Modulus(lVar3,lVar6);
    }
  }
  if (iVar1 == -1) {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = Mono_Math_BigInteger__op_Subtraction(uVar4,lVar3);
    return lVar3;
  }
  return lVar3;
}

