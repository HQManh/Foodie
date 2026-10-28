// rea decompile_all
// name: Mono.Security.Cryptography.RSAManaged$$ImportParameters
// address: 0x74240c8
// body: available
// range: 0x74240c8-0x7424613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742460c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7424610 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Security_Cryptography_RSAManaged__ImportParameters(long param_1,long *param_2)

{
  int iVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  
  if ((DAT_09520fa3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181b70);
    DAT_09520fa3 = 1;
  }
  if (*(char *)(param_1 + 0x23) == '\0') {
    lVar9 = *param_2;
    if (lVar9 == 0) {
      puVar7 = &DAT_09207ed8;
    }
    else if (param_2[1] == 0) {
      puVar7 = &DAT_09207ee8;
    }
    else {
      lVar3 = thunk_FUN_03f9944c(DAT_09181b70);
      Mono_Math_BigInteger___ctor(lVar3,lVar9);
      plVar14 = (long *)(param_1 + 0x60);
      *plVar14 = lVar3;
      thunk_FUN_03f5d7b8(plVar14,lVar3);
      lVar9 = param_2[1];
      uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
      Mono_Math_BigInteger___ctor(uVar4,lVar9);
      *(undefined8 *)(param_1 + 0x58) = uVar4;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x58),uVar4);
      plVar10 = (long *)(param_1 + 0x38);
      *plVar10 = 0;
      thunk_FUN_03f5d7b8(plVar10,0);
      puVar11 = (undefined8 *)(param_1 + 0x30);
      *puVar11 = 0;
      thunk_FUN_03f5d7b8(puVar11,0);
      puVar12 = (undefined8 *)(param_1 + 0x50);
      *puVar12 = 0;
      thunk_FUN_03f5d7b8(puVar12,0);
      puVar13 = (undefined8 *)(param_1 + 0x48);
      *puVar13 = 0;
      thunk_FUN_03f5d7b8(puVar13,0);
      puVar15 = (undefined8 *)(param_1 + 0x40);
      *puVar15 = 0;
      thunk_FUN_03f5d7b8(puVar15,0);
      puVar16 = (undefined8 *)(param_1 + 0x28);
      *puVar16 = 0;
      thunk_FUN_03f5d7b8(puVar16,0);
      lVar9 = param_2[7];
      if (lVar9 != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(uVar4,lVar9);
        *puVar16 = uVar4;
        thunk_FUN_03f5d7b8(puVar16,uVar4);
      }
      lVar9 = param_2[4];
      if (lVar9 != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(uVar4,lVar9);
        *puVar15 = uVar4;
        thunk_FUN_03f5d7b8(puVar15,uVar4);
      }
      lVar9 = param_2[5];
      if (lVar9 != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(uVar4,lVar9);
        *puVar13 = uVar4;
        thunk_FUN_03f5d7b8(puVar13,uVar4);
      }
      lVar9 = param_2[6];
      if (lVar9 != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(uVar4,lVar9);
        *puVar12 = uVar4;
        thunk_FUN_03f5d7b8(puVar12,uVar4);
      }
      lVar9 = param_2[2];
      if (lVar9 != 0) {
        uVar4 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(uVar4,lVar9);
        *puVar11 = uVar4;
        thunk_FUN_03f5d7b8(puVar11,uVar4);
      }
      lVar9 = param_2[3];
      if (lVar9 != 0) {
        lVar3 = thunk_FUN_03f9944c(DAT_09181b70);
        Mono_Math_BigInteger___ctor(lVar3,lVar9);
        *plVar10 = lVar3;
        thunk_FUN_03f5d7b8(plVar10,lVar3);
      }
      lVar9 = DAT_09181b70;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined1 *)(param_1 + 0x22) = 1;
      if (*(int *)(lVar9 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Mono_Math_BigInteger__op_Inequality(uVar4,0);
      if ((uVar5 & 1) == 0) {
LAB_074243dc:
        *(undefined1 *)(param_1 + 0x20) = 0;
        return;
      }
      lVar9 = *plVar10;
      if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Mono_Math_BigInteger__op_Inequality(lVar9,0);
      if ((uVar5 & 1) == 0) goto LAB_074243dc;
      uVar4 = *puVar15;
      if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Mono_Math_BigInteger__op_Inequality(uVar4,0);
      if ((uVar5 & 1) == 0) goto LAB_074243dc;
      uVar4 = *puVar13;
      if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Mono_Math_BigInteger__op_Inequality(uVar4,0);
      if ((uVar5 & 1) == 0) {
        bVar2 = 0;
      }
      else {
        uVar4 = *puVar12;
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar2 = Mono_Math_BigInteger__op_Inequality(uVar4,0);
      }
      lVar9 = DAT_09181b70;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      uVar6 = *(undefined8 *)(param_1 + 0x38);
      uVar17 = *(undefined8 *)(param_1 + 0x58);
      iVar1 = *(int *)(DAT_09181b70 + 0xe4);
      *(byte *)(param_1 + 0x20) = bVar2 & 1;
      if (iVar1 == 0) {
        FUN_03f5c424(lVar9);
      }
      uVar4 = Mono_Math_BigInteger__op_Multiply(uVar4,uVar6);
      uVar5 = Mono_Math_BigInteger__op_Equality(uVar17,uVar4);
      if ((uVar5 & 1) != 0) {
        uVar4 = *puVar11;
        if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = Mono_Math_BigInteger__op_Implicit(1);
        uVar4 = Mono_Math_BigInteger__op_Subtraction(uVar4,uVar6);
        lVar9 = *plVar10;
        uVar6 = Mono_Math_BigInteger__op_Implicit(1);
        uVar6 = Mono_Math_BigInteger__op_Subtraction(lVar9,uVar6);
        uVar17 = Mono_Math_BigInteger__op_Multiply(uVar4,uVar6);
        if (*plVar14 == 0) {
LAB_07424610:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar17 = Mono_Math_BigInteger_Kernel__modInverse(*plVar14,uVar17);
        uVar5 = Mono_Math_BigInteger__op_Equality(*puVar16,uVar17);
        if ((uVar5 & 1) != 0) {
          return;
        }
        if (*(char *)(param_1 + 0x20) != '\0') {
          uVar8 = *puVar15;
          if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = Mono_Math_BigInteger__op_Modulus(uVar17,uVar4);
          uVar5 = Mono_Math_BigInteger__op_Equality(uVar8,uVar4);
          if ((uVar5 & 1) != 0) {
            uVar4 = *puVar13;
            if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = Mono_Math_BigInteger__op_Modulus(uVar17,uVar6);
            uVar5 = Mono_Math_BigInteger__op_Equality(uVar4,uVar6);
            if ((uVar5 & 1) != 0) {
              if (*plVar10 == 0) goto LAB_07424610;
              uVar6 = *puVar12;
              uVar4 = Mono_Math_BigInteger_Kernel__modInverse(*plVar10,*puVar11);
              if (*(int *)(DAT_09181b70 + 0xe4) == 0) {
                FUN_03f5c424(DAT_09181b70);
              }
              uVar5 = Mono_Math_BigInteger__op_Equality(uVar6,uVar4);
              if ((uVar5 & 1) != 0) {
                return;
              }
            }
          }
        }
      }
      puVar7 = &DAT_0920adc8;
    }
    uVar4 = thunk_FUN_03fc39d4(puVar7);
    uVar4 = Locale__GetText(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09182f98);
    uVar6 = thunk_FUN_03f9944c();
    System_Security_Cryptography_CryptographicException___ctor(uVar6,uVar4,0);
  }
  else {
    uVar4 = thunk_FUN_03fc39d4(&DAT_09206680);
    uVar4 = Locale__GetText(uVar4,0);
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar6 = thunk_FUN_03f9944c();
    System_ObjectDisposedException___ctor(uVar6,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d6e18);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar4);
}

