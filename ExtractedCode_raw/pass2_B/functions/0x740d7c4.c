// rea decompile_all
// name: Mono.Math.BigInteger.Kernel$$multiByteDivide
// address: 0x740d7c4
// body: available
// range: 0x740d7c4-0x740dc8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x740d870 to 0x740fcb8 Mono.Math.BigInteger.Kernel$$DwordDivMod (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x740dc7c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740dc80 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x740dc8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * Mono_Math_BigInteger_Kernel__multiByteDivide(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  ulong uVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  long lVar29;
  undefined1 auVar30 [16];
  
  if ((DAT_09520f05 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc10);
    FUN_03f5c2a4(&DAT_09181b68);
    DAT_09520f05 = 1;
  }
  iVar7 = Mono_Math_BigInteger_Kernel__Compare(param_1,param_2);
  if (iVar7 == -1) {
    plVar8 = (long *)FUN_03f5c394(DAT_0917fc10,2);
    if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09181b68);
    }
    lVar20 = Mono_Math_BigInteger__op_Implicit(0);
    if (plVar8 != (long *)0x0) {
      if ((lVar20 != 0) &&
         (lVar9 = thunk_FUN_03f99350(lVar20,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0)) {
LAB_0740dc84:
        uVar12 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar12,0);
      }
      if ((int)plVar8[3] != 0) {
        plVar8[4] = lVar20;
        thunk_FUN_03f5d7b8(plVar8 + 4,lVar20);
        lVar20 = thunk_FUN_03f9944c(DAT_09181b68);
        Mono_Math_BigInteger___ctor(lVar20,param_1);
        if ((lVar20 != 0) &&
           (lVar9 = thunk_FUN_03f99350(lVar20,*(undefined8 *)(*plVar8 + 0x40)), lVar9 == 0))
        goto LAB_0740dc84;
        if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
          plVar11 = plVar8 + 5;
          *plVar11 = lVar20;
LAB_0740dc58:
          thunk_FUN_03f5d7b8(plVar11,lVar20);
          return plVar8;
        }
      }
LAB_0740dc7c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
  else if ((param_1 != 0) && (Mono_Math_BigInteger__Normalize(param_1), param_2 != 0)) {
    Mono_Math_BigInteger__Normalize(param_2);
    iVar7 = *(int *)(param_2 + 0x10);
    uVar23 = iVar7 - 1;
    if (uVar23 == 0) {
      lVar20 = *(long *)(param_2 + 0x18);
      if (lVar20 != 0) {
        if (*(int *)(lVar20 + 0x18) != 0) {
          plVar8 = (long *)Mono_Math_BigInteger_Kernel__DwordDivMod
                                     (param_1,*(undefined4 *)(lVar20 + 0x20));
          return plVar8;
        }
        goto LAB_0740dc7c;
      }
    }
    else {
      lVar20 = *(long *)(param_2 + 0x18);
      if (lVar20 != 0) {
        if (*(uint *)(lVar20 + 0x18) <= uVar23) goto LAB_0740dc7c;
        uVar16 = *(uint *)(param_1 + 0x10);
        iVar27 = 0;
        uVar23 = *(uint *)(lVar20 + (long)(int)uVar23 * 4 + 0x20);
        uVar28 = uVar16 - iVar7;
        if (-1 < (int)uVar23) {
          uVar21 = 0x80000000;
          do {
            iVar27 = iVar27 + 1;
            if (uVar21 < 2) break;
            uVar2 = uVar21 >> 1;
            uVar21 = uVar21 >> 1;
          } while ((uVar23 & uVar2) == 0);
        }
        auVar30 = thunk_FUN_03f9944c(DAT_09181b68);
        lVar20 = auVar30._0_8_;
        Mono_Math_BigInteger___ctor(lVar20,auVar30._8_8_,uVar28 + 1);
        if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = Mono_Math_BigInteger_Kernel__LeftShift(param_1,iVar27);
        if (lVar9 != 0) {
          lVar29 = *(long *)(lVar9 + 0x18);
          lVar10 = Mono_Math_BigInteger_Kernel__LeftShift(param_2,iVar27);
          if ((lVar10 != 0) && (lVar26 = *(long *)(lVar10 + 0x18), lVar26 != 0)) {
            iVar5 = *(int *)(lVar10 + 0x10);
            uVar23 = (uint)*(ulong *)(lVar26 + 0x18);
            if ((uVar23 <= iVar5 - 1U) || (uVar23 <= iVar5 - 2U)) goto LAB_0740dc7c;
            iVar19 = (uVar16 + 1) - iVar5;
            if (iVar19 < 1) {
              if (lVar20 == 0) goto LAB_0740dc80;
            }
            else {
              if (lVar29 == 0) goto LAB_0740dc80;
              uVar22 = (ulong)(iVar7 + 1);
              uVar24 = *(ulong *)(lVar26 + 0x18) & 0xffffffff;
              uVar25 = (ulong)*(uint *)(lVar26 + (long)(int)(iVar5 - 1U) * 4 + 0x20);
              uVar23 = *(uint *)(lVar26 + (long)(int)(iVar5 - 2U) * 4 + 0x20);
              uVar21 = *(uint *)(lVar29 + 0x18);
              uVar4 = uVar22;
              if ((long)uVar22 < 2) {
                uVar4 = 1;
              }
              do {
                if ((uVar21 <= uVar16) || (uVar2 = uVar16 - 1, uVar21 <= uVar2)) goto LAB_0740dc7c;
                lVar10 = lVar29 + 0x20;
                uVar14 = CONCAT44(*(undefined4 *)(lVar10 + (long)(int)uVar16 * 4),
                                  *(undefined4 *)(lVar10 + (long)(int)uVar2 * 4));
                uVar13 = 0;
                if (uVar25 != 0) {
                  uVar13 = uVar14 / uVar25;
                }
                uVar14 = uVar14 - uVar13 * uVar25;
                do {
                  if (uVar13 != 0x100000000) {
                    if (uVar21 <= uVar16 - 2) goto LAB_0740dc7c;
                    uVar17 = uVar13 * uVar23;
                    uVar18 = (ulong)*(uint *)(lVar10 + (long)(int)(uVar16 - 2) * 4) | uVar14 << 0x20
                    ;
                    if (uVar17 < uVar18 || uVar17 - uVar18 == 0) break;
                  }
                  uVar14 = uVar14 + uVar25;
                  uVar13 = uVar13 - 1;
                } while (uVar14 >> 0x20 == 0);
                iVar7 = (int)uVar13;
                uVar14 = 0;
                uVar17 = 0;
                do {
                  if ((uVar24 == uVar14) || (uVar16 = uVar28 + (int)uVar14, uVar21 <= uVar16))
                  goto LAB_0740dc7c;
                  lVar10 = uVar14 * 4;
                  uVar14 = uVar14 + 1;
                  uVar18 = uVar17 + (uVar13 & 0xffffffff) * (ulong)*(uint *)(lVar26 + 0x20 + lVar10)
                  ;
                  uVar6 = *(uint *)(lVar29 + (long)(int)uVar16 * 4 + 0x20);
                  uVar17 = uVar18 >> 0x20;
                  uVar15 = (uint)uVar18;
                  *(uint *)(lVar29 + 0x20 + (long)(int)uVar16 * 4) = uVar6 - uVar15;
                  if (uVar6 < uVar15) {
                    uVar17 = uVar17 + 1;
                  }
                } while ((long)uVar14 < (long)uVar22);
                if (uVar17 != 0) {
                  uVar14 = 0;
                  uVar13 = 0;
                  iVar7 = iVar7 + -1;
                  do {
                    uVar16 = uVar28 + (int)uVar14;
                    if ((uVar21 <= uVar16) || (uVar24 == uVar14)) goto LAB_0740dc7c;
                    lVar3 = lVar29 + (long)(int)uVar16 * 4;
                    lVar10 = uVar14 * 4;
                    uVar14 = uVar14 + 1;
                    uVar17 = uVar13 + *(uint *)(lVar26 + 0x20 + lVar10) +
                             (ulong)*(uint *)(lVar3 + 0x20);
                    uVar13 = uVar17 >> 0x20;
                    *(int *)(lVar3 + 0x20) = (int)uVar17;
                  } while (uVar4 != uVar14);
                }
                if ((lVar20 == 0) || (lVar10 = *(long *)(lVar20 + 0x18), lVar10 == 0))
                goto LAB_0740dc80;
                if (*(uint *)(lVar10 + 0x18) <= uVar28) goto LAB_0740dc7c;
                lVar3 = (long)(int)uVar28;
                uVar28 = uVar28 - 1;
                iVar5 = iVar19 + -1;
                *(int *)(lVar10 + lVar3 * 4 + 0x20) = iVar7;
                bVar1 = 0 < iVar19;
                uVar16 = uVar2;
                iVar19 = iVar5;
              } while (iVar5 != 0 && bVar1);
            }
            Mono_Math_BigInteger__Normalize(lVar20);
            Mono_Math_BigInteger__Normalize(lVar9);
            plVar8 = (long *)FUN_03f5c394(DAT_0917fc10,2);
            if (plVar8 != (long *)0x0) {
              lVar10 = thunk_FUN_03f99350(lVar20,*(undefined8 *)(*plVar8 + 0x40));
              if (lVar10 != 0) {
                if ((int)plVar8[3] != 0) {
                  plVar8[4] = lVar20;
                  thunk_FUN_03f5d7b8(plVar8 + 4,lVar20);
                  lVar20 = thunk_FUN_03f99350(lVar9,*(undefined8 *)(*plVar8 + 0x40));
                  if (lVar20 == 0) goto LAB_0740dc84;
                  if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                    plVar11 = plVar8 + 5;
                    *plVar11 = lVar9;
                    thunk_FUN_03f5d7b8(plVar11,lVar9);
                    if (iVar27 == 0) {
                      return plVar8;
                    }
                    if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                      lVar20 = *plVar11;
                      if (*(int *)(DAT_09181b68 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      lVar20 = Mono_Math_BigInteger_Kernel__RightShift(lVar20,iVar27);
                      if ((lVar20 != 0) &&
                         (lVar9 = thunk_FUN_03f99350(lVar20,*(undefined8 *)(*plVar8 + 0x40)),
                         lVar9 == 0)) goto LAB_0740dc84;
                      if ((*(uint *)(plVar8 + 3) & 0xfffffffe) != 0) {
                        *plVar11 = lVar20;
                        goto LAB_0740dc58;
                      }
                    }
                  }
                }
                goto LAB_0740dc7c;
              }
              goto LAB_0740dc84;
            }
          }
        }
      }
    }
  }
LAB_0740dc80:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

