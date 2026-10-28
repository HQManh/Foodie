// rea decompile_all
// name: Mono.Math.BigInteger$$op_Subtraction
// address: 0x74233c8
// body: available
// range: 0x74233c8-0x742352f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7423498 to 0x7428ba4 Mono.Math.BigInteger.Kernel$$Subtract (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74234bc to 0x7423324 Mono.Math.BigInteger$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742352c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Mono_Math_BigInteger__op_Subtraction(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09520fc0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fc0 = 1;
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Mono_Math_BigInteger__op_Equality(param_2,0);
  if ((uVar2 & 1) != 0) {
    uVar3 = thunk_FUN_03f9944c();
    Mono_Math_BigInteger___ctor(uVar3,param_1);
    return uVar3;
  }
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = Mono_Math_BigInteger__op_Equality(param_1,0);
  if ((uVar2 & 1) == 0) {
    iVar1 = Mono_Math_BigInteger_Kernel__Compare(param_1,param_2);
    if (iVar1 == 0) {
      if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = Mono_Math_BigInteger__op_Implicit(0);
      return uVar3;
    }
    if (iVar1 == 1) {
      uVar3 = Mono_Math_BigInteger_Kernel__Subtract(param_1,param_2);
      return uVar3;
    }
    if (iVar1 != -1) {
      thunk_FUN_03fc39d4(&DAT_091842a0);
      uVar3 = thunk_FUN_03f9944c();
      System_Exception___ctor(uVar3,0);
      goto LAB_07423518;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181560);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09209e38);
  System_ArithmeticException___ctor(uVar3,uVar4,0);
LAB_07423518:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c3788);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

