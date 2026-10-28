// rea decompile_all
// name: _GAME.Bridge.R1UserTextSupport.<LoadGameFontAsync>d__19$$MoveNext
// address: 0x7769bcc
// body: available
// range: 0x7769bcc-0x776a0bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776a0b8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Bridge_R1UserTextSupport_<LoadGameFontAsync>d__19__MoveNext(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  undefined8 uVar9;
  ulong uVar10;
  long *plVar11;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09522c7f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091bf660);
    FUN_03f5c2a4(&DAT_09180f88);
    FUN_03f5c2a4(&DAT_09197a58);
    FUN_03f5c2a4(&DAT_09197a60);
    FUN_03f5c2a4(&DAT_09175098);
    FUN_03f5c2a4(&DAT_09199e00);
    FUN_03f5c2a4(&DAT_09199e20);
    FUN_03f5c2a4(&DAT_091aa510);
    FUN_03f5c2a4(&DAT_09189998);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522c7f = 1;
  }
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  if (*param_1 == 0) {
    local_90 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uVar9 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_09180f88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    FUN_04b711d8(&local_70,uVar9,DAT_091bf660);
    uStack_48 = uStack_68;
    local_50 = local_70;
    local_40 = local_60;
    *(undefined8 *)(param_1 + 0xc) = uStack_68;
    *(undefined8 *)(param_1 + 10) = local_70;
    *(undefined8 *)(param_1 + 0xe) = local_60;
    thunk_FUN_03f5d7b8(param_1 + 10,0);
    uStack_68 = *(undefined8 *)(param_1 + 0xc);
    local_70 = *(undefined8 *)(param_1 + 10);
    local_60 = *(undefined8 *)(param_1 + 0xe);
    uVar9 = FUN_03f5c42c(DAT_09175098,&local_70);
    local_80 = Cysharp_Threading_Tasks_EnumeratorAsyncExtensions__ToUniTask(uVar9,8,0,0);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    thunk_FUN_03f5d7b8(local_80,0);
    local_90 = local_80;
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
    uVar9 = local_90._0_8_;
    if ((long *)local_90._0_8_ != (long *)0x0) {
      lVar5 = *(long *)local_90._0_8_;
      uVar10 = local_90._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar3 = (undefined8 *)(lVar5 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_07769e08;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,0);
LAB_07769e08:
      iVar2 = (*(code *)*puVar3)(uVar9,uVar10,puVar3[1]);
      if (iVar2 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0x10) = local_90;
        thunk_FUN_03f5d7b8(param_1 + 0x10,0);
        FUN_047955dc(param_1 + 2,local_90,param_1,DAT_09199e00);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar9 = local_90._0_8_;
  if ((long *)local_90._0_8_ != (long *)0x0) {
    lVar5 = *(long *)local_90._0_8_;
    uVar10 = local_90._8_8_ & 0xffff;
    uVar7 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == DAT_091868c0) {
          puVar3 = (undefined8 *)(lVar5 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_07769ea0;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(local_90._0_8_,DAT_091868c0,2);
LAB_07769ea0:
    (*(code *)*puVar3)(uVar9,uVar10,puVar3[1]);
  }
  if (*(int *)(DAT_09189998 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = DAT_091aa510;
  lVar4 = *(long *)(*(long *)(DAT_09189998 + 0xb8) + 0x28);
  if (lVar4 != 0) {
    local_60 = *(undefined8 *)(param_1 + 0xe);
    uStack_68 = *(undefined8 *)(param_1 + 0xc);
    local_70 = *(undefined8 *)(param_1 + 10);
    lVar6 = *(long *)(lVar4 + 0x10);
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (lVar6 != 0) {
      uVar1 = *(uint *)(lVar4 + 0x18);
      if (uVar1 < *(uint *)(lVar6 + 0x18)) {
        lVar6 = lVar6 + (long)(int)uVar1 * 0x18;
        *(uint *)(lVar4 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar6 + 0x28) = uStack_68;
        *(undefined8 *)(lVar6 + 0x20) = local_70;
        *(undefined8 *)(lVar6 + 0x30) = local_60;
        thunk_FUN_03f5d7b8(lVar6 + 0x20,0);
      }
      else {
        local_50 = local_70;
        uStack_48 = uStack_68;
        local_40 = local_60;
        FUN_0564eb10(lVar4,&local_50,
                     *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      iVar2 = FUN_0640f818(param_1 + 10,DAT_09197a60);
      if (iVar2 == 1) {
        uVar9 = FUN_0640f7ac(param_1 + 10,DAT_09197a58);
      }
      else {
        uVar9 = 0;
      }
      plVar11 = *(long **)(param_1 + 2);
      *param_1 = -2;
      if (plVar11 == (long *)0x0) {
        *(undefined8 *)(param_1 + 6) = uVar9;
        thunk_FUN_03f5d7b8(param_1 + 6,uVar9);
      }
      else {
        lVar5 = *(long *)(DAT_09199e20 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 8);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c(lVar5);
        }
        lVar4 = *plVar11;
        uVar7 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar7 != 0) {
          piVar8 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar8 + -2) == lVar5) {
              puVar3 = (undefined8 *)(lVar4 + (long)(*piVar8 + 2) * 0x10 + 0x138);
              goto LAB_0776a05c;
            }
            uVar7 = uVar7 - 1;
            piVar8 = piVar8 + 4;
          } while (uVar7 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar11,lVar5,2);
LAB_0776a05c:
        (*(code *)*puVar3)(plVar11,uVar9,puVar3[1]);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

