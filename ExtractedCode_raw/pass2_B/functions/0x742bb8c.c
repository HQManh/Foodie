// rea decompile_all
// name: Mono.Math.Prime.PrimalityTests$$RabinMillerTest
// address: 0x742bb8c
// body: available
// range: 0x742bb8c-0x742be2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742be28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool Mono_Math_Prime_PrimalityTests__RabinMillerTest(long param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  bool bVar12;
  
  if ((DAT_09520fe1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    FUN_03f5c2a4(&DAT_0918e7d8);
    DAT_09520fe1 = 1;
  }
  if (param_1 != 0) {
    uVar1 = Mono_Math_BigInteger__BitCount(param_1);
    if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181b70);
    }
    uVar6 = Mono_Math_BigInteger__op_Implicit(uVar1);
    iVar2 = Mono_Math_Prime_PrimalityTests__GetSPPRounds(uVar6,param_2);
    uVar6 = Mono_Math_BigInteger__op_Implicit(1);
    lVar7 = Mono_Math_BigInteger__op_Subtraction(param_1,uVar6);
    if (lVar7 != 0) {
      iVar3 = Mono_Math_BigInteger__LowestSetBit();
      uVar6 = Mono_Math_BigInteger_Kernel__RightShift(lVar7,iVar3);
      lVar8 = thunk_FUN_03f9944c(DAT_0918e7d8);
      Mono_Math_BigInteger_ModulusRing___ctor(lVar8,param_1);
      iVar4 = Mono_Math_BigInteger__BitCount(param_1);
      if (iVar4 < 0x65) {
        uVar11 = 0;
      }
      else {
        if (lVar8 == 0) goto LAB_0742be28;
        uVar11 = Mono_Math_BigInteger_ModulusRing__Pow(lVar8,2,uVar6);
      }
      if (iVar2 < 1) {
        bVar12 = true;
      }
      else {
        bVar12 = false;
        iVar4 = 0;
        do {
          if (iVar4 == 0) {
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = Mono_Math_BigInteger__op_Equality(uVar11,0);
            if ((uVar9 & 1) != 0) goto LAB_0742bcd0;
          }
          else {
LAB_0742bcd0:
            do {
              if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar11 = Mono_Math_BigInteger__GenerateRandom(uVar1);
              uVar10 = Mono_Math_BigInteger__op_Implicit(2);
              iVar5 = Mono_Math_BigInteger_Kernel__Compare(uVar11,uVar10);
              if (0 < iVar5) break;
              if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar5 = Mono_Math_BigInteger_Kernel__Compare(uVar11,lVar7);
            } while (-1 < iVar5);
            if (lVar8 == 0) goto LAB_0742be28;
            uVar11 = Mono_Math_BigInteger_ModulusRing__Pow(lVar8,uVar11,uVar6);
          }
          if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = Mono_Math_BigInteger__op_Equality(uVar11,1);
          if ((uVar9 & 1) == 0) {
            iVar5 = iVar3;
            if (0 < iVar3) {
              do {
                if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar9 = Mono_Math_BigInteger__op_Inequality(uVar11,lVar7);
                if ((uVar9 & 1) == 0) break;
                if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar10 = Mono_Math_BigInteger__op_Implicit(2);
                if (lVar8 == 0) goto LAB_0742be28;
                uVar11 = Mono_Math_BigInteger_ModulusRing__Pow(lVar8,uVar11,uVar10);
                uVar9 = Mono_Math_BigInteger__op_Equality(uVar11,1);
                if ((uVar9 & 1) != 0) {
                  return bVar12;
                }
                iVar5 = iVar5 + -1;
              } while (iVar5 != 0);
            }
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar9 = Mono_Math_BigInteger__op_Inequality(uVar11,lVar7);
            if ((uVar9 & 1) != 0) {
              return bVar12;
            }
          }
          iVar4 = iVar4 + 1;
          bVar12 = iVar2 <= iVar4;
        } while (iVar4 != iVar2);
      }
      return bVar12;
    }
  }
LAB_0742be28:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

