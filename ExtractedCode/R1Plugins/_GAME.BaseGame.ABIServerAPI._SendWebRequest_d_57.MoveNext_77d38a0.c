// rea decompile_all
// name: _GAME.BaseGame.ABIServerAPI.<SendWebRequest>d__57$$MoveNext
// address: 0x77d38a0
// body: available
// range: 0x77d38a0-0x77d3c53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d3c44 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3c48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3c4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d3c50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_ABIServerAPI_<SendWebRequest>d__57__MoveNext(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  long *plVar11;
  undefined1 auVar12 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  if ((DAT_09522fc4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180dc0);
    FUN_03f5c2a4(&DAT_091997a0);
    FUN_03f5c2a4(&DAT_09199a20);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0919d4c8);
    FUN_03f5c2a4(&DAT_0919d4d0);
    FUN_03f5c2a4(&DAT_091bddd8);
    DAT_09522fc4 = 1;
  }
  local_50._8_8_ = 0;
  local_50._0_8_ = 0;
  if (*param_1 == 0) {
    local_50 = *(undefined1 (*) [16])(param_1 + 0xc);
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = _GAME_BaseGame_ABIServerAPI__get_IsNetworkActive();
    if ((uVar6 & 1) == 0) {
      if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      bVar5 = false;
      *(undefined4 *)(*(long *)(param_1 + 8) + 0x28) = 2;
      goto LAB_077d3b7c;
    }
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = DAT_09180dc0;
    lVar9 = *(long *)(DAT_09180dc0 + 0xb8);
    iVar2 = param_1[10];
    iVar1 = *(int *)(lVar9 + 0x2c) + 1;
    *(int *)(lVar9 + 0x2c) = iVar1;
    param_1[0xb] = iVar1;
    if ((char)iVar2 != '\0') {
      if (*(int *)(lVar7 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar9 = *(long *)(DAT_09180dc0 + 0xb8);
      }
      if (*(long *)(lVar9 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06ed2f2c(*(long *)(lVar9 + 0x30),param_1[0xb],1,DAT_0919d4d0);
    }
    auVar12 = _GAME_BaseGame_WebService__SendWebRequest(*(undefined8 *)(param_1 + 8),0);
    local_40._0_8_ = 0;
    local_40._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_40 = auVar12;
    thunk_FUN_03f5d7b8(local_40,0);
    local_50 = local_40;
    uVar6 = FUN_0430cf0c(local_50,DAT_0919a588);
    if ((uVar6 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 0xc) = local_50;
      thunk_FUN_03f5d7b8(param_1 + 0xc,0);
      FUN_0478e06c(param_1 + 2,local_50,param_1,DAT_091997a0);
      return;
    }
  }
  uVar3 = local_50._0_8_;
  if ((long *)local_50._0_8_ != (long *)0x0) {
    uVar4 = local_50._10_2_;
    lVar7 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *(long *)uVar3;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_077d3b1c;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(uVar3,lVar7,0);
LAB_077d3b1c:
    (*(code *)*puVar8)(uVar3,uVar4,puVar8[1]);
  }
  if ((char)param_1[10] != '\0') {
    if (*(int *)(DAT_09180dc0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar7 = *(long *)(*(long *)(DAT_09180dc0 + 0xb8) + 0x30);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06ed292c(lVar7,param_1[0xb],DAT_0919d4c8);
  }
  if (*(long *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  bVar5 = *(int *)(*(long *)(param_1 + 8) + 0x28) == 1;
LAB_077d3b7c:
  plVar11 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar11 == (long *)0x0) {
    *(bool *)(param_1 + 6) = bVar5;
  }
  else {
    lVar7 = *(long *)(DAT_09199a20 + 0x20);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c();
    }
    lVar7 = *(long *)(*(long *)(lVar7 + 0xc0) + 8);
    if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
      lVar7 = FUN_03f95a6c(lVar7);
    }
    lVar9 = *plVar11;
    uVar6 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar6 != 0) {
      piVar10 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == lVar7) {
          puVar8 = (undefined8 *)(lVar9 + (long)(*piVar10 + 2) * 0x10 + 0x138);
          goto LAB_077d3c20;
        }
        uVar6 = uVar6 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar6 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar11,lVar7,2);
LAB_077d3c20:
    (*(code *)*puVar8)(plVar11,bVar5,puVar8[1]);
  }
  return;
}

