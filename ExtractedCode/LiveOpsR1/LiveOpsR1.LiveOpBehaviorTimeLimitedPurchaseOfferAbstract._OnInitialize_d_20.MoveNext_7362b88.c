// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorTimeLimitedPurchaseOfferAbstract.<OnInitialize>d__20$$MoveNext
// address: 0x7362b88
// body: available
// range: 0x7362b88-0x7363137 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7363128 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x736312c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7363130 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7363134 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract_<OnInitialize>d__20__MoveNext
               (int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_0952086d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c2078);
    FUN_03f5c2a4(&DAT_091d2670);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0952086d = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
LAB_07362ca0:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar8 = (long *)local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) goto LAB_07362e6c;
    lVar5 = *(long *)local_50._0_8_;
    uVar10 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) goto LAB_07362e4c;
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
  }
  else {
    if (*param_1 == 1) {
      local_50 = *(undefined1 (*) [16])(param_1 + 8);
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = 0;
      *param_1 = -1;
    }
    else {
      lVar9 = *(long *)(param_1 + 6);
      lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(char *)(**(long **)(lVar5 + 0xb8) + 0x5c) != '\0') {
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        local_40 = LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__LoadRemoteConfig(lVar9)
        ;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
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
        uVar4 = local_50._0_8_;
        if ((long *)local_50._0_8_ != (long *)0x0) {
          lVar5 = *(long *)local_50._0_8_;
          uVar10 = local_50._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091868c0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_07363080;
              }
              uVar7 = uVar7 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_07363080:
          iVar2 = (*(code *)*puVar3)(uVar4,uVar10,puVar3[1]);
          if (iVar2 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 8,0);
            FUN_049b17cc(param_1 + 2,local_50,param_1,DAT_091c2078);
            return;
          }
        }
        goto LAB_07362ca0;
      }
      lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = **(long **)(lVar5 + 0xb8);
      uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
      System_Action___ctor(uVar4,lVar9,DAT_091d2670,0);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      IapAdsSystem_RemoteConfigManager__add_onRemoteValueAvailable(lVar5,uVar4,0);
      if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      local_40 = LiveOpsR1_LiveOpBehaviorTimeLimitedPurchaseOfferAbstract__LoadDefaultConfig(lVar9);
      if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
        FUN_03f5c424();
      }
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
      uVar4 = local_50._0_8_;
      if ((long *)local_50._0_8_ != (long *)0x0) {
        lVar5 = *(long *)local_50._0_8_;
        uVar10 = local_50._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_073630d8;
            }
            uVar7 = uVar7 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_073630d8:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar10,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 8) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_049b17cc(param_1 + 2,local_50,param_1,DAT_091c2078);
          return;
        }
      }
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar8 = (long *)local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) goto LAB_07362e6c;
    lVar5 = *(long *)local_50._0_8_;
    uVar10 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) goto LAB_07362e4c;
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
  }
LAB_07362e5c:
  (*(code *)*puVar3)(plVar8,uVar10,puVar3[1]);
LAB_07362e6c:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar8 = *(long **)(param_1 + 2);
  if (plVar8 != (long *)0x0) {
    lVar5 = *plVar8;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091866a8) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
          goto LAB_07362ef4;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_07362ef4:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  return;
LAB_07362e4c:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
  plVar8 = (long *)local_50._0_8_;
  goto LAB_07362e5c;
}

