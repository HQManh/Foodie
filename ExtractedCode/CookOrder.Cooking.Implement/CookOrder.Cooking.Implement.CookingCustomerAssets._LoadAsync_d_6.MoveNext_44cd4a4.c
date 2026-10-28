// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingCustomerAssets.<LoadAsync>d__6$$MoveNext
// address: 0x44cd4a4
// body: available
// range: 0x44cd4a4-0x44cd9a3 inclusive
// range: 0x44cda18-0x44cda23 inclusive
// range: 0x44cda30-0x44cdd8f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44cd8cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd8d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd918 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd91c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd92c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd930 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd934 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd938 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd93c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44cd948 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verifi
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044cdd84) */

void CookOrder_Cooking_Implement_CookingCustomerAssets_<LoadAsync>d__6__MoveNext(uint *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  int iVar10;
  uint *puVar11;
  ulong uVar12;
  long *local_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 local_e0;
  uint *puStack_d8;
  long *local_d0;
  undefined4 local_b8;
  long *local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long local_70;
  uint local_64;
  
  if ((DAT_095182be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c0470);
    FUN_03f5c2a4(&DAT_091c1dd0);
    FUN_03f5c2a4(&DAT_0919a5d0);
    FUN_03f5c2a4(&DAT_0919a5d8);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917e158);
    FUN_03f5c2a4(&DAT_091e6a98);
    FUN_03f5c2a4(&DAT_0918eea8);
    FUN_03f5c2a4(&DAT_091bde30);
    FUN_03f5c2a4(&DAT_091ffa60);
    FUN_03f5c2a4(&DAT_091fa138);
    DAT_095182be = 1;
  }
  local_64 = *param_1;
  local_70 = *(long *)(param_1 + 8);
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_b0 = (long *)0x0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b8 = 0;
  if (1 < local_64) {
    uVar1 = thunk_FUN_03f9944c(DAT_0918eea8);
    System_Object___ctor(uVar1,0);
    puVar11 = param_1 + 0xc;
    *(undefined8 *)puVar11 = uVar1;
    thunk_FUN_03f5d7b8(puVar11,uVar1);
    if (*(long *)puVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined8 *)(*(long *)puVar11 + 0x10) = *(undefined8 *)(param_1 + 6);
    thunk_FUN_03f5d7b8();
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(char *)(local_70 + 0x19) != '\0') {
      thunk_FUN_03fc39d4(&DAT_09188ae0);
      uVar1 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_091ff1f0);
      System_ObjectDisposedException___ctor(uVar1,uVar9,0);
      uVar9 = thunk_FUN_03fc39d4(&DAT_091e6aa0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar1,uVar9);
    }
    *(undefined1 *)(local_70 + 0x18) = 1;
  }
  puStack_d8 = &local_64;
  local_e0 = 0;
  local_d0 = &local_70;
  if (local_64 == 0) {
    local_80 = *(ulong *)(param_1 + 0x12);
    uStack_88 = *(undefined8 *)(param_1 + 0x10);
    local_90 = *(long **)(param_1 + 0xe);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    local_64 = 0xffffffff;
    *param_1 = 0xffffffff;
  }
  else {
    if (local_64 == 1) {
      local_80 = *(ulong *)(param_1 + 0x12);
      uStack_88 = *(undefined8 *)(param_1 + 0x10);
      local_90 = *(long **)(param_1 + 0xe);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      local_64 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_044cdac8;
    }
    lVar2 = *(long *)(param_1 + 0xc);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30);
    uVar1 = thunk_FUN_03f9944c(DAT_0917e158);
    FUN_05d78cfc(uVar1,lVar2,DAT_091e6a98,0);
    uVar1 = FUN_04ee3a54(uVar9,uVar1,DAT_091c0470);
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550(0,uVar1);
    }
    CookOrder_Cooking_Implement_CookingCustomerAssets__LoadOne
              (&local_100,local_70,uVar1,*(undefined8 *)(param_1 + 10));
    local_a0 = local_f0;
    uStack_a8 = uStack_f8;
    uStack_f8 = 0;
    local_f0 = 0;
    local_b0 = local_100;
    local_100 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    local_f0 = local_a0;
    thunk_FUN_03f5d7b8(&local_100,0);
    uStack_88 = uStack_f8;
    local_90 = local_100;
    local_80 = local_f0;
    uVar12 = FUN_041e5390(&local_90,DAT_0919a5d8);
    if ((uVar12 & 1) == 0) {
      local_64 = 0;
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_88;
      *(long **)(param_1 + 0xe) = local_90;
      *(ulong *)(param_1 + 0x12) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_044d7b44(param_1 + 2,&local_90,param_1,DAT_091c1dd0);
LAB_044cda18:
      iVar10 = 9;
      goto LAB_044cdc28;
    }
  }
  plVar8 = local_90;
  uVar1 = uStack_88;
  if (local_90 != (long *)0x0) {
    uVar12 = local_80 & 0xffff;
    lVar2 = *(long *)(DAT_0919a5d0 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar5 = *plVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_044cd850;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_044cd850:
    uVar1 = (*(code *)*puVar3)(plVar8,uVar12,puVar3[1]);
  }
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(local_70 + 0x20) = uVar1;
  thunk_FUN_03f5d7b8();
  if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(undefined8 *)(local_70 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = UnityEngine_Object__op_Implicit(uVar1,0);
  lVar2 = *(long *)(param_1 + 0xc);
  if ((uVar12 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar9 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x38);
    uVar1 = thunk_FUN_03fc39d4(&DAT_09200530);
    uVar1 = System_String__Concat(uVar1,uVar9,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar9 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar9,uVar1,0);
    uVar1 = thunk_FUN_03fc39d4(&DAT_091e6aa0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar1);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(long *)(lVar2 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x30);
  thunk_FUN_03f5d7b8();
  uVar4 = 0;
  param_1[0x16] = 0;
  while( true ) {
    puVar11 = param_1 + 0x14;
    lVar2 = *(long *)puVar11;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if ((int)*(uint *)(lVar2 + 0x18) <= (int)uVar4) break;
    if (*(uint *)(lVar2 + 0x18) <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(lVar2 + (long)(int)uVar4 * 8 + 0x20);
    thunk_FUN_03f5d7b8();
    if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CookOrder_Cooking_Implement_CookingCustomerAssets__LoadOne
              (&local_100,local_70,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 10));
    local_a0 = local_f0;
    uStack_a8 = uStack_f8;
    uStack_f8 = 0;
    local_f0 = 0;
    local_b0 = local_100;
    local_100 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bde30 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_f8 = uStack_a8;
    local_100 = local_b0;
    local_f0 = local_a0;
    thunk_FUN_03f5d7b8(&local_100,0);
    uStack_88 = uStack_f8;
    local_90 = local_100;
    local_80 = local_f0;
    uVar12 = FUN_041e5390(&local_90,DAT_0919a5d8);
    if ((uVar12 & 1) == 0) {
      local_64 = 1;
      *param_1 = 1;
      *(undefined8 *)(param_1 + 0x10) = uStack_88;
      *(long **)(param_1 + 0xe) = local_90;
      *(ulong *)(param_1 + 0x12) = local_80;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_044d7b44(param_1 + 2,&local_90,param_1,DAT_091c1dd0);
      goto LAB_044cda18;
    }
LAB_044cdac8:
    plVar8 = local_90;
    uVar1 = uStack_88;
    if (local_90 != (long *)0x0) {
      uVar12 = local_80 & 0xffff;
      lVar2 = *(long *)(DAT_0919a5d0 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c(lVar2);
      }
      lVar5 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == lVar2) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_044cdb5c;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,lVar2,0);
LAB_044cdb5c:
      uVar1 = (*(code *)*puVar3)(plVar8,uVar12,puVar3[1]);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar12 = UnityEngine_Object__op_Implicit(uVar1,0);
    if ((uVar12 & 1) == 0) {
      if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar2 = *(long *)(*(long *)(param_1 + 0xc) + 0x10);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar1 = System_String__Concat
                        (DAT_091ffa60,*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x10),DAT_091fa138
                         ,*(undefined8 *)(lVar2 + 0x38),0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogWarning(uVar1,0);
    }
    puVar11 = param_1 + 0x18;
    puVar11[0] = 0;
    puVar11[1] = 0;
    thunk_FUN_03f5d7b8(puVar11,0);
    uVar4 = param_1[0x16] + 1;
    param_1[0x16] = uVar4;
  }
  puVar11[0] = 0;
  puVar11[1] = 0;
  thunk_FUN_03f5d7b8(puVar11,0);
  iVar10 = 0x15;
LAB_044cdc28:
  if ((int)local_64 < 0) {
    lVar2 = *local_d0;
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(lVar2 + 0x18) = 0;
    if (*(char *)(lVar2 + 0x19) != '\0') {
      CookOrder_Cooking_Implement_CookingCustomerAssets__ReleaseAll();
    }
  }
  if ((iVar10 == 0) || (iVar10 == 0x15)) {
    *param_1 = 0xfffffffe;
    puVar11 = param_1 + 0xc;
    puVar11[0] = 0;
    puVar11[1] = 0;
    thunk_FUN_03f5d7b8(puVar11,0);
    if (DAT_095162d8 == '\0') {
      FUN_03f5c2a4(&DAT_091866a8);
      DAT_095162d8 = '\x01';
    }
    plVar8 = *(long **)(param_1 + 2);
    if (plVar8 != (long *)0x0) {
      lVar2 = *plVar8;
      uVar12 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar12 != 0) {
        piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091866a8) {
            puVar3 = (undefined8 *)(lVar2 + (long)(*piVar7 + 2) * 0x10 + 0x138);
            goto LAB_044cdd40;
          }
          uVar12 = uVar12 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar12 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_044cdd40:
      (*(code *)*puVar3)(plVar8,puVar3[1]);
    }
  }
  return;
}

