// rea decompile_all
// name: _GAME.TeamTreasure.TeamTreasureDbModel$$FromSaveGameModel
// address: 0x77ed594
// body: available
// range: 0x77ed594-0x77ed77f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x77ed77c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_TeamTreasure_TeamTreasureDbModel__FromSaveGameModel(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_095230bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091ab3e8);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091ab3e0);
    FUN_03f5c2a4(&DAT_0917bd08);
    DAT_095230bd = 1;
  }
  uVar4 = DAT_0917bd08;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x10);
    iVar2 = *(int *)(param_2 + 0x14);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
    uVar9 = *(undefined8 *)(param_2 + 0x20);
    *(bool *)(param_1 + 0x10) = iVar1 == 1;
    *(bool *)(param_1 + 0x11) = iVar2 == 1;
    *(undefined8 *)(param_1 + 0x18) = uVar9;
    lVar5 = thunk_FUN_03f9944c(uVar4);
    FUN_0571b84c(lVar5,DAT_091ab3e0);
    plVar10 = (long *)(param_1 + 0x20);
    *plVar10 = lVar5;
    thunk_FUN_03f5d7b8(plVar10,lVar5);
    if (*(long *)(param_2 + 0x28) != 0) {
      FUN_05797d74(&local_58,*(long *)(param_2 + 0x28),DAT_091adcc0);
      while (uVar6 = FUN_071ad7a4(&local_58,DAT_091a34d8), lVar5 = DAT_091ab3e8, (uVar6 & 1) != 0) {
        lVar7 = *plVar10;
        if (lVar7 == 0) {
LAB_077ed77c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar8 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_077ed77c;
        uVar3 = *(uint *)(lVar7 + 0x18);
        if (uVar3 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar3 + 1;
          *(bool *)(lVar8 + (int)uVar3 + 0x20) = (int)local_48 == 1;
        }
        else {
          FUN_0571c0e8(lVar7,(int)local_48 == 1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
      }
      FUN_071ad7a0(&local_58,DAT_091a34d0);
    }
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x38);
  }
  _GAME_TeamTreasure_TeamTreasureDbModel__NormalizeData(param_1);
  return;
}

