// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureDbModel.SaveGameModel$$.ctor
// address: 0x77ed944
// body: available
// range: 0x77ed944-0x77edb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77edb34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x77edb38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureDbModel_SaveGameModel___ctor(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  ulong local_48;
  
  if ((DAT_095230c0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a22f0);
    FUN_03f5c2a4(&DAT_091a22f8);
    FUN_03f5c2a4(&DAT_091a2300);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091ab3f8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_095230c0 = 1;
  }
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar4,DAT_091adc70);
  plVar10 = (long *)(param_1 + 0x28);
  *plVar10 = lVar4;
  thunk_FUN_03f5d7b8(plVar10,lVar4);
  System_Object___ctor(param_1,0);
  uVar5 = DAT_0917c520;
  if (param_2 != 0) {
    bVar2 = *(byte *)(param_2 + 0x11);
    uVar1 = *(undefined4 *)(param_2 + 0x14);
    *(uint *)(param_1 + 0x10) = (uint)*(byte *)(param_2 + 0x10);
    uVar8 = *(undefined8 *)(param_2 + 0x18);
    *(uint *)(param_1 + 0x14) = (uint)bVar2;
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined8 *)(param_1 + 0x20) = uVar8;
    uVar5 = thunk_FUN_03f9944c(uVar5);
    FUN_05796918(uVar5,DAT_091adc70);
    *(undefined8 *)(param_1 + 0x28) = uVar5;
    thunk_FUN_03f5d7b8(plVar10,uVar5);
    if (*(long *)(param_2 + 0x20) != 0) {
      FUN_0571cce0(&local_58,*(long *)(param_2 + 0x20),DAT_091ab3f8);
      while( true ) {
        uVar6 = FUN_07192130(&local_58,DAT_091a22f8);
        lVar4 = DAT_091adc88;
        if ((uVar6 & 1) == 0) {
          FUN_0719212c(&local_58,DAT_091a22f0);
          *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x28);
          *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x30);
          return;
        }
        lVar7 = *plVar10;
        if (lVar7 == 0) break;
        lVar9 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar9 == 0) break;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar9 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          *(uint *)(lVar9 + (long)(int)uVar3 * 4 + 0x20) = (uint)(byte)local_48;
        }
        else {
          FUN_057971a8(lVar7,local_48 & 0xff,
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

