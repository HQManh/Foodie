// rea decompile_all
// name: System.TypeLoadException$$SetMessageField
// address: 0x75f9ea8
// body: available
// range: 0x75f9ea8-0x75f9fd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f9f88 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_TypeLoadException__SetMessageField(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  
  if ((DAT_09521f78 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_092027d0);
    FUN_03f5c2a4(&DAT_092144d8);
    FUN_03f5c2a4(&DAT_091ff668);
    DAT_09521f78 = 1;
  }
  plVar5 = (long *)(param_1 + 0x18);
  if (*plVar5 != 0) {
    return;
  }
  plVar6 = (long *)(param_1 + 0x90);
  lVar4 = *plVar6;
  if ((lVar4 != 0) || (lVar3 = DAT_092027d0, *(int *)(param_1 + 0xa8) != 0)) {
    if (*(long *)(param_1 + 0x98) == 0) {
      *(long *)(param_1 + 0x98) = DAT_092144d8;
      thunk_FUN_03f5d7b8();
      lVar4 = *plVar6;
    }
    if (lVar4 == 0) {
      *plVar6 = DAT_092144d8;
      thunk_FUN_03f5d7b8(plVar6);
    }
    uVar1 = DAT_091ff668;
    if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_Globalization_CultureInfo__get_CurrentCulture(0);
    lVar3 = System_String__Format
                      (uVar2,uVar1,*(undefined8 *)(param_1 + 0x90),*(undefined8 *)(param_1 + 0x98),
                       *(undefined8 *)(param_1 + 0xa0),0);
  }
  *plVar5 = lVar3;
  thunk_FUN_03f5d7b8(plVar5);
  return;
}

