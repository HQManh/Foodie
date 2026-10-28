// rea decompile_all
// name: CakeOrder.Home.HomeControllerCookOrder.<ShowEntryPopupAfterDelay>d__140$$MoveNext
// address: 0x430bc10
// body: available
// range: 0x430bc10-0x430c357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x430c34c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430c350 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x430c354 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_HomeControllerCookOrder_<ShowEntryPopupAfterDelay>d__140__MoveNext(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_095175a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1d98);
    FUN_03f5c2a4(&DAT_091c1fc8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_095175a7 = 1;
  }
  iVar3 = *param_1;
  lVar11 = *(long *)(param_1 + 6);
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (iVar3 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_0430bee0:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar5 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_50._0_8_;
      uVar12 = local_50._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar9 + 2) * 0x10 + 0x138);
            goto LAB_0430bf64;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0430bf64:
      (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Implicit(lVar11,0);
    if ((uVar8 & 1) == 0) goto LAB_0430c128;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar14 = CakeOrder_Home_HomeControllerCookOrder__TryShowNewVersionPopup(lVar11);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar14;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
    uVar8 = FUN_0430cf0c(local_60,DAT_0919a588);
    if ((uVar8 & 1) == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_0430d87c(param_1 + 2,local_60,param_1,DAT_091c1d98);
      return;
    }
LAB_0430c000:
    uVar5 = local_60._0_8_;
    if ((long *)local_60._0_8_ == (long *)0x0) {
      if (local_60[8] != '\0') goto LAB_0430c128;
    }
    else {
      uVar2 = local_60._10_2_;
      lVar6 = *(long *)(DAT_0919a580 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar7 = *(long *)uVar5;
      uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0430c0dc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar5,lVar6,0);
LAB_0430c0dc:
      uVar8 = (*(code *)*puVar4)(uVar5,uVar2,puVar4[1]);
      if ((uVar8 & 1) != 0) goto LAB_0430c128;
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar8 = UnityEngine_Object__op_Implicit(lVar11,0);
    if ((uVar8 & 1) == 0) goto LAB_0430c128;
    if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar8 = CakeOrder_Home_HomeControllerCookOrder__TryAutoShowPopupRemoveAds(lVar11);
    if ((uVar8 & 1) != 0) goto LAB_0430c128;
    auVar14 = CakeOrder_Home_HomeControllerCookOrder__TryShowRateGameAtHome(lVar11);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar14;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
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
    uVar5 = local_50._0_8_;
    if ((long *)local_50._0_8_ != (long *)0x0) {
      lVar11 = *(long *)local_50._0_8_;
      uVar12 = local_50._8_8_ & 0xffff;
      uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0430c2fc;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_0430c2fc:
      iVar3 = (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 8) = local_50;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_0430d770(param_1 + 2,local_50,param_1,DAT_091c1fc8);
        return;
      }
    }
  }
  else {
    if (iVar3 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      local_50 = ZEXT816(0);
      goto LAB_0430c000;
    }
    if (iVar3 != 2) {
      if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      fVar13 = *(float *)(lVar11 + 0x178);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_TimeSpan__FromSeconds((double)fVar13,0);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_40 = Cysharp_Threading_Tasks_UniTask__Delay(uVar5,1,8,0,0,0);
      thunk_FUN_03f5d7b8(local_40,0);
      local_50 = local_40;
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
      uVar5 = local_50._0_8_;
      if ((long *)local_50._0_8_ != (long *)0x0) {
        lVar6 = *(long *)local_50._0_8_;
        uVar12 = local_50._8_8_ & 0xffff;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 != 0) {
          piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
          do {
            if (*(long *)(piVar9 + -2) == DAT_091868c0) {
              puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
              goto LAB_0430becc;
            }
            uVar8 = uVar8 - 1;
            piVar9 = piVar9 + 4;
          } while (uVar8 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_0430becc:
        iVar3 = (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
        if (iVar3 == 0) {
          *param_1 = 0;
          *(undefined1 (*) [16])(param_1 + 8) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_0430d770(param_1 + 2,local_50,param_1,DAT_091c1fc8);
          return;
        }
      }
      goto LAB_0430bee0;
    }
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
    local_60 = ZEXT816(0);
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    lVar11 = *(long *)local_50._0_8_;
    uVar12 = local_50._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0430beac;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
LAB_0430beac:
    (*(code *)*puVar4)(uVar5,uVar12,puVar4[1]);
  }
LAB_0430c128:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar11 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar11 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_0430c1b0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_0430c1b0:
    (*(code *)*puVar4)(plVar10,puVar4[1]);
  }
  return;
}

