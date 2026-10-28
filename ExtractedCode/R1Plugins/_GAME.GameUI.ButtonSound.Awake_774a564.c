// rea decompile_all
// name: _GAME.GameUI.ButtonSound$$Awake
// address: 0x774a564
// body: available
// range: 0x774a564-0x774a683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774a680 to 0x77414e4 _GAME.Utils.HelperButton$$AddOnClickListener (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_ButtonSound__Awake(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  if ((DAT_09522b63 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c52f0);
    FUN_03f5c2a4(&DAT_091e6570);
    FUN_03f5c2a4(&DAT_0918ea20);
    FUN_03f5c2a4(&DAT_0918c678);
    DAT_09522b63 = 1;
  }
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 == 0) {
    uVar1 = FUN_04a6a14c(param_1,DAT_091c52f0);
    *(undefined8 *)(param_1 + 0x20) = uVar1;
    thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),uVar1);
    lVar4 = *(long *)(param_1 + 0x20);
  }
  if (*(int *)(DAT_0918ea20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar3 = *(undefined8 **)(DAT_0918ea20 + 0xb8);
  lVar5 = puVar3[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_0918ea20 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar3 = *(undefined8 **)(DAT_0918ea20 + 0xb8);
    }
    uVar1 = *puVar3;
    lVar5 = thunk_FUN_03f9944c(DAT_0918c678);
    UnityEngine_Events_UnityAction___ctor(lVar5,uVar1,DAT_091e6570,0);
    plVar2 = (long *)(*(long *)(DAT_0918ea20 + 0xb8) + 8);
    *plVar2 = lVar5;
    thunk_FUN_03f5d7b8(plVar2,lVar5);
  }
  _GAME_Utils_HelperButton__AddOnClickListener(lVar4,lVar5);
  return;
}

