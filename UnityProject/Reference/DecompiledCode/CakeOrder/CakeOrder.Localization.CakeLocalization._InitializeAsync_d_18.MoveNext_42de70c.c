// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization.<InitializeAsync>d__18$$MoveNext
// address: 0x42de70c
// body: available
// range: 0x42de70c-0x42df00b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42df000 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42df004 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42df008 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization_<InitializeAsync>d__18__MoveNext(int *param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  long *local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined4 local_a8;
  undefined1 local_a0 [16];
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  long *local_70;
  undefined8 uStack_68;
  ulong local_60;
  undefined1 local_50 [16];
  ulong local_40;
  
  if ((DAT_0951742a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174810);
    FUN_03f5c2a4(&DAT_091bf6f8);
    FUN_03f5c2a4(&DAT_091c1e40);
    FUN_03f5c2a4(&DAT_091c1f78);
    FUN_03f5c2a4(&DAT_0919a640);
    FUN_03f5c2a4(&DAT_0919a648);
    FUN_03f5c2a4(&DAT_091c45a0);
    FUN_03f5c2a4(&DAT_091c45a8);
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09182870);
    FUN_03f5c2a4(&DAT_09179a20);
    FUN_03f5c2a4(&DAT_09187a78);
    FUN_03f5c2a4(&DAT_09187a80);
    FUN_03f5c2a4(&DAT_091807c0);
    FUN_03f5c2a4(&DAT_091bde80);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951742a = 1;
  }
  iVar2 = *param_1;
  local_70 = (long *)0x0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = (long *)0x0;
  uStack_88 = 0;
  local_80 = 0;
  local_a0._0_8_ = 0;
  local_a0._8_8_ = 0;
  local_a8 = 0;
  if (iVar2 == 0) {
    local_60 = *(ulong *)(param_1 + 10);
    uStack_68 = *(undefined8 *)(param_1 + 8);
    local_70 = *(long **)(param_1 + 6);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    *param_1 = -1;
LAB_042de878:
    plVar9 = local_70;
    if (local_70 != (long *)0x0) {
      uVar7 = local_60 & 0xffff;
      lVar6 = *(long *)(DAT_0919a640 + 0x20);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c();
      }
      lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x28);
      if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
        lVar6 = FUN_03f95a6c(lVar6);
      }
      lVar5 = *plVar9;
      uVar10 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar10 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == lVar6) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_042dea18;
          }
          uVar10 = uVar10 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar10 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar9,lVar6,0);
LAB_042dea18:
      (*(code *)*puVar4)(plVar9,uVar7,puVar4[1]);
    }
    uVar3 = thunk_FUN_03f9944c(DAT_09179a20);
    FUN_05331a8c(uVar3,0,DAT_091c45a8,0);
    **(undefined8 **)(DAT_09187a80 + 0xb8) = uVar3;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09187a80 + 0xb8),uVar3);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(DAT_09182278 + 0xb8);
    if (*(char *)(lVar6 + 8) == '\0') {
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar6 = *(long *)(DAT_09182278 + 0xb8);
      }
      *(undefined1 *)(lVar6 + 8) = 1;
      uVar3 = thunk_FUN_03f9944c(DAT_09174810);
      FUN_070a8c30(uVar3,0,DAT_091c45a0,0);
      UnityEngine_Localization_Settings_LocalizationSettings__add_SelectedLocaleChanged(uVar3,0);
    }
    lVar6 = FUN_03f5c394(DAT_091807c0,2);
    if (*(int *)(DAT_09187a78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = **(undefined8 **)(DAT_09187a78 + 0xb8);
    if (*(int *)(DAT_09182278 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09182278);
    }
    auVar11 = CakeOrder_Localization_CakeLocalization__PreloadAsync(uVar3);
    if (lVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 (*) [16])(lVar6 + 0x20) = auVar11;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(lVar6 + 0x20),0);
    UnityEngine_Localization_Settings_LocalizationSettings__get_SelectedLocale(0);
    auVar11 = CakeOrder_Localization_LocaleFonts__ApplyAsync();
    if ((*(uint *)(lVar6 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    *(undefined1 (*) [16])(lVar6 + 0x30) = auVar11;
    thunk_FUN_03f5d7b8((undefined1 (*) [16])(lVar6 + 0x30),0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__WhenAll(lVar6,0);
    thunk_FUN_03f5d7b8(local_50,0);
    local_a0 = local_50;
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
    uVar3 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar10 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_042dec84;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_042dec84:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 1;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_042f4878(param_1 + 2,local_a0,param_1,DAT_091c1f78);
        return;
      }
    }
LAB_042dec98:
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar3 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar10 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_042ded18;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_042ded18:
      (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
    }
    uVar3 = UnityEngine_Localization_Settings_LocalizationSettings__get_SelectedLocale(0);
    if (*(int *)(DAT_09182870 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = CakeOrder_Localization_ComplexScriptText__ApplyAsync(uVar3);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = auVar11;
    thunk_FUN_03f5d7b8(local_50,0);
    local_a0 = local_50;
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
    uVar3 = local_a0._0_8_;
    if ((long *)local_a0._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_a0._0_8_;
      uVar10 = local_a0._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_042dee3c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,0);
LAB_042dee3c:
      iVar2 = (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
      if (iVar2 == 0) {
        *param_1 = 2;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_a0;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_042f4878(param_1 + 2,local_a0,param_1,DAT_091c1f78);
        return;
      }
    }
  }
  else {
    if (iVar2 == 1) {
      local_a0 = *(undefined1 (*) [16])(param_1 + 0xc);
      param_1[0xc] = 0;
      param_1[0xd] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      *param_1 = -1;
      goto LAB_042dec98;
    }
    if (iVar2 != 2) {
      uVar7 = UnityEngine_Localization_Settings_LocalizationSettings__get_HasSettings(0);
      if ((uVar7 & 1) == 0) goto LAB_042deee0;
      UnityEngine_Localization_Settings_LocalizationSettings__get_InitializationOperation
                (&local_c8,0);
      local_50._8_8_ = uStack_c0;
      local_50._0_8_ = local_c8;
      local_40 = local_b8;
      FUN_04b722fc(&local_c8,local_50,0,8,0,0,0,DAT_091bf6f8);
      local_50._8_8_ = 0;
      local_40 = 0;
      uStack_88 = uStack_c0;
      local_90 = local_c8;
      local_80 = local_b8;
      local_50._0_8_ = 0;
      if ((*(byte *)(*(long *)(DAT_091bde80 + 0x20) + 0x135) & 1) == 0) {
        FUN_03f95a6c();
      }
      local_50._8_8_ = uStack_88;
      local_50._0_8_ = local_90;
      local_40 = local_80;
      thunk_FUN_03f5d7b8(local_50,0);
      uStack_68 = local_50._8_8_;
      local_70 = (long *)local_50._0_8_;
      local_60 = local_40;
      uVar7 = FUN_041e5390(&local_70,DAT_0919a648);
      if ((uVar7 & 1) == 0) {
        *param_1 = 0;
        *(undefined8 *)(param_1 + 8) = uStack_68;
        *(long **)(param_1 + 6) = local_70;
        *(ulong *)(param_1 + 10) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_042f476c(param_1 + 2,&local_70,param_1,DAT_091c1e40);
        return;
      }
      goto LAB_042de878;
    }
    local_a0 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar3 = local_a0._0_8_;
  if ((long *)local_a0._0_8_ != (long *)0x0) {
    lVar6 = *(long *)local_a0._0_8_;
    uVar10 = local_a0._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_042deed0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_a0._0_8_,DAT_091868c0,2);
LAB_042deed0:
    (*(code *)*puVar4)(uVar3,uVar10,puVar4[1]);
  }
LAB_042deee0:
  cVar1 = DAT_095162d8;
  *param_1 = -2;
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
          goto LAB_042def68;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_042def68:
    (*(code *)*puVar4)(plVar9,puVar4[1]);
  }
  return;
}

