// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<WaitForNetwork>d__47$$MoveNext
// address: 0x77d427c
// body: available
// range: 0x77d427c-0x77d45af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<WaitForNetwork>d__47__MoveNext(int *param_1)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522fc7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c1f70);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09522fc7 = 1;
  }
  local_60 = ZEXT816(0);
  if (*param_1 != 0) goto LAB_077d4394;
  local_60 = *(undefined1 (*) [16])(param_1 + 8);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *param_1 = -1;
  do {
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
            puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
            goto LAB_077d4384;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(local_60._0_8_,DAT_091868c0,2);
LAB_077d4384:
      (*(code *)*puVar5)(uVar2,uVar10,puVar5[1]);
    }
LAB_077d4394:
    iVar4 = param_1[6];
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar4);
    if ((uVar7 & 1) == 0) {
LAB_077d4504:
      cVar1 = DAT_095162d8;
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
      if (uVar7 == 0) goto LAB_077d456c;
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = _GAME_BaseGame_ABIServerAPI__get_IsNetworkActive();
    if ((uVar7 & 1) != 0) goto LAB_077d4504;
    if (*(int *)(DAT_0918c610 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar11 = Cysharp_Threading_Tasks_UniTask__Delay(0x21,2,8,0,0,0);
    local_50 = auVar11;
    thunk_FUN_03f5d7b8(local_50,0);
    uVar3 = local_50._8_8_;
    uVar2 = local_50._0_8_;
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
    if ((long *)uVar2 != (long *)0x0) {
      lVar6 = *(long *)uVar2;
      uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar7 != 0) {
        piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar8 + -2) == DAT_091868c0) {
            puVar5 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
            goto LAB_077d44b8;
          }
          uVar7 = uVar7 - 1;
          piVar8 = piVar8 + 4;
        } while (uVar7 != 0);
      }
      puVar5 = (undefined8 *)FUN_03f95da8(uVar2,DAT_091868c0,0);
LAB_077d44b8:
      iVar4 = (*(code *)*puVar5)(uVar2,uVar3 & 0xffffffff,puVar5[1]);
      if (iVar4 == 0) {
        *param_1 = 0;
        *(undefined1 (*) [16])(param_1 + 8) = local_60;
        thunk_FUN_03f5d7b8(param_1 + 8,0);
        FUN_049b0e60(param_1 + 2,local_60,param_1,DAT_091c1f70);
        return;
      }
    }
  } while( true );
  while( true ) {
    uVar7 = uVar7 - 1;
    piVar8 = piVar8 + 4;
    if (uVar7 == 0) break;
    if (*(long *)(piVar8 + -2) == DAT_091866a8) {
      puVar5 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
      goto LAB_077d458c;
    }
  }
LAB_077d456c:
  puVar5 = (undefined8 *)FUN_03f95da8(plVar9,DAT_091866a8,2);
LAB_077d458c:
  (*(code *)*puVar5)(plVar9,puVar5[1]);
  return;
}

