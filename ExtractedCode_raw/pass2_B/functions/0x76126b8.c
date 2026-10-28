// rea decompile_all
// name: System.Decimal.DecCalc$$DecAddSub
// address: 0x76126b8
// body: available
// range: 0x76126b8-0x7612d6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7612cf8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7612d10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7612d68 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7612d6c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__DecAddSub(uint *param_1,uint *param_2,byte param_3)

{
  undefined1 auVar1 [16];
  long lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  ulong local_80;
  undefined8 local_78;
  int local_70 [2];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_095220bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220bc = 1;
  }
  local_80 = 0;
  local_78 = 0;
  local_70[0] = 0;
  local_70[1] = 0;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar10 = *param_1;
  uVar7 = param_1[1];
  uVar12 = *(ulong *)(param_1 + 2);
  uVar15 = *param_2 ^ uVar10;
  param_3 = -1 < (int)uVar15 ^ param_3;
  if ((uVar15 & 0xff0000) == 0) {
LAB_07612810:
    if ((param_3 & 1) == 0) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = uVar12 - *(ulong *)(param_2 + 2);
      uVar15 = uVar7 - param_2[1];
      if (uVar12 < *(ulong *)(param_2 + 2)) {
        uVar11 = uVar15 - 1;
        if (uVar7 <= uVar15 - 1) {
          uVar10 = uVar10 ^ 0x80000000;
          uVar13 = -uVar13;
          uVar11 = -uVar15;
        }
      }
      else {
        uVar11 = uVar15;
        if (uVar7 < param_2[1]) {
          bVar3 = uVar13 != 0;
          uVar13 = -uVar13;
          uVar10 = uVar10 ^ 0x80000000;
          uVar11 = -uVar15;
          if (bVar3) {
            uVar11 = ~uVar15;
          }
        }
      }
    }
    else {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar13 = *(ulong *)(param_2 + 2) + uVar12;
      uVar11 = param_2[1] + uVar7;
      if (CARRY8(*(ulong *)(param_2 + 2),uVar12)) {
        uVar11 = uVar11 + 1;
        if (uVar11 <= uVar7) {
LAB_07612a00:
          if ((uVar10 & 0xff0000) == 0) {
            thunk_FUN_03fc39d4(&DAT_09188d78);
            uVar5 = thunk_FUN_03f9944c();
            uVar6 = thunk_FUN_03fc39d4(&DAT_09212d08);
            System_OverflowException___ctor(uVar5,uVar6,0);
            if (*(long *)(lVar2 + 0x28) == local_68) {
              uVar6 = thunk_FUN_03fc39d4(&DAT_091e8c60);
                    /* WARNING: Subroutine does not return */
              FUN_03f5c414(uVar5,uVar6);
            }
            goto LAB_07612d6c;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = (ulong)uVar11 | 0x100000000;
          uVar10 = uVar10 - 0x10000;
          uVar7 = SUB164(auVar1 * ZEXT816(0x199999999999999a),8);
          uVar8 = (uVar13 >> 0x20 | (ulong)(uVar11 + uVar7 * -10) << 0x20) / 10;
          uVar12 = uVar13 & 0xfffffffe |
                   (ulong)(uint)((int)(uVar13 >> 0x20) + (int)uVar8 * -10) << 0x20;
          uVar16 = uVar12 / 10;
          uVar15 = (int)uVar13 + (int)uVar16 * -10;
          uVar13 = uVar8 << 0x20 | uVar12 / 10 & 0xffffffff;
          uVar11 = uVar7;
          if ((4 < uVar15) &&
             ((((uVar16 & 1) != 0 || (uVar15 != 5)) &&
              (bVar3 = uVar13 == 0xffffffffffffffff, uVar13 = uVar13 + 1, bVar3)))) {
            uVar11 = uVar7 + 1;
          }
        }
      }
      else if (uVar11 < uVar7) goto LAB_07612a00;
    }
    goto LAB_07612c10;
  }
  uVar11 = *param_2 & 0xff0000 | uVar10 & 0x80000000;
  uVar15 = (int)(uVar11 - uVar10) >> 0x10;
  uVar16 = (ulong)uVar15;
  if ((int)uVar15 < 0) {
    uVar16 = (ulong)-uVar15;
    if ((param_3 & 1) == 0) {
      uVar10 = uVar10 ^ 0x80000000;
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = *(undefined8 *)param_1;
    uVar12 = *(ulong *)(param_2 + 2);
    uVar7 = param_2[1];
    *(undefined8 *)(param_2 + 2) = *(undefined8 *)(param_1 + 2);
    *(undefined8 *)param_2 = uVar5;
    if (uVar7 == 0) goto LAB_076129a8;
LAB_07612778:
    uVar13 = (ulong)uVar7;
    lVar14 = DAT_0918ff90;
LAB_0761277c:
    uVar16 = uVar16 & 0xffffffff;
    do {
      if (uVar16 < 9) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar14 = DAT_0918ff90;
        }
        lVar9 = **(long **)(lVar14 + 0xb8);
        if (lVar9 == 0) goto LAB_07612ce4;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_07612cfc;
        uVar15 = *(uint *)(lVar9 + uVar16 * 4 + 0x20);
      }
      else {
        uVar15 = 1000000000;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar14 = DAT_0918ff90;
      }
      uVar8 = (uVar12 & 0xffffffff) * (ulong)uVar15;
      uVar12 = (uVar8 >> 0x20) + (uVar12 >> 0x20) * (ulong)uVar15;
      uVar13 = (uVar12 >> 0x20) + (ulong)uVar15 * (uVar13 & 0xffffffff);
      uVar12 = uVar8 & 0xffffffff | uVar12 << 0x20;
      if (uVar13 >> 0x20 != 0) {
        uVar7 = (int)uVar16 - 9;
        uVar16 = (ulong)uVar7;
        local_80 = uVar12;
        local_78 = uVar13;
        uVar15 = 3;
        if (0 < (int)uVar7) goto LAB_07612894;
        goto LAB_07612930;
      }
      uVar16 = uVar16 - 9;
    } while (0 < (int)uVar16);
LAB_0761280c:
    uVar7 = (uint)uVar13;
    goto LAB_07612810;
  }
  uVar10 = uVar11;
  if (uVar7 != 0) goto LAB_07612778;
LAB_076129a8:
  if (uVar12 >> 0x20 != 0) {
    uVar15 = (uint)uVar16;
LAB_07612abc:
    uVar16 = (ulong)uVar15;
    lVar14 = DAT_0918ff90;
    do {
      if (uVar16 < 9) {
        if (*(int *)(lVar14 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar14 = DAT_0918ff90;
        }
        lVar9 = **(long **)(lVar14 + 0xb8);
        if (lVar9 == 0) goto LAB_07612ce4;
        if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_07612cfc;
        uVar15 = *(uint *)(lVar9 + uVar16 * 4 + 0x20);
      }
      else {
        uVar15 = 1000000000;
      }
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar14 = DAT_0918ff90;
      }
      uVar13 = (uVar12 & 0xffffffff) * (ulong)uVar15;
      uVar8 = (uVar13 >> 0x20) + (uVar12 >> 0x20) * (ulong)uVar15;
      uVar12 = uVar13 & 0xffffffff | uVar8 << 0x20;
      uVar13 = uVar8 >> 0x20;
      if ((int)uVar16 + -9 < 1) goto LAB_0761280c;
      uVar16 = uVar16 - 9;
    } while ((int)(uVar8 >> 0x20) == 0);
    goto LAB_0761277c;
  }
  if (uVar12 != 0) {
    lVar14 = uVar16 * 4 + 0x20;
    uVar8 = uVar12;
    do {
      uVar7 = (uint)uVar16;
      uVar15 = uVar7 - 9;
      if (uVar7 < 9 || uVar15 == 0) {
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        lVar9 = **(long **)(DAT_0918ff90 + 0xb8);
        if (lVar9 == 0) goto LAB_07612ce4;
        if (*(uint *)(lVar9 + 0x18) <= uVar7) goto LAB_07612cfc;
        uVar13 = 0;
        uVar12 = uVar8 * *(uint *)(lVar9 + lVar14);
        goto LAB_0761280c;
      }
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar12 = uVar8 * 1000000000;
      bVar3 = uVar8 < 5;
      lVar14 = lVar14 + -0x24;
      uVar16 = (ulong)uVar15;
      uVar8 = uVar12;
    } while (bVar3);
    goto LAB_07612abc;
  }
  uVar5 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = uVar5;
  uVar15 = uVar10 & 0x80000000;
  if ((param_3 & 1) == 0) {
    uVar15 = uVar10 & 0x80000000 ^ 0x80000000;
  }
  *param_1 = uVar15 | (uint)*(byte *)((long)param_2 + 2) << 0x10;
  goto LAB_07612c2c;
LAB_07612ce4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_07612d6c;
LAB_07612cfc:
  if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  goto LAB_07612d6c;
  while( true ) {
    uVar13 = 0;
    uVar12 = 0;
    do {
      uVar11 = *(uint *)((long)&local_80 + uVar13 * 4);
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar14 = DAT_0918ff90;
      }
      uVar8 = uVar12 + (ulong)uVar11 * (ulong)uVar7;
      lVar9 = uVar13 * 4;
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulong)uVar11;
      *(int *)((long)&local_80 + lVar9) = (int)uVar8;
      uVar12 = uVar8 >> 0x20;
    } while (uVar11 <= uVar15);
    iVar4 = (int)(uVar8 >> 0x20);
    if (iVar4 != 0) {
      uVar15 = uVar15 + 1;
      *(int *)((long)&local_80 + (ulong)uVar15 * 4) = iVar4;
    }
    iVar4 = (int)uVar16;
    uVar16 = uVar16 - 9;
    if (iVar4 < 10) break;
LAB_07612894:
    if (uVar16 < 9) {
      if (*(int *)(lVar14 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar14 = DAT_0918ff90;
      }
      lVar9 = **(long **)(lVar14 + 0xb8);
      if (lVar9 == 0) goto LAB_07612ce4;
      if (*(uint *)(lVar9 + 0x18) <= uVar16) goto LAB_07612cfc;
      uVar7 = *(uint *)(lVar9 + uVar16 * 4 + 0x20);
    }
    else {
      uVar7 = 1000000000;
    }
  }
LAB_07612930:
  uVar12 = local_80;
  if (*(int *)(lVar14 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar16 = *(ulong *)(param_2 + 2);
  uVar7 = param_2[1];
  if ((param_3 & 1) == 0) {
    uVar13 = uVar12 - uVar16;
    uVar11 = (uint)local_78 - uVar7;
    if (uVar16 <= uVar12) {
      if ((uint)local_78 < uVar7) goto LAB_07612ba8;
      goto LAB_07612bd4;
    }
    uVar11 = uVar11 - 1;
    if (uVar11 < (uint)local_78) goto LAB_07612bd4;
LAB_07612ba8:
    uVar12 = 3;
    do {
      iVar4 = *(int *)((long)&local_80 + uVar12 * 4);
      *(int *)((long)&local_80 + uVar12 * 4) = iVar4 + -1;
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (iVar4 == 0);
    if (*(int *)((long)&local_80 + (ulong)uVar15 * 4) != 0) goto LAB_07612bd4;
    uVar12 = (ulong)(uVar15 - 1);
    if (2 < uVar15 - 1) goto LAB_07612bd8;
  }
  else {
    uVar13 = uVar16 + uVar12;
    uVar11 = uVar7 + (uint)local_78;
    if (CARRY8(uVar16,uVar12)) {
      uVar11 = uVar11 + 1;
      if ((uint)local_78 < uVar11) goto LAB_07612bd4;
LAB_07612b6c:
      uVar12 = 3;
      do {
        iVar4 = *(int *)((long)&local_80 + uVar12 * 4);
        *(int *)((long)&local_80 + uVar12 * 4) = iVar4 + 1;
        if (iVar4 != -1) goto LAB_07612bd4;
        uVar7 = (int)uVar12 + 1;
        uVar12 = (ulong)uVar7;
      } while (uVar7 <= uVar15);
      *(undefined4 *)((long)&local_80 + (ulong)uVar7 * 4) = 1;
    }
    else {
      if (uVar11 < (uint)local_78) goto LAB_07612b6c;
LAB_07612bd4:
      uVar12 = (ulong)uVar15;
    }
LAB_07612bd8:
    local_78 = CONCAT44(local_78._4_4_,uVar11);
    local_80 = uVar13;
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar4 = System_Decimal_DecCalc__ScaleResult(&local_80,uVar12,uVar10 >> 0x10 & 0xff);
    uVar10 = uVar10 & 0xff00ffff | iVar4 << 0x10;
    uVar13 = local_80;
    uVar11 = (uint)local_78;
  }
LAB_07612c10:
  *param_1 = uVar10;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  param_1[1] = uVar11;
  *(ulong *)(param_1 + 2) = uVar13;
LAB_07612c2c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_07612d6c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

