// rea decompile_all
// name: _GAME.StageRace.StageRaceManager$$StartNewRace
// address: 0x77f57f0
// body: available
// range: 0x77f57f0-0x77f5dfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77f5b60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77f5df8 to 0x77f793c _GAME.StageRace.StageRaceManager$$LogEventStartRace (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_StageRace_StageRaceManager__StartNewRace(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  
  if ((DAT_09523138 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b04a0);
    FUN_03f5c2a4(&DAT_091adce8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0498);
    FUN_03f5c2a4(&DAT_091acd80);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917ccb8);
    FUN_03f5c2a4(&DAT_0918a4d8);
    FUN_03f5c2a4(&DAT_091ba4c8);
    FUN_03f5c2a4(&DAT_0917e750);
    FUN_03f5c2a4(&DAT_0918b150);
    FUN_03f5c2a4(&DAT_0918b158);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_09523138 = 1;
  }
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar8 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
  if (lVar8 != 0) {
    if (*(int *)(lVar8 + 0x30) != 0) {
      return;
    }
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar8 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_077f5b60;
    }
    uVar5 = _GAME_StageRace_SOStageRaceConfig__GetStageConfig(*(undefined4 *)(lVar8 + 0x20));
    **(undefined8 **)(DAT_0918b158 + 0xb8) = uVar5;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918b158 + 0xb8),uVar5);
    lVar8 = *(long *)(*(long *)(DAT_0918b158 + 0xb8) + 8);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = _GAME_BaseGame_TimerManager__get_UnixTimeSeconds(0);
    lVar6 = DAT_0918b158;
    if (lVar8 != 0) {
      *(undefined8 *)(lVar8 + 0x28) = uVar5;
      lVar8 = *(long *)(*(long *)(lVar6 + 0xb8) + 8);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x30) = 1;
        *(undefined8 *)(lVar8 + 0x3c) = 0;
        uVar5 = DAT_0917ccb8;
        *(undefined8 *)(lVar8 + 0x34) = 0;
        uVar5 = thunk_FUN_03f9944c(uVar5);
        FUN_057e0400(uVar5,DAT_091b0498);
        *(undefined8 *)(lVar8 + 0x48) = uVar5;
        thunk_FUN_03f5d7b8((undefined8 *)(lVar8 + 0x48),uVar5);
        lVar6 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796918(lVar6,DAT_091adc70);
        iVar13 = 0;
        lVar8 = DAT_0918b158;
        while( true ) {
          if (*(int *)(lVar8 + 0xe4) == 0) {
            FUN_03f5c424();
            lVar8 = DAT_0918b158;
          }
          lVar7 = DAT_091adc88;
          if (**(long **)(lVar8 + 0xb8) == 0) goto LAB_077f5b60;
          if (*(int *)(**(long **)(lVar8 + 0xb8) + 0x28) <= iVar13) break;
          if (lVar6 == 0) goto LAB_077f5b60;
          lVar9 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_077f5b60;
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(int *)(lVar9 + (long)(int)uVar1 * 4 + 0x20) = iVar13;
          }
          else {
            FUN_057971a8(lVar6,iVar13,
                         *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
            lVar8 = DAT_0918b158;
          }
          iVar13 = iVar13 + 1;
        }
        lVar8 = thunk_FUN_03f9944c(DAT_0917c520);
        FUN_05796918(lVar8,DAT_091adc70);
        lVar7 = _GAME_StageRace_SOStageRaceConfig__get_ListFakeName();
        if (lVar7 != 0) {
          iVar13 = 0;
          goto LAB_077f5af0;
        }
      }
    }
  }
  goto LAB_077f5b60;
LAB_077f5b88:
  if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar10 = *(long **)(DAT_0918b158 + 0xb8);
  if (*plVar10 == 0) goto LAB_077f5b60;
  if (*(int *)(*plVar10 + 0x18) + -1 <= iVar13) {
    if (*(int *)(DAT_0918b158 + 0xe4) == 0) {
      FUN_03f5c424();
      plVar10 = *(long **)(DAT_0918b158 + 0xb8);
    }
    if (plVar10[1] != 0) {
      _GAME_StageRace_StageRaceDbModel__AddSaveAction();
      if (*(int *)(DAT_0917e750 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      FUN_060df854(DAT_091ba4c8);
      _GAME_StageRace_StageRaceManager__LogEventStartRace();
      return;
    }
    goto LAB_077f5b60;
  }
  if (lVar6 == 0) goto LAB_077f5b60;
  uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0x18),0);
  iVar3 = FUN_05796eb0(lVar6,uVar2,DAT_091add20);
  FUN_05798a08(lVar6,uVar2,DAT_091adce8);
  if (lVar8 == 0) goto LAB_077f5b60;
  uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar8 + 0x18),0);
  uVar4 = FUN_05796eb0(lVar8,uVar2,DAT_091add20);
  FUN_05798a08(lVar8,uVar2,DAT_091adce8);
  lVar7 = thunk_FUN_03f9944c(DAT_0918b150);
  System_Object___ctor(lVar7,0);
  if (lVar7 == 0) goto LAB_077f5b60;
  *(int *)(lVar7 + 0x10) = iVar3;
  if (*(int *)(DAT_0918a4d8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar9 = _GAME_Profile_SOProfileConfig__get_ListAvatar(0);
  if (lVar9 == 0) goto LAB_077f5b60;
  uVar2 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar9 + 0x18),0);
  *(undefined4 *)(lVar7 + 0x14) = uVar2;
  uVar2 = UnityEngine_Random__Range(0,8,0);
  *(undefined4 *)(lVar7 + 0x18) = uVar2;
  *(undefined4 *)(lVar7 + 0x1c) = 0;
  lVar9 = _GAME_StageRace_SOStageRaceConfig__get_ListFakeName();
  if (lVar9 == 0) goto LAB_077f5b60;
  uVar5 = FUN_057e0998(lVar9,uVar4,DAT_091b0610);
  *(undefined8 *)(lVar7 + 0x20) = uVar5;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar7 + 0x20),uVar5);
  lVar9 = DAT_0918b158;
  *(undefined8 *)(lVar7 + 0x28) = 0xffffffff;
  *(undefined4 *)(lVar7 + 0x30) = 0;
  if ((iVar14 < 0) || (iVar3 < iVar14)) {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      FUN_03f5c424();
      lVar9 = DAT_0918b158;
    }
    lVar11 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
    if (lVar11 == 0) goto LAB_077f5b60;
    *(int *)(lVar11 + 0x40) = iVar13;
    iVar14 = iVar3;
  }
  if (*(int *)(lVar9 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar9 = DAT_0918b158;
  }
  lVar11 = DAT_091b04a0;
  lVar9 = *(long *)(*(long *)(lVar9 + 0xb8) + 8);
  if ((lVar9 == 0) || (lVar9 = *(long *)(lVar9 + 0x48), lVar9 == 0)) goto LAB_077f5b60;
  lVar12 = *(long *)(lVar9 + 0x10);
  *(int *)(lVar9 + 0x1c) = *(int *)(lVar9 + 0x1c) + 1;
  if (lVar12 == 0) goto LAB_077f5b60;
  uVar1 = *(uint *)(lVar9 + 0x18);
  if (uVar1 < *(uint *)(lVar12 + 0x18)) {
    *(uint *)(lVar9 + 0x18) = uVar1 + 1;
    plVar10 = (long *)(lVar12 + (long)(int)uVar1 * 8 + 0x20);
    *plVar10 = lVar7;
    thunk_FUN_03f5d7b8(plVar10,lVar7);
  }
  else {
    FUN_057e0c68(lVar9,lVar7,*(undefined8 *)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
  }
  iVar13 = iVar13 + 1;
  goto LAB_077f5b88;
  while( true ) {
    lVar7 = *(long *)(lVar8 + 0x10);
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (lVar7 == 0) break;
    uVar1 = *(uint *)(lVar8 + 0x18);
    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
      *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = iVar13;
    }
    else {
      FUN_057971a8(lVar8,iVar13,*(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
    }
    iVar13 = iVar13 + 1;
    lVar7 = _GAME_StageRace_SOStageRaceConfig__get_ListFakeName();
    if (lVar7 == 0) break;
LAB_077f5af0:
    lVar9 = DAT_091adc88;
    if (*(int *)(lVar7 + 0x18) <= iVar13) {
      iVar13 = 0;
      iVar14 = -1;
      goto LAB_077f5b88;
    }
    if (lVar8 == 0) break;
  }
LAB_077f5b60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

