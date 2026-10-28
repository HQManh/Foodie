// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureDbModel$$NormalizeData
// address: 0x77ed2b8
// body: available
// range: 0x77ed2b8-0x77ed593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ed590 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool _GAME_TeamTreasure_TeamTreasureDbModel__NormalizeData(long param_1)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  uint *puVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  int iVar10;
  undefined8 uVar11;
  
  if ((DAT_095230bc & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185080);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091b0c98);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_091ab400);
    FUN_03f5c2a4(&DAT_091b0cf8);
    FUN_03f5c2a4(&DAT_0917bd08);
    FUN_03f5c2a4(&DAT_0917ce10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091ba640);
    FUN_03f5c2a4(&DAT_0918be20);
    DAT_095230bc = 1;
  }
  plVar9 = (long *)(param_1 + 0x20);
  bVar2 = *plVar9 == 0;
  if (*plVar9 == 0) {
    lVar4 = thunk_FUN_03f9944c(DAT_0917bd08);
    FUN_0571b84c(lVar4,DAT_091ab3e0);
    *plVar9 = lVar4;
    thunk_FUN_03f5d7b8(plVar9,lVar4);
  }
  lVar4 = *(long *)(DAT_091ba640 + 0x20);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_03f95a6c();
  }
  uVar11 = **(undefined8 **)(lVar4 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar11,0,0);
  if (((uVar5 & 1) == 0) ||
     (lVar4 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep(), lVar4 == 0)) {
    iVar10 = 0;
  }
  else {
    lVar4 = _GAME_TeamTreasure_SOTeamTreasureConfig__get_ListRwStep();
    if (lVar4 == 0) goto LAB_077ed590;
    iVar10 = *(int *)(lVar4 + 0x18);
  }
  lVar4 = *plVar9;
  if (lVar4 != 0) {
    puVar6 = (uint *)(lVar4 + 0x18);
    uVar7 = *puVar6;
    if ((int)uVar7 < iVar10) {
      do {
        lVar1 = DAT_091ab3e8;
        lVar8 = *(long *)(lVar4 + 0x10);
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_077ed590;
        if (uVar7 < *(uint *)(lVar8 + 0x18)) {
          *puVar6 = uVar7 + 1;
          *(undefined1 *)(lVar8 + (int)uVar7 + 0x20) = 0;
        }
        else {
          FUN_0571c0e8(lVar4,0,*(undefined8 *)(*(long *)(*(long *)(lVar1 + 0x20) + 0xc0) + 0x70));
          lVar4 = *plVar9;
        }
        if (lVar4 == 0) goto LAB_077ed590;
        puVar6 = (uint *)(lVar4 + 0x18);
        uVar7 = *puVar6;
      } while ((int)uVar7 < iVar10);
      bVar2 = true;
    }
    iVar10 = *(int *)(param_1 + 0x14);
    if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar3 = _GAME_BaseGame_TimerManager__get_WeekUtcNow();
    if ((iVar10 == iVar3) && (*(long *)(param_1 + 0x18) < 1)) {
      if (*(int *)(DAT_0918be20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar11 = _GAME_BaseGame_TimerManager__GetEndOfCurrentWeekUtc(0);
      if (*(int *)(DAT_09185080 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09185080);
      }
      uVar11 = _GAME_Utils_HelperTime__ToUnixTimeSeconds(uVar11,0);
      bVar2 = true;
      *(undefined8 *)(param_1 + 0x18) = uVar11;
    }
    uVar11 = DAT_0917ce10;
    *(undefined4 *)(param_1 + 0x34) = 0;
    uVar11 = thunk_FUN_03f9944c(uVar11);
    FUN_057e0400(uVar11,DAT_091b0c98);
    *(undefined8 *)(param_1 + 0x38) = uVar11;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x38),uVar11);
    return bVar2;
  }
LAB_077ed590:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

