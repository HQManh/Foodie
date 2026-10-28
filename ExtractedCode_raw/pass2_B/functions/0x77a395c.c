// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager.<WaitForIdentityDataReady>d__6$$MoveNext
// address: 0x77a395c
// body: available
// range: 0x77a395c-0x77a3d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameManager_<WaitForIdentityDataReady>d__6__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined1 auVar12 [16];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  
  if ((DAT_09522e2c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c2128);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918a598);
    FUN_03f5c2a4(&DAT_091ba4a8);
    FUN_03f5c2a4(&DAT_0917e748);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522e2c = 1;
  }
  local_80 = ZEXT816(0);
  if (*param_1 != 0) goto LAB_077a3ab8;
  local_80 = *(undefined1 (*) [16])(param_1 + 6);
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *param_1 = -1;
  do {
    if (DAT_095162d6 == '\0') {
      FUN_03f5c2a4(&DAT_091868c0);
      DAT_095162d6 = '\x01';
    }
    uVar10 = local_80._0_8_;
    if ((long *)local_80._0_8_ != (long *)0x0) {
      lVar6 = *(long *)local_80._0_8_;
      uVar11 = local_80._8_8_ & 0xffff;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_077a3aa8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(local_80._0_8_,DAT_091868c0,2);
LAB_077a3aa8:
      (*(code *)*puVar4)(uVar10,uVar11,puVar4[1]);
    }
LAB_077a3ab8:
    if (*(int *)(DAT_0917e748 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = DAT_091ba4a8;
    lVar5 = *(long *)(DAT_091ba4a8 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar6 = *(long *)(lVar6 + 0x20);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    lVar6 = *(long *)(*(long *)(lVar6 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar6 + 0x135) & 1) == 0) {
      lVar6 = FUN_03f95a6c();
    }
    uVar10 = **(undefined8 **)(lVar6 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar7 = UnityEngine_Object__op_Inequality(uVar10,0,0);
    cVar1 = DAT_095162d8;
    if (((uVar7 & 1) == 0) || (**(char **)(DAT_0918a598 + 0xb8) != '\0')) {
      *param_1 = -2;
      if (cVar1 == '\0') {
        FUN_03f5c2a4(&DAT_091866a8);
        DAT_095162d8 = '\x01';
      }
      plVar9 = *(long **)(param_1 + 2);
      if (plVar9 == (long *)0x0) {
        return;
      }
      lVar6 = *plVar9;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 == 0) goto LAB_077a3d10;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar12 = Cysharp_Threading_Tasks_UniTask__Delay(0x21,0,8,0,0,0);
    local_70 = auVar12;
    thunk_FUN_03f5d7b8(local_70,0);
    uVar2 = local_70._8_8_;
    uVar10 = local_70._0_8_;
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
    if ((long *)uVar10 != (long *)0x0) {
      lVar6 = *(long *)uVar10;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077a3c5c;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(uVar10,DAT_091868c0,0);
LAB_077a3c5c:
      iVar3 = (*(code *)*puVar4)(uVar10,uVar2 & 0xffffffff,puVar4[1]);
      if (iVar3 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 6) = local_80;
        thunk_FUN_03f5d7b8(param_1 + 6,0);
        FUN_049b2cbc(param_1 + 2,local_80,param_1,DAT_091c2128);
        return;
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == DAT_091866a8) {
      puVar4 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_077a3d30;
    }
  }
LAB_077a3d10:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077a3d30:
  (*(code *)*puVar4)(plVar9,puVar4[1]);
  return;
}

