// rea decompile_all
// name: System.TimeZoneInfo$$TZif_ParsePosixTime
// address: 0x75127ac
// body: available
// range: 0x75127ac-0x75128bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75128bc to 0x7512600 System.TimeZoneInfo$$TZif_ParsePosixString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TimeZoneInfo__TZif_ParsePosixTime(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_095216ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09178538);
    FUN_03f5c2a4(&DAT_0918bdc0);
    FUN_03f5c2a4(&DAT_091f0dc0);
    FUN_03f5c2a4(&DAT_09195090);
    DAT_095216ef = 1;
  }
  if (*(int *)(DAT_09195090 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09195090 + 0xb8);
  lVar3 = puVar2[5];
  if (lVar3 == 0) {
    if (*(int *)(DAT_09195090 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09195090 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_03f9944c(DAT_09178538);
    FUN_05312868(lVar3,uVar4,DAT_091f0dc0,0);
    plVar1 = (long *)(*(long *)(DAT_09195090 + 0xb8) + 0x28);
    *plVar1 = lVar3;
    thunk_FUN_03f5d7b8(plVar1,lVar3);
  }
  if (*(int *)(DAT_0918bdc0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_TimeZoneInfo__TZif_ParsePosixString(param_1,param_2,lVar3);
  return;
}

