// rea decompile_all
// name: UniRx.UnityUIComponentExtensions$$OnValueChangedAsObservable
// address: 0x40ae7b4
// body: available
// range: 0x40ae7b4-0x40ae8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ae8cc to 0x4c3afd0 FUN_04c3afd0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_UnityUIComponentExtensions__OnValueChangedAsObservable(undefined8 param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  if ((DAT_09515ec7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09179a48);
    FUN_03f5c2a4(&DAT_091d5110);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091f2078);
    FUN_03f5c2a4(&DAT_09195b90);
    DAT_09515ec7 = 1;
  }
  if (*(int *)(DAT_09195b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09195b90 + 0xb8);
  lVar3 = puVar2[3];
  if (lVar3 == 0) {
    if (*(int *)(DAT_09195b90 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09195b90 + 0xb8);
    }
    uVar4 = *puVar2;
    lVar3 = thunk_FUN_03f9944c(DAT_09179a48);
    FUN_05331a8c(lVar3,uVar4,DAT_091f2078,0);
    plVar1 = (long *)(*(long *)(DAT_09195b90 + 0xb8) + 0x18);
    *plVar1 = lVar3;
    thunk_FUN_03f5d7b8(plVar1,lVar3);
  }
  if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  FUN_04c3afd0(param_1,lVar3,DAT_091d5110);
  return;
}

