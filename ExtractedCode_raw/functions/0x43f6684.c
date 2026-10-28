// rea decompile_all
// name: Coffee.UIEffects.GraphicProxy.<>c$$<.cctor>b__12_1
// address: 0x43f6684
// body: available
// range: 0x43f6684-0x43f671b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43f6718 to 0x89db8c0 <EXTERNAL>::memcpy (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Coffee_UIEffects_GraphicProxy_<>c__<_cctor>b__12_1
               (void *param_1,float param_2,float param_3,float param_4,float param_5,
               undefined8 param_6,void *param_7)

{
  if ((DAT_09517e12 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09189c30);
    DAT_09517e12 = 1;
  }
  if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(float *)((long)param_7 + 0x3c) = param_2;
  *(float *)((long)param_7 + 0x40) = param_3;
  *(float *)((long)param_7 + 0x44) = param_4 + param_2;
  *(float *)((long)param_7 + 0x48) = param_5 + param_3;
  memcpy(param_1,param_7,0x6c);
  return;
}

