// rea decompile_all
// name: _GAME.BaseGame.SocialAuth.<SignInGooglePlayGames>d__12$$MoveNext
// address: 0x77d7780
// body: available
// range: 0x77d7780-0x77d7c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77d7c1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d7c20 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d7c24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77d7c28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_BaseGame_SocialAuth_<SignInGooglePlayGames>d__12__MoveNext(int *param_1)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  
  if ((DAT_09522ff2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09174938);
    FUN_03f5c2a4(&DAT_09199d80);
    FUN_03f5c2a4(&DAT_09199de8);
    FUN_03f5c2a4(&DAT_0919a580);
    FUN_03f5c2a4(&DAT_0919a588);
    FUN_03f5c2a4(&DAT_0918ae28);
    FUN_03f5c2a4(&DAT_091f0178);
    FUN_03f5c2a4(&DAT_09194990);
    FUN_03f5c2a4(&DAT_091bdcb8);
    FUN_03f5c2a4(&DAT_0917f680);
    FUN_03f5c2a4(&DAT_091bddd8);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_09203780);
    DAT_09522ff2 = 1;
  }
  local_60._8_8_ = 0;
  local_60._0_8_ = 0;
  if (*param_1 == 0) {
    local_60 = *(undefined1 (*) [16])(param_1 + 8);
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    *param_1 = -1;
  }
  else {
    lVar2 = thunk_FUN_03f9944c(DAT_09194990);
    System_Object___ctor(lVar2,0);
    uVar3 = thunk_FUN_03f9944c(DAT_0917f680);
    FUN_064398e4(uVar3,DAT_091bdcb8);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    puVar8 = (undefined8 *)(lVar2 + 0x10);
    *puVar8 = uVar3;
    thunk_FUN_03f5d7b8(puVar8,uVar3);
    GooglePlayGames_PlayGamesPlatform__Activate(0);
    lVar4 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
    uVar3 = thunk_FUN_03f9944c(DAT_09174938);
    FUN_070a7634(uVar3,lVar2,DAT_091f0178,0);
    if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    GooglePlayGames_PlayGamesPlatform__Authenticate(lVar4,uVar3,0);
    uVar3 = *puVar8;
    if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    auVar10 = _GAME_BaseGame_SocialAuth__WaitSignIn(uVar3,DAT_09203780);
    local_50._0_8_ = 0;
    local_50._8_8_ = 0;
    if ((*(byte *)(*(long *)(DAT_091bddd8 + 0x20) + 0x135) & 1) == 0) {
      FUN_03f95a6c();
    }
    local_50 = auVar10;
    thunk_FUN_03f5d7b8(local_50,0);
    local_60 = local_50;
    uVar5 = FUN_0430cf0c(local_60,DAT_0919a588);
    if ((uVar5 & 1) == 0) {
      *param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = local_60;
      thunk_FUN_03f5d7b8(param_1 + 8,0);
      FUN_04792ad4(param_1 + 2,local_60,param_1,DAT_09199d80);
      return;
    }
  }
  uVar3 = local_60._0_8_;
  if ((long *)local_60._0_8_ == (long *)0x0) {
    lVar2 = DAT_091f5700;
    if (local_60[8] == '\0') goto LAB_077d7b44;
  }
  else {
    uVar1 = local_60._10_2_;
    lVar2 = *(long *)(DAT_0919a580 + 0x20);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x28);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c(lVar2);
    }
    lVar4 = *(long *)uVar3;
    uVar5 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar2) {
          puVar8 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_077d7b24;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(uVar3,lVar2,0);
LAB_077d7b24:
    uVar5 = (*(code *)*puVar8)(uVar3,uVar1,puVar8[1]);
    lVar2 = DAT_091f5700;
    if ((uVar5 & 1) == 0) goto LAB_077d7b44;
  }
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = GooglePlayGames_PlayGamesPlatform__GetUserDisplayName(lVar2,0);
  lVar2 = DAT_091f5700;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918ae28);
  }
  if (DAT_095230f2 == '\0') {
    FUN_03f5c2a4(&DAT_0918ae28);
    DAT_095230f2 = '\x01';
  }
  if (*(int *)(DAT_0918ae28 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  **(long **)(DAT_0918ae28 + 0xb8) = lVar2;
  thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918ae28 + 0xb8),lVar2);
  lVar2 = GooglePlayGames_PlayGamesPlatform__get_Instance(0);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar4 = GooglePlayGames_PlayGamesPlatform__GetUserId(lVar2,0);
  lVar2 = DAT_091f5700;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
LAB_077d7b44:
  plVar9 = *(long **)(param_1 + 2);
  *param_1 = -2;
  if (plVar9 == (long *)0x0) {
    *(long *)(param_1 + 6) = lVar2;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar2);
  }
  else {
    lVar4 = *(long *)(DAT_09199de8 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 8);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c(lVar4);
    }
    lVar6 = *plVar9;
    uVar5 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar5 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == lVar4) {
          puVar8 = (undefined8 *)(lVar6 + (long)(*piVar7 + 2) * 0x10 + 0x138);
          goto LAB_077d7bf4;
        }
        uVar5 = uVar5 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar5 != 0);
    }
    puVar8 = (undefined8 *)FUN_03f95da8(plVar9,lVar4,2);
LAB_077d7bf4:
    (*(code *)*puVar8)(plVar9,lVar2,puVar8[1]);
  }
  return;
}

