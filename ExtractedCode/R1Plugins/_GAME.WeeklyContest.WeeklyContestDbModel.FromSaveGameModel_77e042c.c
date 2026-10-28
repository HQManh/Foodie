// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestDbModel$$FromSaveGameModel
// address: 0x77e042c
// body: available
// range: 0x77e042c-0x77e05e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e05d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e05dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e05e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestDbModel__FromSaveGameModel(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  if ((DAT_09523054 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919df38);
    FUN_03f5c2a4(&DAT_0919df20);
    FUN_03f5c2a4(&DAT_091765c8);
    FUN_03f5c2a4(&DAT_091a5b70);
    FUN_03f5c2a4(&DAT_091a5b78);
    FUN_03f5c2a4(&DAT_091a5b80);
    FUN_03f5c2a4(&DAT_091b41a8);
    FUN_03f5c2a4(&DAT_0918ce50);
    DAT_09523054 = 1;
  }
  local_68 = 0;
  uStack_60 = 0;
  local_58 = 0;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  uVar5 = DAT_091765c8;
  *(bool *)(param_1 + 0x10) = iVar1 == 1;
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  lVar3 = thunk_FUN_03f9944c(uVar5);
  FUN_06eef750(lVar3,DAT_0919df20);
  plVar7 = (long *)(param_1 + 0x20);
  *plVar7 = lVar3;
  thunk_FUN_03f5d7b8(plVar7,lVar3);
  if (*(long *)(param_2 + 0x20) != 0) {
    FUN_057e185c(&local_68,*(long *)(param_2 + 0x20),DAT_091b41a8);
    while (uVar4 = FUN_071bd28c(&local_68,DAT_091a5b78), lVar3 = local_58, (uVar4 & 1) != 0) {
      if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar7;
      uVar2 = *(undefined4 *)(local_58 + 0x10);
      uVar5 = thunk_FUN_03f9944c(DAT_0918ce50);
      _GAME_WeeklyContest_WCDataItem___ctor(uVar5,lVar3);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_06ef2060(lVar8,uVar2,uVar5,DAT_0919df38);
    }
    FUN_071bd288(&local_68,DAT_091a5b70);
  }
  return;
}

