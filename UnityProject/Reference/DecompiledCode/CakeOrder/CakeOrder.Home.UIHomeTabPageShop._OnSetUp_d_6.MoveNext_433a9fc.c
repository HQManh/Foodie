// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPageShop.<OnSetUp>d__6$$MoveNext
// address: 0x433a9fc
// body: available
// range: 0x433a9fc-0x433afcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433afb8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433afbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433afc0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433afc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x433afc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPageShop_<OnSetUp>d__6__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  ulong uVar12;
  undefined1 local_c0 [16];
  ulong local_b0;
  undefined4 local_98;
  undefined1 local_90 [16];
  ulong local_80;
  undefined1 local_70 [16];
  ulong local_60;
  undefined1 local_50 [16];
  
  if ((DAT_0951771a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091977b8);
    FUN_03f5c2a4(&DAT_091c1ed8);
    FUN_03f5c2a4(&DAT_091c21d0);
    FUN_03f5c2a4(&DAT_0919a780);
    FUN_03f5c2a4(&DAT_0919a788);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dcbc8);
    FUN_03f5c2a4(&DAT_091bdf50);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951771a = 1;
  }
  lVar10 = *(long *)(param_1 + 6);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  local_60 = 0;
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  local_80 = 0;
  local_98 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0433ac0c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar6 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar4 = *(long *)local_50._0_8_;
      uVar8 = local_50._8_8_ & 0xffff;
      uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar12 != 0) {
        piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar4 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0433ac90;
          }
          uVar12 = uVar12 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar12 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0433ac90:
      (*(code *)*puVar5)(uVar6,uVar8,puVar5[1]);
    }
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar12 = FUN_0640f598(lVar10 + 0xc0,DAT_091977b8);
    if ((uVar12 & 1) != 0) goto LAB_0433aed4;
    CakeOrder_Home_UIHomeTabPageShop__SpawnShop(local_c0,lVar10);
    local_80 = local_b0;
    local_90 = local_c0;
    local_c0._8_8_ = 0;
    local_b0 = 0;
    local_c0._0_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf50 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_b0 = local_80;
    local_c0 = local_90;
    thunk_FUN_03f5d7b8(local_c0,0);
    local_60 = local_b0;
    local_70 = local_c0;
    uVar12 = FUN_041e5390(local_70,DAT_0919a788);
    if ((uVar12 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_70;
      *(ulong *)(param_1 + 0x10) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_04341ca0(param_1 + 2,local_70,param_1,DAT_091c1ed8);
      return;
    }
  }
  else {
    if (*param_1 != 1) {
      if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_c0 = CakeOrder_Home_UIHomeTabPageShop__<>n__0();
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      thunk_FUN_03f5d7b8(local_c0,0);
      uVar2 = local_c0._8_8_;
      uVar6 = local_c0._0_8_;
      local_50 = local_c0;
      if (DAT_095162d4 == '\0') {
        FUN_03f5c2a4(&DAT_0918c610);
        DAT_095162d4 = '\x01';
      }
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (DAT_095162d5 == '\0') {
        FUN_03f5c2a4(&DAT_091868c0);
        DAT_095162d5 = '\x01';
      }
      if ((long *)uVar6 != (long *)0x0) {
        lVar4 = *(long *)uVar6;
        uVar12 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar12 != 0) {
          piVar9 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar5 = (undefined8 *)(lVar4 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0433abf8;
            }
            uVar12 = uVar12 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar12 != 0);
        }
        puVar5 = (undefined8 *)FUN_03f95da8(uVar6,DAT_091868c0,0);
LAB_0433abf8:
        iVar3 = (*(code *)*puVar5)(uVar6,uVar2 & 0xffffffff,puVar5[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_04341b94(param_1 + 2,local_50,param_1,DAT_091c21d0);
          return;
        }
      }
      goto LAB_0433ac0c;
    }
    local_60 = *(ulong *)(param_1 + 0x10);
    local_70 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    *param_1 = -1;
    local_90 = ZEXT816(0);
    local_50 = ZEXT816(0);
  }
  uVar6 = local_70._0_8_;
  lVar4 = local_70._8_8_;
  if ((long *)local_70._0_8_ != (long *)0x0) {
    uVar12 = local_60 & 0xffff;
    lVar4 = *(long *)(DAT_0919a780 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar7 = *(long *)uVar6;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar4) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0433ae20;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar6,lVar4,0);
LAB_0433ae20:
    lVar4 = (*(code *)*puVar5)(uVar6,uVar12,puVar5[1]);
  }
  if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar11 = (long *)(lVar10 + 0xb8);
  *plVar11 = lVar4;
  thunk_FUN_03f5d7b8(plVar11);
  lVar4 = *plVar11;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar12 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar12 & 1) != 0) {
    lVar4 = *plVar11;
    uVar6 = thunk_FUN_03f9944c(DAT_09180e78);
    System_Action___ctor(uVar6,lVar10,DAT_091dcbc8,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_Shop_UICookOrderShop__SetEmbeddedInTab(lVar4,uVar6,0);
    plVar11 = (long *)*plVar11;
    if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar11 + 0x2a8))
              (plVar11,*(undefined8 *)(lVar10 + 0x48),*(undefined8 *)(*plVar11 + 0x2b0));
  }
LAB_0433aed4:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar10 = *plVar11;
    uVar12 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar12 != 0) {
      piVar9 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar10 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0433af5c;
        }
        uVar12 = uVar12 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar12 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_0433af5c:
    (*(code *)*puVar5)(plVar11,puVar5[1]);
  }
  return;
}

