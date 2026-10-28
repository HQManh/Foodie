// rea decompile_all
// name: _GAME.GameUI.DropItemController.DropRequest.<ExecuteAsync>d__7$$MoveNext
// address: 0x7753a5c
// body: available
// range: 0x7753a5c-0x7753f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7753f38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7753f3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_DropItemController_DropRequest_<ExecuteAsync>d__7__MoveNext(int *param_1)

{
  undefined2 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  ulong uVar9;
  long *plVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522bcc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199ab0);
    FUN_03f5c2a4(&DAT_09199ac8);
    FUN_03f5c2a4(&DAT_09199b28);
    FUN_03f5c2a4(&DAT_0919a5c0);
    FUN_03f5c2a4(&DAT_0919a5c8);
    FUN_03f5c2a4(&DAT_091bde20);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522bcc = 1;
  }
  lVar11 = *(long *)(param_1 + 10);
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_70._0_8_ = 0;
  local_70._8_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_70 = *(undefined1 (*) [16])(param_1 + 0x10);
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[0x12] = 0;
      param_1[0x13] = 0;
      *param_1 = -1;
      local_60 = ZEXT816(0);
      goto LAB_07753d48;
    }
    uVar8 = *(undefined8 *)(param_1 + 8);
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_50 = Cysharp_Threading_Tasks_UniTask__Yield(8,uVar8,0,0);
    thunk_FUN_03f5d7b8(local_50,0);
    uVar2 = local_50._8_8_;
    uVar8 = local_50._0_8_;
    local_60 = local_50;
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
    if ((long *)uVar8 != (long *)0x0) {
      lVar5 = *(long *)uVar8;
      uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_07753c24;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar8,DAT_091868c0,0);
LAB_07753c24:
      iVar3 = (*(code *)*puVar4)(uVar8,uVar2 & 0xffffffff,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 0xc) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 0xc,0);
        FUN_047922f4(param_1 + 2,local_60,param_1,DAT_09199ac8);
        return;
      }
    }
  }
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar8 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar5 = *(long *)local_60._0_8_;
    uVar9 = local_60._8_8_ & 0xffff;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_091868c0) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07753cbc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07753cbc:
    (*(code *)*puVar4)(uVar8,uVar9,puVar4[1]);
  }
  if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar5 = *(long *)(lVar11 + 0x10);
  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  auVar12 = (**(code **)(lVar5 + 0x18))
                      (*(undefined8 *)(lVar5 + 0x40),*(undefined8 *)(lVar11 + 0x28),
                       *(undefined8 *)(param_1 + 8),*(undefined8 *)(lVar5 + 0x28));
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  if ((*(byte *)(*(long *)(DAT_091bde20 + 0x20) + 0x135) & 1) == 0) {
    FUN_03f95a6c();
  }
  local_50 = auVar12;
  thunk_FUN_03f5d7b8(local_50,0);
  local_70 = local_50;
  uVar6 = FUN_0429cb44(local_70,DAT_0919a5c8);
  if ((uVar6 & 1) == 0) {
    *param_1 = 1;
    *(undefined1 (*) [16])(param_1 + 0x10) = local_70;
    thunk_FUN_03f5d7b8(param_1 + 0x10,0);
    FUN_04791d54(param_1 + 2,local_70,param_1,DAT_09199ab0);
    return;
  }
LAB_07753d48:
  uVar8 = local_70._0_8_;
  if ((long *)local_70._0_8_ == (long *)0x0) {
    iVar3 = local_70._8_4_;
  }
  else {
    uVar1 = local_70._12_2_;
    lVar11 = *(long *)(DAT_0919a5c0 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c(lVar11);
    }
    lVar5 = *(long *)uVar8;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar11) {
          puVar4 = (undefined8 *)(lVar5 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_07753e20;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(uVar8,lVar11,0);
LAB_07753e20:
    iVar3 = (*(code *)*puVar4)(uVar8,uVar1,puVar4[1]);
  }
  plVar10 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar10 == (long *)0x0) {
    param_1[6] = iVar3;
  }
  else {
    lVar11 = *(long *)(DAT_09199b28 + 0x20);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c();
    }
    lVar11 = *(long *)(*(long *)(lVar11 + 0xc0) + 8);
    if ((*(ushort *)(lVar11 + 0x135) & 1) == 0) {
      lVar11 = FUN_03f95a6c(lVar11);
    }
    lVar5 = *plVar10;
    uVar6 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar11) {
          puVar4 = (undefined8 *)(lVar5 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_07753ed8;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar10,lVar11,2);
LAB_07753ed8:
    (*(code *)*puVar4)(plVar10,iVar3,puVar4[1]);
  }
  return;
}

