// rea decompile_all
// name: Mono.Math.Prime.PrimalityTests$$SmallPrimeSppTest
// address: 0x742b9b8
// body: available
// range: 0x742b9b8-0x742bb8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742bb84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742bb88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Mono_Math_Prime_PrimalityTests__SmallPrimeSppTest(undefined8 param_1,undefined4 param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  
  if ((DAT_09520fe2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    FUN_03f5c2a4(&DAT_0918e7d8);
    DAT_09520fe2 = 1;
  }
  uVar2 = Mono_Math_Prime_PrimalityTests__GetSPPRounds(param_1,param_2);
  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09181b70);
  }
  uVar4 = Mono_Math_BigInteger__op_Implicit(1);
  lVar5 = Mono_Math_BigInteger__op_Subtraction(param_1,uVar4);
  if (lVar5 != 0) {
    iVar3 = Mono_Math_BigInteger__LowestSetBit();
    uVar4 = Mono_Math_BigInteger_Kernel__RightShift(lVar5,iVar3);
    lVar6 = thunk_FUN_03f9944c(DAT_0918e7d8);
    Mono_Math_BigInteger_ModulusRing___ctor(lVar6,param_1);
    if ((int)uVar2 < 1) {
      bVar1 = true;
    }
    else {
      uVar10 = 0;
      bVar1 = false;
      do {
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_09181b70 + 0xb8);
        if (lVar9 == 0) goto LAB_0742bb84;
        if (*(uint *)(lVar9 + 0x18) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (lVar6 == 0) goto LAB_0742bb84;
        uVar7 = Mono_Math_BigInteger_ModulusRing__Pow
                          (lVar6,*(undefined4 *)(lVar9 + uVar10 * 4 + 0x20),uVar4);
        uVar8 = Mono_Math_BigInteger__op_Equality(uVar7,1);
        if ((uVar8 & 1) == 0) {
          iVar11 = iVar3;
          if (iVar3 < 1) {
            return bVar1;
          }
          while( true ) {
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar8 = Mono_Math_BigInteger__op_Equality(uVar7,lVar5);
            if ((uVar8 & 1) != 0) break;
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = Mono_Math_BigInteger__op_Multiply(uVar7,uVar7);
            uVar7 = Mono_Math_BigInteger__op_Modulus(uVar7,param_1);
            iVar11 = iVar11 + -1;
            if (iVar11 == 0) {
              return bVar1;
            }
          }
        }
        uVar10 = uVar10 + 1;
        bVar1 = uVar2 <= uVar10;
      } while (uVar10 != uVar2);
    }
    return bVar1;
  }
LAB_0742bb84:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

