// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization.<PreloadAsync>d__19$$MoveNext
// address: 0x42df8f8
// body: available
// range: 0x42df8f8-0x42dfda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dfd98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dfd9c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dfda0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42dfda4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization_<PreloadAsync>d__19__MoveNext(int *param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  long lVar13;
  int *piVar14;
  long *plVar15;
  long lVar16;
  undefined8 uVar17;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long *local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined4 local_88;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((DAT_0951742c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1f80);
    FUN_03f5c2a4(&DAT_091b0b98);
    FUN_03f5c2a4(&DAT_091b0b90);
    FUN_03f5c2a4(&DAT_0917cdd8);
    FUN_03f5c2a4(&DAT_091b4538);
    FUN_03f5c2a4(&DAT_0918b890);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_0951742c = 1;
  }
  local_80._0_8_ = 0;
  local_80._8_8_ = 0;
  local_88 = 0;
  if (*param_1 == 0) {
    local_80 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    uVar9 = UnityEngine_Localization_Settings_LocalizationSettings__get_HasSettings(0);
    auVar5._8_8_ = local_80._8_8_;
    auVar5._0_8_ = local_80._0_8_;
    auVar4._8_8_ = local_80._8_8_;
    auVar4._0_8_ = local_80._0_8_;
    auVar3._8_8_ = local_70._8_8_;
    auVar3._0_8_ = local_70._0_8_;
    auVar2._8_8_ = local_70._8_8_;
    auVar2._0_8_ = local_70._0_8_;
    if ((((uVar9 & 1) == 0) ||
        (lVar16 = *(long *)(param_1 + 6), local_70 = auVar2, local_80 = auVar4, lVar16 == 0)) ||
       (local_70 = auVar3, local_80 = auVar5, *(long *)(lVar16 + 0x18) == 0)) goto LAB_042dfc90;
    lVar10 = thunk_FUN_03f9944c(DAT_0917cdd8);
    FUN_05886e90(lVar10,*(undefined4 *)(lVar16 + 0x18),DAT_091b0b90);
    lVar16 = *(long *)(param_1 + 6);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (0 < (int)*(ulong *)(lVar16 + 0x18)) {
      uVar9 = 0;
      uVar12 = *(ulong *)(lVar16 + 0x18) & 0xffffffff;
      do {
        if (uVar12 <= uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar17 = *(undefined8 *)(lVar16 + 0x20 + uVar9 * 8);
        if (*(int *)(DAT_0918b890 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Localization_Tables_TableReference__op_Implicit(local_70,uVar17,0);
        lVar6 = DAT_091b0b98;
        uStack_b8 = local_70._8_8_;
        local_c0 = (long *)local_70._0_8_;
        uStack_a8 = uStack_58;
        uStack_b0 = local_60;
        if (lVar10 == 0) {
LAB_042dfd98:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar13 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar13 == 0) goto LAB_042dfd98;
        uVar1 = *(uint *)(lVar10 + 0x18);
        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
          lVar13 = lVar13 + (long)(int)uVar1 * 0x20;
          *(uint *)(lVar10 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar13 + 0x28) = local_70._8_8_;
          *(undefined8 *)(lVar13 + 0x20) = local_70._0_8_;
          *(undefined8 *)(lVar13 + 0x38) = uStack_58;
          *(undefined8 *)(lVar13 + 0x30) = local_60;
          thunk_FUN_03f5d7b8(lVar13 + 0x20,0);
        }
        else {
          FUN_0588770c(lVar10,local_70,
                       *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        uVar12 = (ulong)*(uint *)(lVar16 + 0x18);
        uVar9 = uVar9 + 1;
      } while ((long)uVar9 < (long)(int)*(uint *)(lVar16 + 0x18));
    }
    lVar16 = UnityEngine_Localization_Settings_LocalizationSettings__get_StringDatabase(0);
    if (lVar16 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_05a12738(local_70,lVar16,lVar10,0,DAT_091b4538);
    uStack_d8 = local_70._8_8_;
    local_e0 = (long *)local_70._0_8_;
    local_d0 = local_60;
    local_70 = Cysharp_Threading_Tasks_AddressablesAsyncExtensions__ToUniTask(&local_e0,0,8,0,0,0,0)
    ;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_70,0);
    local_80 = local_70;
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
    uVar17 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar16 = *(long *)local_80._0_8_;
      uVar12 = local_80._8_8_ & 0xffff;
      uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
      if (uVar9 != 0) {
        piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
        do {
          if (*(long *)(piVar14 + -2) == DAT_091868c0) {
            puVar11 = (undefined8 *)(lVar16 + (long)*piVar14 * 0x10 + 0x138);
            goto LAB_042dfd4c;
          }
          uVar9 = uVar9 - 1;
          piVar14 = piVar14 + 4;
        } while (uVar9 != 0);
      }
      puVar11 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,0);
LAB_042dfd4c:
      iVar8 = (*(code *)*puVar11)(uVar17,uVar12,puVar11[1]);
      if (iVar8 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_042f4984(param_1 + 2,local_80,param_1,DAT_091c1f80);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar17 = local_80._0_8_;
  if ((long *)local_80._0_8_ != (long *)0x0) {
    lVar16 = *(long *)local_80._0_8_;
    uVar12 = local_80._8_8_ & 0xffff;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091868c0) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_042dfc80;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_042dfc80:
    (*(code *)*puVar11)(uVar17,uVar12,puVar11[1]);
  }
LAB_042dfc90:
  cVar7 = DAT_095162d8;
  *param_1 = -2;
  if (cVar7 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar15 = *(long **)(param_1 + 2);
  if (plVar15 != (long *)0x0) {
    lVar16 = *plVar15;
    uVar9 = (ulong)*(ushort *)(lVar16 + 0x12e);
    if (uVar9 != 0) {
      piVar14 = (int *)(*(long *)(lVar16 + 0xb0) + 8);
      do {
        if (*(long *)(piVar14 + -2) == DAT_091866a8) {
          puVar11 = (undefined8 *)(lVar16 + (long)(*piVar14 + 2) * 0x10 + 0x138);
          goto LAB_042dfd18;
        }
        uVar9 = uVar9 - 1;
        piVar14 = piVar14 + 4;
      } while (uVar9 != 0);
    }
    puVar11 = (undefined8 *)FUN_03f95da8(plVar15,DAT_091866a8,2);
LAB_042dfd18:
    (*(code *)*puVar11)(plVar15,puVar11[1]);
  }
  return;
}

