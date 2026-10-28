// rea decompile_all
// name: CakeOrder.InGame.CookingBotAutoRetry$$ReportEffectiveSettings
// address: 0x43886e8
// body: available
// range: 0x43886e8-0x438884b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_CookingBotAutoRetry__ReportEffectiveSettings
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               int param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if ((DAT_095179cd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_095179cd = 1;
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_InGame_CookingBotAutoRetry__ReportEffectivePickInterval(param_1);
  if (DAT_09517a8e == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a8e = '\x01';
  }
  if (*(int *)(DAT_09182cc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  cVar1 = DAT_09517a8f;
  lVar3 = DAT_09182cc0;
  *(undefined4 *)(*(long *)(DAT_09182cc0 + 0xb8) + 0x40) = param_2;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a8f = '\x01';
    lVar3 = DAT_09182cc0;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = DAT_09182cc0;
  }
  cVar1 = DAT_09517a90;
  *(undefined4 *)(*(long *)(lVar3 + 0xb8) + 0x60) = param_3;
  if (cVar1 == '\0') {
    FUN_03f5c2a4(&DAT_09182cc0);
    DAT_09517a90 = '\x01';
    lVar3 = DAT_09182cc0;
  }
  if (*(int *)(lVar3 + 0xe4) == 0) {
    FUN_03f5c424();
    lVar3 = DAT_09182cc0;
  }
  lVar3 = *(long *)(lVar3 + 0xb8);
  if (param_5 < 2) {
    param_5 = 1;
  }
  lVar2 = *(long *)(lVar3 + 0x48);
  *(undefined4 *)(lVar3 + 100) = param_4;
  *(int *)(lVar3 + 0x54) = param_5;
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x04388830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x18))(*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x28));
    return;
  }
  return;
}

