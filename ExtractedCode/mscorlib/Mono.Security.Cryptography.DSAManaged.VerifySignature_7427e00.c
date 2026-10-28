// rea decompile_all
// name: Mono.Security.Cryptography.DSAManaged$$VerifySignature
// address: 0x7427e00
// body: available
// range: 0x7427e00-0x742815f inclusive
// range: 0x742822c-0x7428257 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74280bc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7428154 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7428158 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x742815c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7428254 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Mono_Security_Cryptography_DSAManaged__VerifySignature(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  if ((DAT_09520fb5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520fb5 = 1;
  }
  if (*(char *)(param_1 + 0x21) != '\0') {
    uVar3 = thunk_FUN_03fc39d4(&DAT_09206680);
    uVar3 = Locale__GetText(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar4 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar4,uVar3,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091c7208);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09221ba8;
  }
  else {
    if (param_3 != 0) {
      if (*(int *)(param_2 + 0x18) == 0x14) {
        if (*(int *)(param_3 + 0x18) == 0x28) {
          if (*(char *)(param_1 + 0x20) != '\0') {
            uVar3 = thunk_FUN_03f9944c(DAT_09181b70);
            Mono_Math_BigInteger___ctor(uVar3,param_2);
            uVar4 = FUN_03f5c394(DAT_0917fc88,0x14);
            System_Array__Copy(param_3,0,uVar4,0,0x14,0);
            uVar5 = thunk_FUN_03f9944c(DAT_09181b70);
            Mono_Math_BigInteger___ctor(uVar5,uVar4);
            System_Array__Copy(param_3,0x14,uVar4,0,0x14,0);
            lVar6 = thunk_FUN_03f9944c(DAT_09181b70);
            Mono_Math_BigInteger___ctor(lVar6,uVar4);
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = Mono_Math_BigInteger__op_Implicit(0);
            iVar1 = Mono_Math_BigInteger_Kernel__Compare(uVar5,uVar4);
            if (-1 < iVar1) {
              uVar4 = *(undefined8 *)(param_1 + 0x30);
              if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar1 = Mono_Math_BigInteger_Kernel__Compare(uVar4,uVar5);
              if (0 < iVar1) {
                if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = Mono_Math_BigInteger__op_Implicit(0);
                iVar1 = Mono_Math_BigInteger_Kernel__Compare(lVar6,uVar4);
                if (-1 < iVar1) {
                  uVar4 = *(undefined8 *)(param_1 + 0x30);
                  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  iVar1 = Mono_Math_BigInteger_Kernel__Compare(uVar4,lVar6);
                  if (0 < iVar1) {
                    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar4 = Mono_Math_BigInteger_Kernel__modInverse
                                      (lVar6,*(undefined8 *)(param_1 + 0x30));
                    if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar3 = Mono_Math_BigInteger__op_Multiply(uVar3,uVar4);
                    uVar3 = Mono_Math_BigInteger__op_Modulus(uVar3,*(undefined8 *)(param_1 + 0x30));
                    uVar4 = Mono_Math_BigInteger__op_Multiply(uVar5,uVar4);
                    uVar4 = Mono_Math_BigInteger__op_Modulus(uVar4,*(undefined8 *)(param_1 + 0x30));
                    if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar3 = Mono_Math_BigInteger__ModPow
                                      (*(long *)(param_1 + 0x38),uVar3,
                                       *(undefined8 *)(param_1 + 0x28));
                    if (*(long *)(param_1 + 0x48) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    uVar4 = Mono_Math_BigInteger__ModPow
                                      (*(long *)(param_1 + 0x48),uVar4,
                                       *(undefined8 *)(param_1 + 0x28));
                    uVar3 = Mono_Math_BigInteger__op_Multiply(uVar3,uVar4);
                    uVar3 = Mono_Math_BigInteger__op_Modulus(uVar3,*(undefined8 *)(param_1 + 0x28));
                    uVar3 = Mono_Math_BigInteger__op_Modulus(uVar3,*(undefined8 *)(param_1 + 0x30));
                    uVar2 = Mono_Math_BigInteger__op_Equality(uVar3,uVar5);
                    goto LAB_07428058;
                  }
                }
              }
            }
          }
          uVar2 = 0;
LAB_07428058:
          return uVar2 & 1;
        }
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar3 = thunk_FUN_03f9944c();
        puVar7 = &DAT_0921d828;
      }
      else {
        thunk_FUN_03fc39d4(&DAT_09182f98);
        uVar3 = thunk_FUN_03f9944c();
        puVar7 = &DAT_0921d7e0;
      }
      uVar4 = thunk_FUN_03fc39d4(puVar7);
      System_Security_Cryptography_CryptographicException___ctor(uVar3,uVar4,0);
      goto LAB_07428240;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    puVar7 = &DAT_09221bc0;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar7);
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
LAB_07428240:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c7208);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

