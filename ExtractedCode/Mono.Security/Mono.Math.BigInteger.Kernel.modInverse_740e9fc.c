// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$modInverse
// address: 0x740e9fc
// body: available
// range: 0x740e9fc-0x740efd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740eac4 to 0x7408bf0 Mono.Math.BigInteger$$op_Implicit (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740ef78 to 0x740fa94 Mono.Math.BigInteger.ModulusRing$$Difference (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740ef7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740ef88 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740ef8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740efd4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Mono_Math_BigInteger_Kernel__modInverse(long param_1,long param_2)

{
  undefined4 uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  long *plVar16;
  long *plVar17;
  
  if ((DAT_09520f09 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc10);
    FUN_03f5c2a4(&DAT_09181b68);
    FUN_03f5c2a4(&DAT_0918e7d0);
    DAT_09520f09 = 1;
  }
  if (param_2 != 0) {
    if (*(int *)(param_2 + 0x10) == 1) {
      lVar13 = *(long *)(param_2 + 0x18);
      if (lVar13 != 0) {
        if (*(int *)(lVar13 + 0x18) != 0) {
          uVar1 = Mono_Math_BigInteger_Kernel__modInverse(param_1,*(undefined4 *)(lVar13 + 0x20));
          if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09181b68);
          }
          Mono_Math_BigInteger__op_Implicit(uVar1);
          return;
        }
        goto LAB_0740ef7c;
      }
    }
    else {
      plVar2 = (long *)FUN_03f5c394(DAT_0917fc10,2);
      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09181b68);
      }
      lVar13 = Mono_Math_BigInteger__op_Implicit(0);
      if (plVar2 != (long *)0x0) {
        if ((lVar13 != 0) &&
           (lVar3 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0)) {
LAB_0740ef80:
          uVar10 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,0);
        }
        if ((int)plVar2[3] != 0) {
          plVar4 = plVar2 + 4;
          *plVar4 = lVar13;
          thunk_FUN_03f5d7b8(plVar4,lVar13);
          lVar13 = Mono_Math_BigInteger__op_Implicit(1);
          if ((lVar13 != 0) &&
             (lVar3 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar2 + 0x40)), lVar3 == 0))
          goto LAB_0740ef80;
          if ((*(uint *)(plVar2 + 3) & 0xfffffffe) != 0) {
            plVar5 = plVar2 + 5;
            *plVar5 = lVar13;
            thunk_FUN_03f5d7b8(plVar5,lVar13);
            plVar6 = (long *)FUN_03f5c394(DAT_0917fc10,2);
            plVar7 = (long *)FUN_03f5c394(DAT_0917fc10,2);
            lVar13 = Mono_Math_BigInteger__op_Implicit(0);
            if (plVar7 == (long *)0x0) goto LAB_0740ef8c;
            if ((lVar13 != 0) &&
               (lVar3 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
            goto LAB_0740ef80;
            if ((int)plVar7[3] != 0) {
              plVar16 = plVar7 + 4;
              *plVar16 = lVar13;
              thunk_FUN_03f5d7b8(plVar16,lVar13);
              lVar13 = Mono_Math_BigInteger__op_Implicit(0);
              if ((lVar13 != 0) &&
                 (lVar3 = thunk_FUN_03f99350(lVar13,*(undefined8 *)(*plVar7 + 0x40)), lVar3 == 0))
              goto LAB_0740ef80;
              if ((*(uint *)(plVar7 + 3) & 0xfffffffe) != 0) {
                plVar17 = plVar7 + 5;
                *plVar17 = lVar13;
                thunk_FUN_03f5d7b8(plVar17,lVar13);
                lVar13 = thunk_FUN_03f9944c(DAT_0918e7d0);
                Mono_Math_BigInteger_ModulusRing___ctor(lVar13,param_2);
                iVar14 = 0;
                while( true ) {
                  if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar8 = Mono_Math_BigInteger__op_Inequality(param_1,0);
                  if ((uVar8 & 1) == 0) break;
                  if (iVar14 < 2) {
                    lVar3 = Mono_Math_BigInteger_Kernel__multiByteDivide(param_2,param_1);
                    if (plVar6 == (long *)0x0) goto LAB_0740ef8c;
                  }
                  else {
                    if (((int)plVar2[3] == 0) || ((int)plVar2[3] == 1)) goto LAB_0740ef7c;
                    if (plVar6 == (long *)0x0) goto LAB_0740ef8c;
                    if ((int)plVar6[3] == 0) goto LAB_0740ef7c;
                    lVar3 = plVar6[4];
                    lVar15 = *plVar4;
                    lVar9 = *plVar5;
                    if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    uVar10 = Mono_Math_BigInteger__op_Multiply(lVar9,lVar3);
                    if (lVar13 == 0) goto LAB_0740ef8c;
                    lVar3 = Mono_Math_BigInteger_ModulusRing__Difference(lVar13,lVar15,uVar10);
                    if ((plVar2[3] & 0xfffffffeU) == 0) goto LAB_0740ef7c;
                    lVar15 = *plVar5;
                    if (lVar15 == 0) {
                      iVar12 = (int)plVar2[3];
                    }
                    else {
                      lVar9 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar2 + 0x40));
                      if (lVar9 == 0) goto LAB_0740ef80;
                      iVar12 = (int)plVar2[3];
                    }
                    if (iVar12 == 0) goto LAB_0740ef7c;
                    *plVar4 = lVar15;
                    thunk_FUN_03f5d7b8(plVar4,lVar15);
                    if ((lVar3 != 0) &&
                       (lVar15 = thunk_FUN_03f99350(lVar3,*(undefined8 *)(*plVar2 + 0x40)),
                       lVar15 == 0)) goto LAB_0740ef80;
                    if ((*(uint *)(plVar2 + 3) & 0xfffffffe) == 0) goto LAB_0740ef7c;
                    *plVar5 = lVar3;
                    thunk_FUN_03f5d7b8(plVar5,lVar3);
                    lVar3 = Mono_Math_BigInteger_Kernel__multiByteDivide(param_2,param_1);
                  }
                  if ((plVar6[3] & 0xfffffffeU) == 0) goto LAB_0740ef7c;
                  lVar15 = plVar6[5];
                  if (lVar15 == 0) {
                    iVar12 = (int)plVar6[3];
                  }
                  else {
                    lVar9 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar6 + 0x40));
                    if (lVar9 == 0) goto LAB_0740ef80;
                    iVar12 = (int)plVar6[3];
                  }
                  if (iVar12 == 0) goto LAB_0740ef7c;
                  plVar6[4] = lVar15;
                  thunk_FUN_03f5d7b8(plVar6 + 4,lVar15);
                  if (lVar3 == 0) goto LAB_0740ef8c;
                  if (*(int *)(lVar3 + 0x18) == 0) goto LAB_0740ef7c;
                  lVar15 = *(long *)(lVar3 + 0x20);
                  if ((lVar15 != 0) &&
                     (lVar9 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar6 + 0x40)), lVar9 == 0
                     )) goto LAB_0740ef80;
                  if ((*(uint *)(plVar6 + 3) & 0xfffffffe) == 0) goto LAB_0740ef7c;
                  plVar6[5] = lVar15;
                  thunk_FUN_03f5d7b8(plVar6 + 5,lVar15);
                  if ((plVar7[3] & 0xfffffffeU) == 0) goto LAB_0740ef7c;
                  lVar15 = *plVar17;
                  if (lVar15 == 0) {
                    iVar12 = (int)plVar7[3];
                  }
                  else {
                    lVar9 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar7 + 0x40));
                    if (lVar9 == 0) goto LAB_0740ef80;
                    iVar12 = (int)plVar7[3];
                  }
                  if (iVar12 == 0) goto LAB_0740ef7c;
                  *plVar16 = lVar15;
                  thunk_FUN_03f5d7b8(plVar16,lVar15);
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0740ef7c;
                  lVar15 = *(long *)(lVar3 + 0x28);
                  if ((lVar15 != 0) &&
                     (lVar9 = thunk_FUN_03f99350(lVar15,*(undefined8 *)(*plVar7 + 0x40)), lVar9 == 0
                     )) goto LAB_0740ef80;
                  if ((*(uint *)(plVar7 + 3) & 0xfffffffe) == 0) goto LAB_0740ef7c;
                  *plVar17 = lVar15;
                  thunk_FUN_03f5d7b8(plVar17,lVar15);
                  if ((*(uint *)(lVar3 + 0x18) & 0xfffffffe) == 0) goto LAB_0740ef7c;
                  iVar14 = iVar14 + 1;
                  param_2 = param_1;
                  param_1 = *(long *)(lVar3 + 0x28);
                }
                if ((int)plVar7[3] != 0) {
                  lVar3 = *plVar16;
                  if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uVar8 = Mono_Math_BigInteger__op_Inequality(lVar3,1);
                  if ((uVar8 & 1) != 0) {
                    thunk_FUN_03fc39d4(&DAT_09181560);
                    uVar10 = thunk_FUN_03f9944c();
                    uVar11 = thunk_FUN_03fc39d4(&DAT_09208ae8);
                    System_ArithmeticException___ctor(uVar10,uVar11,0);
                    uVar11 = thunk_FUN_03fc39d4(&DAT_091e61f8);
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c414(uVar10,uVar11);
                  }
                  if (((int)plVar2[3] != 0) && ((int)plVar2[3] != 1)) {
                    if (plVar6 == (long *)0x0) goto LAB_0740ef8c;
                    if ((int)plVar6[3] != 0) {
                      lVar9 = plVar6[4];
                      lVar3 = *plVar4;
                      lVar15 = *plVar5;
                      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar10 = Mono_Math_BigInteger__op_Multiply(lVar15,lVar9);
                      if (lVar13 != 0) {
                        Mono_Math_BigInteger_ModulusRing__Difference(lVar13,lVar3,uVar10);
                        return;
                      }
                      goto LAB_0740ef8c;
                    }
                  }
                }
              }
            }
          }
        }
LAB_0740ef7c:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_0740ef8c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

