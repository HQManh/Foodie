// rea decompile_all
// name: _GAME.Team.PopupFreeLivesCtrl$$UpdateTotalLives
// address: 0x776b180
// body: available
// range: 0x776b180-0x776b2ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x776b2ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_Team_PopupFreeLivesCtrl__UpdateTotalLives(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_44;
  
  if ((DAT_09522c86 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9860);
    FUN_03f5c2a4(&DAT_09178cb8);
    FUN_03f5c2a4(&DAT_091ee840);
    FUN_03f5c2a4(&DAT_09193600);
    FUN_03f5c2a4(&DAT_09226038);
    DAT_09522c86 = 1;
  }
  lVar4 = *(long *)(param_1 + 0xe8);
  uVar5 = *(undefined8 *)(param_1 + 0xf8);
  if (*(int *)(DAT_09193600 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = DAT_09226038;
  puVar3 = *(undefined8 **)(DAT_09193600 + 0xb8);
  lVar6 = puVar3[1];
  if (lVar6 == 0) {
    if (*(int *)(DAT_09193600 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_09193600 + 0xb8);
    }
    uVar7 = *puVar3;
    lVar6 = thunk_FUN_03f9944c(DAT_09178cb8);
    FUN_05322d94(lVar6,uVar7,DAT_091ee840,0);
    plVar2 = (long *)(*(long *)(DAT_09193600 + 0xb8) + 8);
    *plVar2 = lVar6;
    thunk_FUN_03f5d7b8(plVar2,lVar6);
  }
  local_44 = FUN_04adc4d0(uVar5,lVar6,DAT_091c9860);
  uVar5 = FUN_03f5c42c(DAT_09535420,&local_44);
  uVar5 = System_String__Format(uVar1,uVar5,0);
  if (lVar4 != 0) {
    TMPro_TMP_Text__SetText(lVar4,uVar5,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

