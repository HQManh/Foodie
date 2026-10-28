// rea decompile_all
// name: AnhPD.FoodOrder.CustomerLoader.<LoadCustomer>d__82$$MoveNext
// address: 0x421ac1c
// body: available
// range: 0x421ac1c-0x421b457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x421b2e0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b2e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b2e8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b380 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b384 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b3f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b3f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b450 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421b454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerLoader_<LoadCustomer>d__82__MoveNext(int *param_1)

{
  uint uVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  long *local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
  long *local_80;
  undefined8 uStack_78;
  ulong local_70;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  
  if ((DAT_09516cf7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf6e8);
    FUN_03f5c2a4(&DAT_091bf638);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197800);
    FUN_03f5c2a4(&DAT_09197808);
    FUN_03f5c2a4(&DAT_091c11d0);
    FUN_03f5c2a4(&DAT_091c12e0);
    FUN_03f5c2a4(&DAT_09181780);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091830e8);
    FUN_03f5c2a4(&DAT_0919f5d0);
    FUN_03f5c2a4(&DAT_091cd8e8);
    FUN_03f5c2a4(&DAT_091aa4e8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bc2b8);
    FUN_03f5c2a4(&DAT_091bc2c0);
    FUN_03f5c2a4(&DAT_091bcba8);
    FUN_03f5c2a4(&DAT_091bde30);
    DAT_09516cf7 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  local_a0 = (long *)0x0;
  uStack_98 = 0;
  lVar14 = *(long *)(param_1 + 0xc);
  if (*param_1 == 0) {
    local_88 = *(undefined8 *)(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_90 = *(ulong *)(param_1 + 0x16);
      uStack_98 = *(undefined8 *)(param_1 + 0x14);
      local_a0 = *(long **)(param_1 + 0x12);
      param_1[0x14] = 0;
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      goto LAB_0421affc;
    }
    uVar12 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 8),0);
    if ((uVar12 & 1) != 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar6 = thunk_FUN_03f9944c();
      uVar13 = thunk_FUN_03fc39d4(&DAT_0921a048);
      uVar11 = thunk_FUN_03fc39d4(&DAT_091ffa98);
      System_ArgumentNullException___ctor(uVar6,uVar13,uVar11,0);
      uVar13 = thunk_FUN_03fc39d4(&DAT_091e8300);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar6,uVar13);
    }
    uVar6 = AnhPD_FoodOrder_CustomerAddress__For(*(undefined8 *)(param_1 + 8),0);
    *(undefined8 *)(param_1 + 0xe) = uVar6;
    thunk_FUN_03f5d7b8();
    uVar6 = *(undefined8 *)(param_1 + 0xe);
    uVar13 = *(undefined8 *)(param_1 + 10);
    if (*(int *)(DAT_091830e8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar4 = AnhPD_FoodOrder_CustomerLoader__HasAddress(uVar6,uVar13);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_88 = FUN_062e8294(lVar4,DAT_091bcba8);
    uVar12 = FUN_062098a0(&local_88,DAT_091bc2c0);
    if ((uVar12 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = local_88;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      if (*(int *)(DAT_09181780 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_049912f4(param_1 + 2,&local_88,param_1,DAT_091c12e0);
      return;
    }
  }
  uVar12 = FUN_062098e0(&local_88,DAT_091bc2b8);
  uVar6 = *(undefined8 *)(param_1 + 0xe);
  if ((uVar12 & 1) == 0) {
    uVar13 = thunk_FUN_03fc39d4(&DAT_091fb5a0);
    uVar11 = thunk_FUN_03fc39d4(&DAT_091f7a88);
    uVar6 = System_String__Concat(uVar13,uVar6,uVar11,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar13 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar13,uVar6,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_091e8300);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar13,uVar6);
  }
  if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04b711d8(&local_60,uVar6,DAT_091bf638);
  if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(lVar14 + 200) = uStack_58;
  *(long **)(lVar14 + 0xc0) = local_60;
  *(ulong *)(lVar14 + 0xd0) = local_50;
  thunk_FUN_03f5d7b8(lVar14 + 0xc0,0);
  lVar4 = DAT_091aa4e8;
  lVar8 = *(long *)(lVar14 + 0xb8);
  if (lVar8 != 0) {
    local_70 = *(ulong *)(lVar14 + 0xd0);
    uStack_78 = *(undefined8 *)(lVar14 + 200);
    local_80 = *(long **)(lVar14 + 0xc0);
    lVar7 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar8 + 0x18);
      if (uVar1 < *(uint *)(lVar7 + 0x18)) {
        lVar7 = lVar7 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar8 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar7 + 0x28) = uStack_78;
        *(long **)(lVar7 + 0x20) = local_80;
        *(ulong *)(lVar7 + 0x30) = local_70;
        thunk_FUN_03f5d7b8(lVar7 + 0x20,0);
      }
      else {
        local_60 = local_80;
        uStack_58 = uStack_78;
        local_50 = local_70;
        FUN_0564eb10(lVar8,&local_60,
                     *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      uStack_78 = *(undefined8 *)(lVar14 + 200);
      local_80 = *(long **)(lVar14 + 0xc0);
      local_70 = *(ulong *)(lVar14 + 0xd0);
      FUN_04b722fc(&local_60,&local_80,0,8,*(undefined8 *)(param_1 + 10),0,0,DAT_091bf6e8);
      uVar12 = local_50;
      uVar6 = uStack_58;
      plVar2 = local_60;
      uStack_58 = 0;
      local_50 = 0;
      local_60 = (long *)0x0;
      if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_60 = plVar2;
      uStack_58 = uVar6;
      local_50 = uVar12;
      thunk_FUN_03f5d7b8(&local_60,0);
      uStack_98 = uStack_58;
      local_a0 = local_60;
      local_90 = local_50;
      uVar12 = FUN_041e5390(&local_a0,DAT_0919a5d8);
      if ((uVar12 & 1) == 0) {
        *param_1 = 1;
        *(undefined8 *)(param_1 + 0x14) = uStack_98;
        *(long **)(param_1 + 0x12) = local_a0;
        *(ulong *)(param_1 + 0x16) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x12,0);
        if (*(int *)(DAT_09181780 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_049902f8(param_1 + 2,&local_a0,param_1,DAT_091c11d0);
        return;
      }
LAB_0421affc:
      plVar2 = local_a0;
      if (local_a0 != (long *)0x0) {
        uVar12 = local_90 & 0xffff;
        lVar4 = *(long *)(DAT_0919a5d0 + 0x20);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c();
        }
        lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
          lVar4 = FUN_03f95a6c(lVar4);
        }
        lVar8 = *plVar2;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar4) {
              puVar5 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_0421b12c;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(plVar2,lVar4,0);
LAB_0421b12c:
        (*(code *)*puVar5)(plVar2,uVar12,puVar5[1]);
      }
      if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar3 = FUN_0640f818(lVar14 + 0xc0,DAT_09197808);
      if (iVar3 == 1) {
        uVar6 = FUN_0640f7ac(lVar14 + 0xc0,DAT_09197800);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar12 & 1) != 0) {
          uVar6 = FUN_0640f7ac(lVar14 + 0xc0,DAT_09197800);
          uVar13 = *(undefined8 *)(lVar14 + 0xa8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          lVar4 = FUN_04c35338(uVar6,uVar13,DAT_091d4bc0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = FUN_04b7c324(lVar4,DAT_091cd8e8);
          uVar12 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar12 & 1) == 0) {
            lVar14 = thunk_FUN_03fc39d4(&DAT_09188ad0);
            if (*(int *)(lVar14 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            UnityEngine_Object__Destroy(lVar4,0);
            uVar11 = *(undefined8 *)(param_1 + 0xe);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091ffa78);
            uVar13 = thunk_FUN_03fc39d4(&DAT_091f7320);
            uVar6 = System_String__Concat(uVar6,uVar11,uVar13,0);
            thunk_FUN_03fc39d4(&DAT_091870e0);
            uVar13 = thunk_FUN_03f9944c();
            System_InvalidOperationException___ctor(uVar13,uVar6,0);
            uVar6 = thunk_FUN_03fc39d4(&DAT_091e8300);
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar13,uVar6);
          }
          if (*(long *)(lVar14 + 0xb0) != 0) {
            FUN_06fd8454(*(long *)(lVar14 + 0xb0),*(undefined8 *)(param_1 + 8),uVar6,DAT_0919f5d0);
            piVar10 = param_1 + 0xe;
            piVar10[0] = 0;
            piVar10[1] = 0;
            *param_1 = -2;
            thunk_FUN_03f5d7b8(piVar10,0);
            if (*(int *)(DAT_09181780 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Runtime_CompilerServices_AsyncTaskMethodBuilder__SetResult(param_1 + 2,0);
            return;
          }
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      uVar11 = *(undefined8 *)(param_1 + 0xe);
      uVar6 = thunk_FUN_03fc39d4(&DAT_09202580);
      uVar13 = thunk_FUN_03fc39d4(&DAT_091f7a78);
      uVar6 = System_String__Concat(uVar6,uVar11,uVar13,0);
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar13 = thunk_FUN_03f9944c();
      System_InvalidOperationException___ctor(uVar13,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091e8300);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar13,uVar6);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

