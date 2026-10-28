// rea decompile_all
// name: PlatformServiceR1.CloudSaveControllerAbstract.<RunOfflineFlow>d__36$$MoveNext
// address: 0x7733a68
// body: available
// range: 0x7733a68-0x7734043 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x773402c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7734030 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7734034 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7734038 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x773403c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7734040 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0773402c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void PlatformServiceR1_CloudSaveControllerAbstract_<RunOfflineFlow>d__36__MoveNext(uint *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  long *local_48;
  undefined1 local_40 [16];
  uint local_24;
  
  if ((DAT_09522a7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f98);
    FUN_03f5c2a4(&DAT_0918c610);
    FUN_03f5c2a4(&DAT_091fead8);
    DAT_09522a7c = 1;
  }
  uVar5 = *param_1;
  local_48 = *(long **)(param_1 + 6);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  if (uVar5 < 2) {
    auVar11 = *(undefined1 (*) [16])(param_1 + 8);
    local_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    local_24 = 0xffffffff;
    *param_1 = 0xffffffff;
    if (uVar5 == 0) goto LAB_07733c8c;
    goto LAB_07733e3c;
  }
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar11 = ZEXT816(0);
  if ((char)local_48[5] != '\0') goto LAB_07733f04;
  *(undefined1 *)(local_48 + 5) = 1;
  if (DAT_09522a98 == '\0') {
    FUN_03f5c2a4(&DAT_091891d8);
    DAT_09522a98 = '\x01';
  }
  if (**(long **)(DAT_091891d8 + 0xb8) != 0) {
    EssentialSystemR1_R1Logger__Log(**(long **)(DAT_091891d8 + 0xb8),DAT_091fead8,0);
  }
  if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  local_40 = (**(code **)(*local_48 + 0x1c8))(local_48,*(undefined8 *)(*local_48 + 0x1d0));
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  thunk_FUN_03f5d7b8(local_40,0);
  local_60 = local_40;
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
  uVar2 = local_60._0_8_;
  local_24 = uVar5;
  if ((long *)local_60._0_8_ == (long *)0x0) {
LAB_07733c8c:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_07733d10;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07733d10:
      (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
    }
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    PlatformServiceR1_CloudSaveControllerAbstract__EnsureLastSaveTimeSeeded();
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    auVar11 = (**(code **)(*local_48 + 0x1b8))(local_48,*(undefined8 *)(*local_48 + 0x1c0));
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_40 = auVar11;
    thunk_FUN_03f5d7b8(local_40,0);
    local_60 = local_40;
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
    uVar2 = local_60._0_8_;
    auVar11 = local_60;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07733e28;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07733e28:
      iVar3 = (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
      auVar11 = local_60;
      if (iVar3 == 0) {
        local_24 = 1;
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b1184(param_1 + 2,local_60,param_1,DAT_091c1f98);
        goto LAB_07734024;
      }
    }
LAB_07733e3c:
    local_60 = auVar11;
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar2 = local_60._0_8_;
    if ((long *)local_60._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_60._0_8_;
      uVar10 = local_60._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_07733ec0;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07733ec0:
      (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
    }
    uVar5 = 0x10;
  }
  else {
    lVar6 = *(long *)local_60._0_8_;
    uVar10 = local_60._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_07733c78;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,0);
LAB_07733c78:
    iVar3 = (*(code *)*puVar4)(uVar2,uVar10,puVar4[1]);
    if (iVar3 != 0) goto LAB_07733c8c;
    local_24 = 0;
    *param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 8,0);
    FUN_049b1184(param_1 + 2,local_60,param_1,DAT_091c1f98);
LAB_07734024:
    uVar5 = 10;
  }
  if ((int)local_24 < 0) {
    if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined1 *)(local_48 + 5) = 0;
  }
  auVar11 = local_60;
  if ((uVar5 | 0x10) != 0x10) {
    return;
  }
LAB_07733f04:
  cVar1 = DAT_095162d8;
  *param_1 = 0xfffffffe;
  local_60 = auVar11;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar9 = *(long **)(param_1 + 2);
  if (plVar9 != (long *)0x0) {
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091866a8) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07733f8c;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_07733f8c:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

