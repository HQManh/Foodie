// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<InitConnection>d__44$$MoveNext
// address: 0x77cfd70
// body: available
// range: 0x77cfd70-0x77d0333 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d032c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d0330 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<InitConnection>d__44__MoveNext(int *param_1)

{
  int iVar1;
  char cVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  int *piVar12;
  long *plVar13;
  undefined1 auVar14 [16];
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c [3];
  undefined4 local_60;
  undefined1 local_54 [4];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522fbe & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091c1d80);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919d4a0);
    FUN_03f5c2a4(&DAT_091763b8);
    FUN_03f5c2a4(&DAT_0918a9d8);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_09213ab8);
    FUN_03f5c2a4(&DAT_09220cf0);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522fbe = 1;
  }
  local_50._0_8_ = 0;
  local_50._8_8_ = 0;
  local_54[0] = 0;
  local_60 = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    _GAME_Profile_ProfilePopupRouter__OnIdentityChanged(0);
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar10 = *(long *)(DAT_09180dc0 + 0xb8);
    *(undefined4 *)(lVar10 + 0x2c) = 0;
    uVar5 = DAT_091763b8;
    iVar1 = *(int *)(lVar10 + 0x38) + 1;
    *(int *)(lVar10 + 0x38) = iVar1;
    param_1[6] = iVar1;
    uVar5 = thunk_FUN_03f9944c(uVar5);
    FUN_06ed078c(uVar5,DAT_0919d4a0);
    puVar6 = (undefined8 *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x30);
    *puVar6 = uVar5;
    thunk_FUN_03f5d7b8(puVar6,uVar5);
    uVar5 = DAT_091f5700;
    if (DAT_09522fdf == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522fdf = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    **(undefined8 **)(DAT_09180dc0 + 0xb8) = uVar5;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_09180dc0 + 0xb8),uVar5);
    uVar5 = DAT_091f5700;
    if (DAT_09522fe0 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522fe0 = '\x01';
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar6 = (undefined8 *)(*(long *)(DAT_09180dc0 + 0xb8) + 8);
    *puVar6 = uVar5;
    thunk_FUN_03f5d7b8(puVar6,uVar5);
    *(undefined8 *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x10) = DAT_091f5700;
    thunk_FUN_03f5d7b8();
    cVar2 = DAT_09522fe1;
    uVar5 = DAT_091f5700;
    lVar10 = DAT_09180dc0;
    *(undefined1 *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x18) = 0;
    if (cVar2 == '\0') {
      FUN_03f5c2a4(&DAT_09180dc0);
      DAT_09522fe1 = '\x01';
      lVar10 = DAT_09180dc0;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar10 = DAT_09180dc0;
    }
    puVar6 = (undefined8 *)(*(long *)(lVar10 + 0xb8) + 0x20);
    *puVar6 = uVar5;
    thunk_FUN_03f5d7b8(puVar6,uVar5);
    local_6c[0] = _GAME_BaseGame_ABIServerAPI__get_ServerMode();
    uVar5 = FUN_03f5c42c(DAT_0918a9d8,local_6c);
    uVar7 = _GAME_BaseGame_ABIServerAPI__get_UrlSvRoom();
    uVar8 = _GAME_BaseGame_ABIServerAPI__get_UrlSvProfile();
    uVar5 = System_String__Format(DAT_09213ab8,uVar5,uVar7,uVar8,0);
    lVar10 = _GAME_BaseGame_R1ServerConfig__get_Current(0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_70 = *(undefined4 *)(lVar10 + 0x48);
    uVar7 = FUN_03f5c42c(DAT_09535420,&local_70);
    lVar10 = _GAME_BaseGame_R1ServerConfig__get_Current(0);
    if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    local_74 = *(undefined4 *)(lVar10 + 0x4c);
    uVar8 = FUN_03f5c42c(DAT_09535420,&local_74);
    uVar7 = System_String__Format(DAT_09220cf0,uVar7,uVar8,0);
    uVar5 = System_String__Concat(uVar5,uVar7,0);
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__Log(uVar5,0);
    auVar14 = _GAME_BaseGame_WebService__IsActive(0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar14;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar9 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar9 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_049ae590(param_1 + 2,local_50,param_1,DAT_091c1d80);
      return;
    }
  }
  uVar5 = local_50._0_8_;
  if ((long *)local_50._0_8_ == (long *)0x0) {
    bVar4 = local_50[8] != '\0';
  }
  else {
    uVar3 = local_50._10_2_;
    lVar10 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = FUN_03f95a6c(lVar10);
    }
    lVar11 = *(long *)uVar5;
    uVar9 = (ulong)*(ushort *)(lVar11 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == lVar10) {
          puVar6 = (undefined8 *)(lVar11 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_077d0200;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(uVar5,lVar10,0);
LAB_077d0200:
    bVar4 = (*(code *)*puVar6)(uVar5,uVar3,puVar6[1]);
  }
  if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = param_1[6];
  *(byte *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x28) = bVar4 & 1;
  uVar9 = _GAME_BaseGame_ABIServerAPI__IsSessionAlive(iVar1);
  if ((uVar9 & 1) != 0) {
    iVar1 = param_1[6];
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_54[0] = _GAME_BaseGame_ABIServerAPI__CheckNetworkConnection(iVar1);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_54,0);
    local_54[0] = _GAME_BaseGame_ABIServerAPI__ResolveIdentityBeforeConsumers(param_1[6]);
    Cysharp_Threading_Tasks_UniTaskVoid__Forget(local_54,0);
  }
  cVar2 = DAT_095162d8;
  *param_1 = -2;
  if (cVar2 == '\0') {
    FUN_03f5c2a4(&DAT_091866a8);
    DAT_095162d8 = '\x01';
  }
  plVar13 = *(long **)(param_1 + 2);
  if (plVar13 != (long *)0x0) {
    lVar10 = *plVar13;
    uVar9 = (ulong)*(ushort *)(lVar10 + 0x12e);
    if (uVar9 != 0) {
      piVar12 = (int *)(*(long *)(lVar10 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_091866a8) {
          puVar6 = (undefined8 *)(lVar10 + (long)(*piVar12 + 2) * 0x10 + 0x138);
          goto LAB_077d030c;
        }
        uVar9 = uVar9 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar9 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar13,DAT_091866a8,2);
LAB_077d030c:
    (*(code *)*puVar6)(plVar13,puVar6[1]);
  }
  return;
}

