// rea decompile_all
// name: System.Decimal.DecCalc$$VarDecModFull
// address: 0x761927c
// body: available
// range: 0x761927c-0x76196c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76196a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76196bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76196c0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Decimal_DecCalc__VarDecModFull(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  long local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  if ((DAT_095220c7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918ff90);
    DAT_095220c7 = 1;
  }
  local_a0 = 0;
  local_98 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = *(uint *)(param_2 + 4);
  if (uVar8 == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = *(uint *)(param_2 + 0xc);
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = 0x11;
  uVar11 = uVar8 << 0x10;
  if (0xffff < uVar8) {
    uVar6 = 1;
    uVar11 = uVar8;
  }
  bVar3 = uVar11 >> 0x18 != 0;
  uVar8 = uVar11 << 8;
  if (bVar3) {
    uVar8 = uVar11;
  }
  uVar11 = uVar6 | 8;
  if (bVar3) {
    uVar11 = uVar6;
  }
  uVar6 = uVar11 | 4;
  uVar1 = uVar8 << 4;
  if (uVar8 >> 0x1c != 0) {
    uVar6 = uVar11;
    uVar1 = uVar8;
  }
  uVar11 = uVar1 << 2;
  uVar8 = uVar6 | 2;
  if (uVar1 >> 0x1e != 0) {
    uVar11 = uVar1;
    uVar8 = uVar6;
  }
  uVar8 = uVar8 + ((int)uVar11 >> 0x1f);
  uVar7 = (ulong)uVar8;
  uVar5 = (ulong)(0x20 - uVar8);
  local_90 = *(ulong *)(param_1 + 8) << (uVar7 & 0x3f);
  uStack_88 = (*(ulong *)(param_1 + 8) >> 0x20 | (ulong)*(uint *)(param_1 + 4) << 0x20) >>
              (uVar5 & 0x3f);
  lVar10 = DAT_0918ff90;
  if ((int)param_3 < 0) {
    uVar15 = (ulong)param_3;
    uVar11 = 3;
    do {
      iVar14 = (int)uVar15;
      if (uVar15 < 0xfffffff8) {
        uVar6 = 1000000000;
      }
      else {
        if (*(int *)(lVar10 + 0xe4) == 0) {
          FUN_03f5c424();
          lVar10 = DAT_0918ff90;
        }
        lVar9 = **(long **)(lVar10 + 0xb8);
        if (lVar9 == 0) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          goto LAB_076196c0;
        }
        uVar6 = -iVar14;
        if (*(uint *)(lVar9 + 0x18) <= uVar6) {
          if (*(long *)(lVar2 + 0x28) == local_68) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          goto LAB_076196c0;
        }
        uVar6 = *(uint *)(lVar9 + (ulong)uVar6 * 4 + 0x20);
      }
      uVar12 = local_90;
      if (*(int *)(lVar10 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar10 = DAT_0918ff90;
      }
      uVar12 = (uVar12 & 0xffffffff) * (ulong)uVar6;
      local_90 = CONCAT44(local_90._4_4_,(int)uVar12);
      if (uVar11 != 0) {
        iVar13 = 2;
        lVar9 = 1;
        do {
          uVar1 = *(uint *)((long)&local_90 + lVar9 * 4);
          if (*(int *)(lVar10 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar10 = DAT_0918ff90;
          }
          lVar4 = lVar9 * 4;
          lVar9 = (long)iVar13;
          uVar12 = (uVar12 >> 0x20) + (ulong)uVar1 * (ulong)uVar6;
          iVar13 = iVar13 + 1;
          *(int *)((long)&local_90 + lVar4) = (int)uVar12;
        } while (lVar9 <= (long)(ulong)uVar11);
      }
      if (uVar12 >> 0x1f != 0) {
        uVar11 = uVar11 + 1;
        *(int *)((long)&local_90 + (ulong)uVar11 * 4) = (int)(uVar12 >> 0x20);
      }
      uVar15 = uVar15 + 9;
    } while (iVar14 < -9);
  }
  else {
    uVar11 = 3;
  }
  if (*(int *)(lVar10 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar6 = *(uint *)(param_2 + 4);
  if (uVar6 == 0) {
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(param_2 + 8) << (uVar7 & 0x3f);
    if (uVar11 == 4) {
LAB_076195fc:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Decimal_DecCalc__Div96By64((ulong)&local_90 | 8,lVar10);
    }
    else {
      if (uVar11 == 5) {
LAB_076195dc:
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Decimal_DecCalc__Div96By64((ulong)&local_90 | 0xc,lVar10);
        goto LAB_076195fc;
      }
      if (uVar11 == 6) {
        if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Decimal_DecCalc__Div96By64(&uStack_80,lVar10);
        goto LAB_076195dc;
      }
    }
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Decimal_DecCalc__Div96By64((ulong)&local_90 | 4,lVar10);
    System_Decimal_DecCalc__Div96By64(&local_90,lVar10);
    uVar8 = 0;
    *(ulong *)(param_1 + 8) = local_90 >> (uVar7 & 0x3f);
    goto LAB_07619658;
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar6 = *(uint *)(param_2 + 4);
  }
  local_a0 = *(ulong *)(param_2 + 8) << (uVar7 & 0x3f);
  local_98 = CONCAT44(local_98._4_4_,
                      (int)((*(ulong *)(param_2 + 8) >> 0x20 | (ulong)uVar6 << 0x20) >>
                           (uVar5 & 0x3f)));
  if (uVar11 == 4) {
LAB_07619534:
    if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_Decimal_DecCalc__Div128By96((ulong)&local_90 | 4,&local_a0);
  }
  else {
    if (uVar11 == 5) {
LAB_07619518:
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Decimal_DecCalc__Div128By96((ulong)&local_90 | 8,&local_a0);
      goto LAB_07619534;
    }
    if (uVar11 == 6) {
      if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      System_Decimal_DecCalc__Div128By96((ulong)&local_90 | 0xc,&local_a0);
      goto LAB_07619518;
    }
  }
  if (*(int *)(DAT_0918ff90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_Decimal_DecCalc__Div128By96(&local_90,&local_a0);
  uVar8 = (uint)uStack_88 >> (ulong)(uVar8 & 0x1f);
  *(ulong *)(param_1 + 8) =
       (local_90 >> (uVar7 & 0x3f)) + (((uStack_88 & 0xffffffff) << (uVar5 & 0x3f)) << 0x20);
LAB_07619658:
  *(uint *)(param_1 + 4) = uVar8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
LAB_076196c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

