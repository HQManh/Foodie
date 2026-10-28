// rea decompile_all
// name: UniRx.InternalUtil.MicroCoroutine$$Run
// address: 0x418c9cc
// body: available
// range: 0x418c9cc-0x418ccbf inclusive
// range: 0x418ccc4-0x418ccc7 inclusive
// range: 0x418cccc-0x418cccf inclusive
// range: 0x418ccd4-0x418ccdf inclusive
// range: 0x418cce4-0x418cce7 inclusive
// range: 0x418ccec-0x418ccef inclusive
// range: 0x418ccf4-0x418ccf7 inclusive
// range: 0x418cdec-0x418ce03 inclusive
// range: 0x418ce08-0x418ce0b inclusive
// range: 0x418cefc-0x418d023 inclusive
// range: 0x418d1bc-0x418d22b inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x418ccbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ccc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418cccc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ccdc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418cce4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ccec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ccf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ce00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418ce08 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418cfd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418cfdc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x418cfe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0418d01c) */
/* WARNING: Removing unreachable block (ram,0x0418d224) */
/* WARNING: Removing unreachable block (ram,0x0418d228) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void UniRx_InternalUtil_MicroCoroutine__Run(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  int iVar12;
  long *plVar13;
  char local_7c [4];
  undefined8 local_78;
  char local_6c [4];
  undefined8 local_68;
  
  if ((DAT_09516778 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c05d0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091d3898);
    FUN_03f5c2a4(&DAT_091b8c08);
    FUN_03f5c2a4(&DAT_091b8c18);
    DAT_09516778 = 1;
  }
  local_68 = *(undefined8 *)(param_1 + 0x10);
  local_6c[0] = '\0';
  local_78 = 0;
  local_7c[0] = '\0';
  System_Threading_Monitor__Enter(local_68,local_6c,0);
  *(undefined1 *)(param_1 + 0x2c) = 1;
  if (local_6c[0] != '\0') {
    System_Threading_Monitor__Exit(local_68,0);
  }
  local_68 = *(undefined8 *)(param_1 + 0x18);
  local_6c[0] = '\0';
  System_Threading_Monitor__Enter(local_68,local_6c,0);
  plVar8 = (long *)(param_1 + 0x30);
  lVar4 = *plVar8;
  if (lVar4 == 0) {
LAB_0418d014:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar9 = 0;
  iVar12 = *(int *)(param_1 + 0x28) + -1;
LAB_0418cb04:
  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar9) goto LAB_0418cf00;
  if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar11 = *(long **)(lVar4 + uVar9 * 8 + 0x20);
  if (plVar11 == (long *)0x0) {
LAB_0418cba4:
    if ((long)uVar9 < (long)iVar12) {
      uVar5 = (ulong)iVar12;
      do {
        lVar4 = *plVar8;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        plVar11 = *(long **)(lVar4 + uVar5 * 8 + 0x20);
        if (plVar11 != (long *)0x0) {
          lVar4 = *plVar11;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_0418cc1c;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar1 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_0418cc1c:
          uVar6 = (*(code *)*puVar1)(plVar11,puVar1[1]);
          plVar13 = (long *)*plVar8;
          if ((uVar6 & 1) != 0) goto code_r0x0418cc30;
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (*(uint *)(plVar13 + 3) <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar13[uVar5 + 4] = 0;
          thunk_FUN_03f5d7b8(plVar13 + uVar5 + 4,0);
        }
        uVar5 = uVar5 - 1;
        if ((long)uVar5 <= (long)uVar9) break;
      } while( true );
    }
    *(int *)(param_1 + 0x28) = (int)uVar9;
LAB_0418cf00:
    local_78 = *(undefined8 *)(param_1 + 0x10);
    local_7c[0] = '\0';
    System_Threading_Monitor__Enter(local_78,local_7c,0);
    *(undefined1 *)(param_1 + 0x2c) = 0;
    while( true ) {
      lVar4 = *(long *)(param_1 + 0x38);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar4 + 0x20) == 0) {
        if (local_7c[0] != '\0') {
          System_Threading_Monitor__Exit(local_78,0);
        }
        if (local_6c[0] != '\0') {
          System_Threading_Monitor__Exit(local_68,0);
        }
        return;
      }
      plVar11 = (long *)*plVar8;
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar10 = *(uint *)(param_1 + 0x28);
      if (uVar10 == *(uint *)(plVar11 + 3)) {
        if (-1 < (int)(uVar10 + 0xc0000000)) {
          uVar2 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,DAT_091d3898);
        }
        FUN_0492e500(plVar8,uVar10 << 1,DAT_091c05d0);
        uVar10 = *(uint *)(param_1 + 0x28);
        plVar11 = *(long **)(param_1 + 0x30);
        lVar4 = *(long *)(param_1 + 0x38);
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
        if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        *(uint *)(param_1 + 0x28) = uVar10 + 1;
      }
      lVar4 = FUN_05e2d168(lVar4,DAT_091b8c08);
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((lVar4 != 0) &&
         (lVar3 = thunk_FUN_03f99350(lVar4,*(undefined8 *)(*plVar11 + 0x40)), lVar3 == 0)) break;
      if (*(uint *)(plVar11 + 3) <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      plVar11[(long)(int)uVar10 + 4] = lVar4;
      thunk_FUN_03f5d7b8(plVar11 + (long)(int)uVar10 + 4,lVar4);
    }
    uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,0);
  }
  lVar4 = *plVar11;
  uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
  if (uVar5 != 0) {
    piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_09185b10) {
        puVar1 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_0418cb70;
      }
      uVar5 = uVar5 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar5 != 0);
  }
  puVar1 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_0418cb70:
  uVar5 = (*(code *)*puVar1)(plVar11,puVar1[1]);
  if ((uVar5 & 1) == 0) {
    lVar4 = *plVar8;
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(uint *)(lVar4 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    puVar1 = (undefined8 *)(lVar4 + uVar9 * 8 + 0x20);
    *puVar1 = 0;
    thunk_FUN_03f5d7b8(puVar1,0);
    goto LAB_0418cba4;
  }
  goto LAB_0418cdf0;
code_r0x0418cc30:
  if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = thunk_FUN_03f99350(plVar11,*(undefined8 *)(*plVar13 + 0x40));
  if (lVar4 == 0) {
    uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar2,0);
  }
  if (*(uint *)(plVar13 + 3) <= uVar9) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  plVar13[uVar9 + 4] = (long)plVar11;
  thunk_FUN_03f5d7b8(plVar13 + uVar9 + 4,plVar11);
  lVar4 = *plVar8;
  if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar4 + 0x18) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  puVar1 = (undefined8 *)(lVar4 + uVar5 * 8 + 0x20);
  *puVar1 = 0;
  thunk_FUN_03f5d7b8(puVar1,0);
  iVar12 = (int)uVar5 + -1;
LAB_0418cdf0:
  lVar4 = *plVar8;
  uVar9 = uVar9 + 1;
  if (lVar4 == 0) goto LAB_0418d014;
  goto LAB_0418cb04;
}

