// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTaskExtensions.<Unwrap>d__63$$MoveNext
// address: 0x7da74b0
// body: available
// range: 0x7da74b0-0x7da792b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTaskExtensions_<Unwrap>d__63__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 local_90 [16];
  undefined8 uStack_80;
  ulong uStack_78;
  undefined4 local_68;
  undefined1 local_60 [16];
  long *local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong local_38;
  
  if ((DAT_09525ec3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c1ee0);
    FUN_03f5c2a4(&DAT_091c2230);
    FUN_03f5c2a4(&DAT_0919a7a0);
    FUN_03f5c2a4(&DAT_0919a7a8);
    FUN_03f5c2a4(&DAT_091bdf60);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525ec3 = 1;
  }
  local_60._0_8_ = 0;
  local_60._8_8_ = 0;
  local_68 = 0;
  uStack_48 = 0;
  local_50 = (long *)0x0;
  local_38 = 0;
  uStack_40 = 0;
  if (*param_1 == 0) {
    uStack_48 = *(undefined8 *)(param_1 + 0x10);
    local_50 = *(long **)(param_1 + 0xe);
    local_38 = *(ulong *)(param_1 + 0x14);
    uStack_40 = *(undefined8 *)(param_1 + 0x12);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    if (*param_1 == 1) {
      local_60 = *(undefined1 (*) [16])(param_1 + 0x16);
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      param_1[0x18] = 0;
      param_1[0x19] = 0;
      *param_1 = -1;
      goto LAB_07da77b4;
    }
    local_90._8_8_ = 0;
    local_90._0_8_ = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf60 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_90._8_8_ = *(undefined8 *)(param_1 + 8);
    local_90._0_8_ = *(undefined8 *)(param_1 + 6);
    uStack_78 = *(ulong *)(param_1 + 0xc);
    uStack_80 = *(undefined8 *)(param_1 + 10);
    thunk_FUN_03f5d7b8(local_90,0);
    uStack_48 = local_90._8_8_;
    local_50 = (long *)local_90._0_8_;
    local_38 = uStack_78;
    uStack_40 = uStack_80;
    uVar8 = FUN_06b81900(&local_50,DAT_0919a7a8);
    if ((uVar8 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 0x10) = uStack_48;
      *(long **)(param_1 + 0xe) = local_50;
      *(ulong *)(param_1 + 0x14) = local_38;
      *(undefined8 *)(param_1 + 0x12) = uStack_40;
      thunk_FUN_03f5d7b8(param_1 + 0xe,0);
      FUN_049afce8(param_1 + 2,&local_50,param_1,DAT_091c1ee0);
      return;
    }
  }
  plVar10 = local_50;
  auVar12._8_8_ = uStack_40;
  auVar12._0_8_ = uStack_48;
  if (local_50 != (long *)0x0) {
    uVar8 = local_38 & 0xffff;
    lVar7 = *(long *)(DAT_0919a7a0 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar6 = *plVar10;
    uVar11 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar11 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar7) {
          puVar5 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07da76a8;
        }
        uVar11 = uVar11 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar11 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,lVar7,0);
LAB_07da76a8:
    auVar12 = (*(code *)*puVar5)(plVar10,uVar8,puVar5[1]);
  }
  if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_90 = auVar12;
  thunk_FUN_03f5d7b8(local_90,0);
  uVar3 = local_90._8_8_;
  uVar2 = local_90._0_8_;
  local_60 = local_90;
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
  if ((long *)uVar2 != (long *)0x0) {
    lVar7 = *(long *)uVar2;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07da77a0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(uVar2,DAT_091868c0,0);
LAB_07da77a0:
    iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
    if (iVar4 == 0) {
      *param_1 = 1;
      *(undefined1 (*) [16])(param_1 + 0x16) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 0x16,0);
      FUN_049b3410(param_1 + 2,local_60,param_1,DAT_091c2230);
      return;
    }
  }
LAB_07da77b4:
  if (DAT_095162d6 == '\0') {
    FUN_03f5c2a4(&DAT_091868c0);
    DAT_095162d6 = '\x01';
  }
  uVar2 = local_60._0_8_;
  if ((long *)local_60._0_8_ != (long *)0x0) {
    lVar7 = *(long *)local_60._0_8_;
    uVar11 = local_60._8_8_ & 0xffff;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091868c0) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07da7838;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_07da7838:
    (*(code *)*puVar5)(uVar2,uVar11,puVar5[1]);
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar5 = (undefined8 *)(lVar7 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_07da78d0;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_07da78d0:
    (*(code *)*puVar5)(plVar10,puVar5[1]);
  }
  return;
}

