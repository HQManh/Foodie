// rea decompile_all
// name: _GAME.BaseGame.SocialAuth.<SignInPlatformAuthID>d__10$$MoveNext
// address: 0x77d7d74
// body: available
// range: 0x77d7d74-0x77d80d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SocialAuth_<SignInPlatformAuthID>d__10__MoveNext(int *param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  int *piVar8;
  long *plVar9;
  long *local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined4 local_68;
  long *local_60;
  undefined8 uStack_58;
  ulong local_50;
  long *local_40;
  undefined8 uStack_38;
  ulong local_30;
  
  if ((DAT_09522ff4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09199d98);
    FUN_03f5c2a4(&DAT_09199de8);
    FUN_03f5c2a4(&DAT_0919a710);
    FUN_03f5c2a4(&DAT_0919a718);
    FUN_03f5c2a4(&DAT_0918ae28);
    FUN_03f5c2a4(&DAT_091bdf18);
    FUN_03f5c2a4(&DAT_09203138);
    FUN_03f5c2a4(&DAT_091f5700);
    DAT_09522ff4 = 1;
  }
  local_40 = (long *)0x0;
  uStack_38 = 0;
  local_30 = 0;
  local_60 = (long *)0x0;
  uStack_58 = 0;
  local_50 = 0;
  local_68 = 0;
  if (*param_1 == 0) {
    local_30 = *(ulong *)(param_1 + 0xc);
    uStack_38 = *(undefined8 *)(param_1 + 10);
    local_40 = *(long **)(param_1 + 8);
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    *param_1 = -1;
  }
  else {
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    _GAME_BaseGame_SocialAuth__SignInGooglePlayGames(&local_90);
    local_50 = local_80;
    uStack_58 = uStack_88;
    uStack_88 = 0;
    local_80 = 0;
    local_60 = local_90;
    local_90 = (long *)0x0;
    if ((*(byte *)(*(long *)(DAT_091bdf18 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    uStack_88 = uStack_58;
    local_90 = local_60;
    local_80 = local_50;
    thunk_FUN_03f5d7b8(&local_90,0);
    uStack_38 = uStack_88;
    local_40 = local_90;
    local_30 = local_80;
    uVar1 = FUN_041e5390(&local_40,DAT_0919a718);
    if ((uVar1 & 1) == 0) {
      *param_1 = 0;
      *(undefined8 *)(param_1 + 10) = uStack_38;
      *(long **)(param_1 + 8) = local_40;
      *(ulong *)(param_1 + 0xc) = local_30;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_047944b4(param_1 + 2,&local_40,param_1,DAT_09199d98);
      return;
    }
  }
  plVar9 = local_40;
  uVar4 = uStack_38;
  if (local_40 != (long *)0x0) {
    uVar1 = local_30 & 0xffff;
    lVar2 = *(long *)(DAT_0919a710 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar6 = *plVar9;
    uVar7 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar7 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar8 * 0x10 + 0x138);
          goto LAB_077d7fa8;
        }
        uVar7 = uVar7 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar7 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,lVar2,0);
LAB_077d7fa8:
    uVar4 = (*(code *)*puVar3)(plVar9,uVar1,puVar3[1]);
  }
  uVar1 = _GAME_Utils_HelperString__IsNullOrEmpty(uVar4,0);
  uVar5 = DAT_091f5700;
  if ((uVar1 & 1) == 0) {
    uVar4 = _GAME_Utils_HelperString__EncodeBase64(uVar4,0x10,0);
    uVar5 = System_String__Concat(DAT_09203138,uVar4,0);
  }
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(undefined8 *)(param_1 + 6) = uVar5;
    thunk_FUN_03f5d7b8(param_1 + 6,uVar5);
  }
  else {
    lVar2 = *(long *)(DAT_09199de8 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 8);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar6 = *plVar9;
    uVar1 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar1 != 0) {
      piVar8 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar8 + -2) == lVar2) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar8 + 2) * 0x10 + 0x138);
          goto LAB_077d80b8;
        }
        uVar1 = uVar1 - 1;
        piVar8 = piVar8 + 4;
      } while (uVar1 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,lVar2,2);
LAB_077d80b8:
    (*(code *)*puVar3)(plVar9,uVar5,puVar3[1]);
  }
  return;
}

