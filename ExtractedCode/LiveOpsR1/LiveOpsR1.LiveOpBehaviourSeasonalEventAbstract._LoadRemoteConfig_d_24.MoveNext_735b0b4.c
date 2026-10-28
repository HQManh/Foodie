// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviourSeasonalEventAbstract.<LoadRemoteConfig>d__24$$MoveNext
// address: 0x735b0b4
// body: available
// range: 0x735b0b4-0x735b4c3 inclusive
// range: 0x735b550-0x735b68f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x735b4bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x735b4c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpBehaviourSeasonalEventAbstract_<LoadRemoteConfig>d__24__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  int *piVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09520806 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2088);
    FUN_03f5c2a4(&DAT_091d1ee0);
    FUN_03f5c2a4(&DAT_091b4aa8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09520806 = 1;
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
LAB_0735b1c0:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar8 = (long *)local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) goto LAB_0735b3bc;
    lVar5 = *(long *)local_50._0_8_;
    uVar9 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) goto LAB_0735b39c;
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
      plVar8 = *(long **)(param_1 + 6);
      lVar5 = *(long *)(DAT_091b4aa8 + 0x20);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
        lVar5 = FUN_03f95a6c();
      }
      if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (**(long **)(lVar5 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = IapAdsSystem_RemoteConfigManager__GetString(**(long **)(lVar5 + 0xb8),plVar8[6],0);
      lVar5 = FUN_04bdd51c(uVar4,DAT_091d1ee0);
      if (lVar5 != 0) {
        plVar8[8] = lVar5;
        thunk_FUN_03f5d7b8();
        local_40 = (**(code **)(*plVar8 + 0x1f8))(plVar8,*(undefined8 *)(*plVar8 + 0x200));
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
          uVar9 = local_50._8_8_ & 0xffff;
          uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
          if (uVar7 != 0) {
            piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
            do {
              if (*(long *)(piVar6 + -2) == DAT_091868c0) {
                puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
                goto LAB_0735b470;
              }
              uVar7 = uVar7 - 1;
              piVar6 = piVar6 + 4;
            } while (uVar7 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_0735b470:
          iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
          if (iVar2 == 0) {
            *param_1 = 0;
            *(undefined1 (*) [16])(param_1 + 8) = local_50;
            thunk_FUN_03f5d7b8(param_1 + 8,0);
            FUN_049b19e4(param_1 + 2,local_50,param_1,DAT_091c2088);
            return;
          }
        }
        goto LAB_0735b1c0;
      }
      local_40 = LiveOpsR1_LiveOpBehaviourSeasonalEventAbstract__LoadDefaultConfig(plVar8);
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
        uVar9 = local_50._8_8_ & 0xffff;
        uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
        if (uVar7 != 0) {
          piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
          do {
            if (*(long *)(piVar6 + -2) == DAT_091868c0) {
              puVar3 = (undefined8 *)(lVar5 + (long)*piVar6 * 0x10 + 0x138);
              goto LAB_0735b640;
            }
            uVar7 = uVar7 - 1;
            piVar6 = piVar6 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,0);
LAB_0735b640:
        iVar2 = (*(code *)*puVar3)(uVar4,uVar9,puVar3[1]);
        if (iVar2 == 0) {
          *param_1 = 1;
          *(undefined1 (*) [16])(param_1 + 8) = local_50;
          thunk_FUN_03f5d7b8(param_1 + 8,0);
          FUN_049b19e4(param_1 + 2,local_50,param_1,DAT_091c2088);
          return;
        }
      }
    }
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    plVar8 = (long *)local_50._0_8_;
    if ((long *)local_50._0_8_ == (long *)0x0) goto LAB_0735b3bc;
    lVar5 = *(long *)local_50._0_8_;
    uVar9 = local_50._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar6 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_091868c0) goto LAB_0735b39c;
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_50._0_8_,DAT_091868c0,2);
  }
LAB_0735b3ac:
  (*(code *)*puVar3)(plVar8,uVar9,puVar3[1]);
LAB_0735b3bc:
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
          goto LAB_0735b444;
        }
        uVar7 = uVar7 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_091866a8,2);
LAB_0735b444:
    (*(code *)*puVar3)(plVar8,puVar3[1]);
  }
  return;
LAB_0735b39c:
  puVar3 = (undefined8 *)(lVar5 + (long)(*piVar6 + 2) * 0x10 + 0x138);
  plVar8 = (long *)local_50._0_8_;
  goto LAB_0735b3ac;
}

