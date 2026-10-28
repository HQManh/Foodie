// rea decompile_all
// name: Mono.Security.Cryptography.DSAManaged$$GenerateParams
// address: 0x7426b34
// body: available
// range: 0x7426b34-0x742708b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7427080 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7427084 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7427088 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_DSAManaged__GenerateParams(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  undefined8 uVar18;
  
  if ((DAT_09520fb0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09520fb0 = 1;
  }
  lVar4 = FUN_03f5c394(DAT_0917fc88,0x14);
  FUN_03f5c394(DAT_0917fc88,0x14);
  lVar5 = FUN_03f5c394(DAT_0917fc88,0x14);
  lVar6 = FUN_03f5c394(DAT_0917fc88,0x14);
  lVar7 = System_Security_Cryptography_SHA1__Create(0);
  iVar1 = param_2 + -1;
  iVar3 = param_2 + 7;
  if (-1 < param_2) {
    iVar3 = param_2;
  }
  iVar2 = iVar1 / 0xa0;
  lVar8 = FUN_03f5c394(DAT_0917fc88,iVar3 >> 3);
  while (((plVar9 = (long *)Mono_Security_Cryptography_DSAManaged__get_Random(param_1),
          plVar9 != (long *)0x0 &&
          ((**(code **)(*plVar9 + 0x198))(plVar9,lVar4,*(undefined8 *)(*plVar9 + 0x1a0)), lVar7 != 0
          )) && (lVar10 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,lVar4,0),
                lVar4 != 0))) {
    uVar11 = System_Array__Copy(lVar4,0,lVar5,0,*(undefined4 *)(lVar4 + 0x18),0);
    Mono_Security_Cryptography_DSAManaged__add(uVar11,lVar5,lVar4,1);
    lVar5 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,lVar5,0);
    if (lVar6 == 0) break;
    uVar15 = *(uint *)(lVar6 + 0x18);
    if (uVar15 == 0) {
LAB_07427088:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    uVar14 = 0;
    do {
      if (lVar10 == 0) goto LAB_07427084;
      if (*(uint *)(lVar10 + 0x18) <= uVar14) goto LAB_07427088;
      if (lVar5 == 0) goto LAB_07427084;
      if ((*(uint *)(lVar5 + 0x18) <= uVar14) || (uVar15 <= uVar14)) goto LAB_07427088;
      lVar16 = (long)(int)uVar14;
      uVar14 = uVar14 + 1;
      *(byte *)(lVar6 + lVar16 + 0x20) =
           *(byte *)(lVar5 + lVar16 + 0x20) ^ *(byte *)(lVar10 + lVar16 + 0x20);
      uVar15 = *(uint *)(lVar6 + 0x18);
    } while (uVar14 != uVar15);
    if ((uVar14 == 0) || (*(byte *)(lVar6 + 0x20) = *(byte *)(lVar6 + 0x20) | 0x80, uVar14 < 0x14))
    goto LAB_07427088;
    *(byte *)(lVar6 + 0x33) = *(byte *)(lVar6 + 0x33) | 1;
    uVar11 = thunk_FUN_03f9944c(DAT_09181b70);
    Mono_Math_BigInteger___ctor(uVar11,lVar6);
    *(undefined8 *)(param_1 + 0x30) = uVar11;
    thunk_FUN_03f5d7b8(param_1 + 0x30,uVar11);
    if (*(long *)(param_1 + 0x30) == 0) break;
    uVar12 = Mono_Math_BigInteger__IsProbablePrime();
    if ((uVar12 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x60) = 0;
      iVar3 = 2;
      do {
        if (0x9f < iVar1) {
          iVar17 = 0;
          do {
            Mono_Security_Cryptography_DSAManaged__add(uVar12,lVar10,lVar4,iVar3 + iVar17);
            lVar10 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,lVar10,0);
            if ((lVar8 == 0) || (lVar10 == 0)) goto LAB_07427084;
            iVar17 = iVar17 + 1;
            uVar12 = System_Array__Copy(lVar10,0,lVar8,
                                        *(int *)(lVar8 + 0x18) - iVar17 * *(int *)(lVar10 + 0x18),
                                        *(int *)(lVar10 + 0x18),0);
          } while (iVar2 != iVar17);
        }
        Mono_Security_Cryptography_DSAManaged__add(uVar12,lVar10,lVar4,iVar3 + iVar2);
        lVar10 = System_Security_Cryptography_HashAlgorithm__ComputeHash(lVar7,lVar10,0);
        if ((lVar10 == 0) || (lVar8 == 0)) goto LAB_07427084;
        iVar17 = *(int *)(lVar8 + 0x18) - iVar2 * *(int *)(lVar10 + 0x18);
        System_Array__Copy(lVar10,*(int *)(lVar10 + 0x18) - iVar17,lVar8,0,iVar17,0);
        lVar16 = DAT_09181b70;
        if (*(int *)(lVar8 + 0x18) == 0) goto LAB_07427088;
        *(byte *)(lVar8 + 0x20) = *(byte *)(lVar8 + 0x20) | 0x80;
        uVar11 = thunk_FUN_03f9944c(lVar16);
        Mono_Math_BigInteger___ctor(uVar11,lVar8);
        uVar18 = *(undefined8 *)(param_1 + 0x30);
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar18 = Mono_Math_BigInteger__op_Multiply(uVar18,2);
        uVar18 = Mono_Math_BigInteger__op_Modulus(uVar11,uVar18);
        uVar13 = Mono_Math_BigInteger__op_Implicit(1);
        uVar18 = Mono_Math_BigInteger__op_Subtraction(uVar18,uVar13);
        uVar11 = Mono_Math_BigInteger__op_Subtraction(uVar11,uVar18);
        *(undefined8 *)(param_1 + 0x28) = uVar11;
        thunk_FUN_03f5d7b8(param_1 + 0x28,uVar11);
        if (*(long *)(param_1 + 0x28) == 0) goto LAB_07427084;
        uVar12 = Mono_Math_BigInteger__TestBit(*(long *)(param_1 + 0x28),iVar1);
        if ((uVar12 & 1) != 0) {
          if (*(long *)(param_1 + 0x28) == 0) goto LAB_07427084;
          uVar12 = Mono_Math_BigInteger__IsProbablePrime();
          if ((uVar12 & 1) != 0) {
            uVar11 = *(undefined8 *)(param_1 + 0x28);
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar18 = Mono_Math_BigInteger__op_Implicit(1);
            uVar11 = Mono_Math_BigInteger__op_Subtraction(uVar11,uVar18);
            uVar11 = Mono_Math_BigInteger__op_Division(uVar11,*(undefined8 *)(param_1 + 0x30));
            while( true ) {
              do {
                do {
                  if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = Mono_Math_BigInteger__GenerateRandom(param_2);
                  uVar18 = Mono_Math_BigInteger__op_Implicit(1);
                  iVar3 = Mono_Math_BigInteger_Kernel__Compare(lVar5,uVar18);
                } while (iVar3 < 1);
                uVar18 = *(undefined8 *)(param_1 + 0x28);
                if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar13 = Mono_Math_BigInteger__op_Implicit(1);
                uVar18 = Mono_Math_BigInteger__op_Subtraction(uVar18,uVar13);
                iVar3 = Mono_Math_BigInteger_Kernel__Compare(lVar5,uVar18);
              } while (-1 < iVar3);
              if (lVar5 == 0) break;
              uVar18 = Mono_Math_BigInteger__ModPow(lVar5,uVar11,*(undefined8 *)(param_1 + 0x28));
              *(undefined8 *)(param_1 + 0x38) = uVar18;
              thunk_FUN_03f5d7b8(param_1 + 0x38,uVar18);
              uVar18 = *(undefined8 *)(param_1 + 0x38);
              if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar13 = Mono_Math_BigInteger__op_Implicit(1);
              iVar3 = Mono_Math_BigInteger_Kernel__Compare(uVar18,uVar13);
              if (0 < iVar3) {
                uVar11 = thunk_FUN_03f9944c(DAT_09181b70);
                Mono_Math_BigInteger___ctor(uVar11,lVar4);
                *(undefined8 *)(param_1 + 0x58) = uVar11;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar11);
                uVar11 = *(undefined8 *)(param_1 + 0x28);
                if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar18 = Mono_Math_BigInteger__op_Implicit(1);
                uVar11 = Mono_Math_BigInteger__op_Subtraction(uVar11,uVar18);
                uVar11 = Mono_Math_BigInteger__op_Division(uVar11,*(undefined8 *)(param_1 + 0x30));
                *(undefined8 *)(param_1 + 0x50) = uVar11;
                thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x50),uVar11);
                return;
              }
            }
            goto LAB_07427084;
          }
        }
        iVar17 = *(int *)(param_1 + 0x60) + 1;
        *(int *)(param_1 + 0x60) = iVar17;
        iVar3 = iVar3 + iVar2 + 1;
      } while (iVar17 < 0x1000);
    }
  }
LAB_07427084:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

