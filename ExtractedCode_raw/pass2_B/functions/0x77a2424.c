// rea decompile_all
// name: _GAME.SaveGame.SaveGameManager.<SaveDataToServer>d__10$$MoveNext
// address: 0x77a2424
// body: available
// range: 0x77a2424-0x77a2867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77a2860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77a2864 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_SaveGame_SaveGameManager_<SaveDataToServer>d__10__MoveNext(int *param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auVar12 [16];
  undefined1 local_90 [16];
  int local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 local_48;
  undefined1 local_40 [16];
  
  if ((DAT_09522e2a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c1ef0);
    FUN_03f5c2a4(&DAT_0919a7e0);
    FUN_03f5c2a4(&DAT_0919a7e8);
    FUN_03f5c2a4(&DAT_091d5fc0);
    FUN_03f5c2a4(&DAT_091d5fc8);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_0918a598);
    FUN_03f5c2a4(&DAT_0918a5a8);
    FUN_03f5c2a4(&DAT_09194168);
    FUN_03f5c2a4(&DAT_091bdf88);
    FUN_03f5c2a4(&DAT_09221360);
    DAT_09522e2a = 1;
  }
  local_40._0_8_ = 0;
  local_40._8_8_ = 0;
  local_48 = 0;
  if (*param_1 == 0) {
    local_40 = *(undefined1 (*) [16])(param_1 + 0x10);
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    *param_1 = -1;
  }
  else {
    uStack_68 = *(undefined8 *)(param_1 + 10);
    local_70 = *(undefined8 *)(param_1 + 8);
    uStack_58 = *(undefined8 *)(param_1 + 0xe);
    uStack_60 = *(undefined8 *)(param_1 + 0xc);
    auVar12 = _GAME_SaveGame_SaveGameServer__SaveData(*(undefined8 *)(param_1 + 6),&local_70,1);
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bdf88 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_90 = auVar12;
    thunk_FUN_03f5d7b8(local_90,0);
    local_40 = local_90;
    uVar4 = FUN_0429cb44(local_40,DAT_0919a7e8);
    if ((uVar4 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0x10) = local_40;
      thunk_FUN_03f5d7b8(param_1 + 0x10,0);
      FUN_049aef24(param_1 + 2,local_40,param_1,DAT_091c1ef0);
      return;
    }
  }
  uVar7 = local_40._0_8_;
  if ((long *)local_40._0_8_ == (long *)0x0) {
    iVar3 = local_40._8_4_;
  }
  else {
    uVar2 = local_40._12_2_;
    lVar5 = *(long *)(DAT_0919a7e0 + 0x20);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c(lVar5);
    }
    lVar8 = *(long *)uVar7;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == lVar5) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_077a2644;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar7,lVar5,0);
LAB_077a2644:
    iVar3 = (*(code *)*puVar6)(uVar7,uVar2,puVar6[1]);
  }
  local_90._0_8_ = DAT_09194168;
  local_90._8_8_ = 0xffffffffffffffff;
  local_80 = iVar3;
  uVar7 = System_Enum__ToString(local_90,0);
  System_String__Concat(DAT_09221360,uVar7,0);
  _GAME_SaveGame_SaveGameManager__Track();
  if (iVar3 == 0) {
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09522cb0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522cb0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar7 = **(undefined8 **)(DAT_09180dc0 + 0xb8);
    uVar11 = *(undefined8 *)(*(long *)(DAT_0918a598 + 0xb8) + 8);
    if (*(int *)(DAT_0918a5a8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918a5a8);
    }
    _GAME_SaveGame_SaveGameStats__SaveBase(uVar7,uVar11,0);
    puVar6 = (undefined8 *)(*(long *)(DAT_0918a598 + 0xb8) + 8);
    *puVar6 = 0;
    thunk_FUN_03f5d7b8(puVar6,0);
    if (*(int *)(DAT_09189468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar10 = (long *)FUN_04ca5cb8(DAT_091d5fc0);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar10 + 0x2c8))(plVar10,*(undefined8 *)(*plVar10 + 0x2d0));
  }
  else {
    if (*(int *)(DAT_09189468 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar5 = FUN_04ca5cb8(DAT_091d5fc8);
    if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    _GAME_SaveGame_PopupPushDataFailedCtrl__Open(lVar5,iVar3);
  }
  cVar1 = DAT_095162d8;
  *param_1 = -2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar10 = *(long **)(param_1 + 2);
  if (plVar10 != (long *)0x0) {
    lVar5 = *plVar10;
    uVar4 = (ulong)*(ushort *)(lVar5 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar5 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar5 + (long)(*piVar9 + 2) * 0x10 + 0x138);
          goto LAB_077a2840;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091866a8,2);
LAB_077a2840:
    (*(code *)*puVar6)(plVar10,puVar6[1]);
  }
  return;
}

