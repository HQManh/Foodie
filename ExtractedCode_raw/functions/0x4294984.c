// rea decompile_all
// name: CakeOrder.InGame.UICakePauseMenuInGame$$OnChangeAutoplaySaveMe
// address: 0x4294984
// body: available
// range: 0x4294984-0x4294a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4294a98 to 0x43875f0 CakeOrder.InGame.CookingBotAutoRetry$$set_SaveMeBudget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_UICakePauseMenuInGame__OnChangeAutoplaySaveMe(float param_1)

{
  int iVar1;
  double dVar2;
  double dVar3;
  double local_28;
  
  if ((DAT_095171bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_095171bd = 1;
  }
  if (DAT_09515cf4 == '\0') {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_09515cf4 = '\x01';
  }
  if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  dVar3 = (double)param_1;
  dVar2 = modf(dVar3,&local_28);
  if (0.0 <= param_1) {
    if (dVar2 != 0.5) {
      dVar2 = (double)(long)(dVar3 + 0.5);
      goto LAB_04294a60;
    }
    dVar3 = 1.0;
  }
  else {
    if (dVar2 != -0.5) {
      dVar2 = (double)(long)(dVar3 + -0.5);
      goto LAB_04294a60;
    }
    dVar3 = -1.0;
  }
  dVar2 = local_28;
  if (((long)local_28 & 1U) != 0) {
    dVar2 = local_28 + dVar3;
  }
LAB_04294a60:
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar1 = -0x80000000;
  if (dVar2 != INFINITY) {
    iVar1 = (int)dVar2;
  }
  CakeOrder_InGame_CookingBotAutoRetry__set_SaveMeBudget(iVar1,0);
  return;
}

