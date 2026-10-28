// rea decompile_all
// name: PlatformServiceR1.CloudSaveControllerAbstract.<RunSaveFlow>d__40$$MoveNext
// address: 0x7734264
// body: available
// range: 0x7734264-0x773442b inclusive
// range: 0x7734438-0x77349df inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7734428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773454c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349d8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77349dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertio
// limitations_truncated: true; decompile-index.json keeps the complete list
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x077349d8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void PlatformServiceR1_CloudSaveControllerAbstract_<RunSaveFlow>d__40__MoveNext(uint *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined1 auVar13 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined4 local_88;
  uint local_84;
  long *local_80;
  uint local_74;
  undefined1 local_70 [16];
  
  if ((DAT_09522a7d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2268);
    FUN_03f5c2a4(&DAT_091c1d88);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091857d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188c20);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_0920c740);
    FUN_03f5c2a4(&DAT_091feae0);
    FUN_03f5c2a4(&DAT_09225d88);
    DAT_09522a7d = 1;
  }
  local_84 = 0;
  local_88 = 0;
  local_90 = 0;
  local_74 = *param_1;
  local_80 = *(long **)(param_1 + 6);
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  auVar13 = ZEXT816(0);
  if (local_74 < 2) {
    if (local_74 == 0) {
      local_84 = param_1[8];
      param_1[8] = 0;
      local_74 = 0xffffffff;
      *param_1 = 0xffffffff;
      goto LAB_07734538;
    }
    local_a0 = *(undefined1 (*) [16])(param_1 + 10);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    local_74 = 0xffffffff;
    *param_1 = 0xffffffff;
    goto LAB_077347fc;
  }
  if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(char *)((long)local_80 + 0x29) == '\0') {
    *(undefined1 *)((long)local_80 + 0x29) = 1;
    local_a0 = ZEXT816(0);
    do {
      *(undefined1 *)((long)local_80 + 0x2a) = 0;
      while( true ) {
        if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if ((char)local_80[5] == '\0') break;
        if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_88 = Cysharp_Threading_Tasks_UniTask__Yield(0);
        local_84 = Cysharp_Threading_Tasks_YieldAwaitable__GetAwaiter(&local_88,0);
        uVar9 = Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__get_IsCompleted(&local_84,0);
        auVar13 = local_a0;
        if ((uVar9 & 1) == 0) {
          local_74 = 0;
          *param_1 = 0;
          uVar4 = DAT_091c2268;
          param_1[8] = local_84;
          FUN_049b3840(param_1 + 2,&local_84,param_1,uVar4);
          goto LAB_0773491c;
        }
LAB_07734538:
        local_a0 = auVar13;
        Cysharp_Threading_Tasks_YieldAwaitable_Awaiter__GetResult(&local_84,0);
      }
      uVar9 = EssentialSystemR1_NetworkCheck__get_IsExistInstance(0);
      if ((uVar9 & 1) != 0) {
        if (DAT_095173ff == '\0') {
          FUN_03f5c2a4(&DAT_091886f0);
          DAT_095173ff = '\x01';
        }
        if (**(long **)(DAT_091886f0 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(**(long **)(DAT_091886f0 + 0xb8) + 0x40) == '\0') {
          if (DAT_09522a98 == '\0') {
            FUN_03f5c2a4(&DAT_091891d8);
            DAT_09522a98 = '\x01';
          }
          if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
            EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_091feae0,0);
          }
          lVar7 = 4;
          goto LAB_07734920;
        }
      }
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = (long *)(**(code **)(*local_80 + 0x188))(local_80,*(undefined8 *)(*local_80 + 400));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = (**(code **)(*plVar11 + 0x178))(plVar11,*(undefined8 *)(*plVar11 + 0x180));
      if (DAT_095174da == '\0') {
        FUN_03f5c2a4(&DAT_09189248);
        DAT_095174da = '\x01';
      }
      uVar12 = **(undefined8 **)(DAT_09189248 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar9 = UnityEngine_Object__op_Inequality(uVar12,0,0);
      if ((uVar9 & 1) == 0) {
        if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar12 = **(undefined8 **)(DAT_0918bd60 + 0xb8);
      }
      else {
        if (DAT_095174da == '\0') {
          FUN_03f5c2a4(&DAT_09189248);
          DAT_095174da = '\x01';
        }
        if (**(long **)(DAT_09189248 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar12 = EssentialSystemR1_PlayTimeTracker__get_TotalPlayTimeSpan
                           (**(long **)(DAT_09189248 + 0xb8),0);
      }
      if (*(int *)(DAT_09188c20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      local_90 = EssentialSystemR1_OnlineTimeCheck__get_Now(0);
      if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_Globalization_CultureInfo__get_InvariantCulture(0);
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_DateTime__ToString(&local_90,DAT_09225d88,uVar5,0);
      uVar5 = System_String__Concat(DAT_0920c740,uVar5,0);
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar11 = (long *)local_80[4];
      uVar6 = (**(code **)(*local_80 + 0x178))(local_80,*(undefined8 *)(*local_80 + 0x180));
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *plVar11;
      uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_091857d0) {
            puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 1) * 0x10 + 0x138);
            goto LAB_07734798;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091857d0,1);
LAB_07734798:
      auVar13 = (*(code *)*puVar3)(plVar11,uVar6,uVar4,uVar12,uVar5,puVar3[1]);
      local_70._0_8_ = 0;
      local_70._8_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_70 = auVar13;
      thunk_FUN_03f5d7b8(local_70,0);
      local_a0 = local_70;
      uVar9 = FUN_0430cf0c(local_a0,DAT_0919a588);
      if ((uVar9 & 1) == 0) {
        local_74 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 10) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 10,0);
        FUN_049ae69c(param_1 + 2,local_a0,param_1,DAT_091c1d88);
LAB_0773491c:
        lVar7 = 0xb;
        goto LAB_07734920;
      }
LAB_077347fc:
      uVar4 = local_a0._0_8_;
      if ((long *)local_a0._0_8_ != (long *)0x0) {
        uVar2 = local_a0._10_2_;
        lVar7 = *(long *)(DAT_0919a580 + 0x20);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c();
        }
        lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
        if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
          lVar7 = FUN_03f95a6c(lVar7);
        }
        lVar8 = *(long *)uVar4;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == lVar7) {
              puVar3 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_07734888;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(uVar4,lVar7,0);
LAB_07734888:
        (*(code *)*puVar3)(uVar4,uVar2,puVar3[1]);
      }
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (*(char *)((long)local_80 + 0x2a) != '\0');
    lVar7 = 0x16;
LAB_07734920:
    if ((int)local_74 < 0) {
      if (local_80 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      *(undefined1 *)((long)local_80 + 0x29) = 0;
    }
    if (0x16 < (uint)lVar7) {
      return;
    }
    if ((1 << lVar7 & 0x400011U) == 0) {
      return;
    }
  }
  else {
    *(undefined1 *)((long)local_80 + 0x2a) = 1;
    local_a0 = ZEXT816(0);
  }
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar11 = *(long **)(param_1 + 2);
  if (plVar11 != (long *)0x0) {
    lVar7 = *plVar11;
    uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_091866a8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077344c0;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar11,DAT_091866a8,2);
LAB_077344c0:
    (*(code *)*puVar3)(plVar11,puVar3[1]);
  }
  return;
}

