// rea decompile_all
// name: _GAME.WeeklyContest.WeeklyContestDbModel.SaveGameModel$$.ctor
// address: 0x77e0694
// body: available
// range: 0x77e0694-0x77e089f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77e0898 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77e089c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_WeeklyContest_WeeklyContestDbModel_SaveGameModel___ctor(long param_1,long param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  
  if ((DAT_09523055 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919df30);
    FUN_03f5c2a4(&DAT_091a61c8);
    FUN_03f5c2a4(&DAT_091a61d0);
    FUN_03f5c2a4(&DAT_091a61d8);
    FUN_03f5c2a4(&DAT_091a9578);
    FUN_03f5c2a4(&DAT_091b41a0);
    FUN_03f5c2a4(&DAT_091b4198);
    FUN_03f5c2a4(&DAT_0917d8c0);
    FUN_03f5c2a4(&DAT_09195f18);
    DAT_09523055 = 1;
  }
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_68 = 0;
  uStack_70 = 0;
  System_Object___ctor(param_1,0);
  uVar3 = DAT_0917d8c0;
  if (param_2 == 0) {
    return;
  }
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_2 + 0x10);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined8 *)(param_1 + 0x18) = uVar8;
    lVar4 = thunk_FUN_03f9944c(uVar3);
    FUN_057e0400(lVar4,DAT_091b4198);
    plVar9 = (long *)(param_1 + 0x20);
    *plVar9 = lVar4;
    thunk_FUN_03f5d7b8(plVar9,lVar4);
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_06ef0948(&local_80,*(long *)(param_2 + 0x20),DAT_0919df30);
      while( true ) {
        uVar5 = FUN_072556b0(&local_80,DAT_091a61d0);
        uVar3 = local_68;
        if ((uVar5 & 1) == 0) {
          FUN_072557d4(&local_80,DAT_091a61c8);
          return;
        }
        lVar10 = *plVar9;
        uVar8 = thunk_FUN_03f9944c(DAT_09195f18);
        _GAME_WeeklyContest_WCDataItem_SaveGameModel___ctor(uVar8,uVar3);
        lVar4 = DAT_091b41a0;
        if (lVar10 == 0) break;
        lVar7 = *(long *)(lVar10 + 0x10);
        *(int *)(lVar10 + 0x1c) = *(int *)(lVar10 + 0x1c) + 1;
        if (lVar7 == 0) break;
        uVar2 = *(uint *)(lVar10 + 0x18);
        if (uVar2 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar10 + 0x18) = uVar2 + 1;
          puVar6 = (undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20);
          *puVar6 = uVar8;
          thunk_FUN_03f5d7b8(puVar6,uVar8);
        }
        else {
          FUN_057e0c68(lVar10,uVar8,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

