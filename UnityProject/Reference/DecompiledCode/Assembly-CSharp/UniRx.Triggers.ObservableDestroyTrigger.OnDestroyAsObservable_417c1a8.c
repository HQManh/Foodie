// rea decompile_all
// name: UniRx.Triggers.ObservableDestroyTrigger$$OnDestroyAsObservable
// address: 0x417c1a8
// body: available
// range: 0x417c1a8-0x417c32b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UniRx_Triggers_ObservableDestroyTrigger__OnDestroyAsObservable(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  
  if ((DAT_09516649 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09188b78);
    FUN_03f5c2a4(&DAT_091bbf10);
    FUN_03f5c2a4(&DAT_0917ec90);
    FUN_03f5c2a4(&DAT_0918c670);
    DAT_09516649 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if (((uVar1 & 1) == 0) && (*(char *)(param_1 + 0x20) == '\0')) {
    plVar2 = (long *)(param_1 + 0x28);
    lVar3 = *plVar2;
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917ec90);
      FUN_061eb910(lVar3,DAT_091bbf10);
      *plVar2 = lVar3;
      thunk_FUN_03f5d7b8(plVar2,lVar3);
    }
  }
  else {
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09515ed7 == '\0') {
      FUN_03f5c2a4(&DAT_0918c670);
      DAT_09515ed7 = '\x01';
    }
    if (*(int *)(DAT_0918c670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(int *)(DAT_09188b78 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (DAT_09516803 == '\0') {
      FUN_03f5c2a4(&DAT_09186b18);
      DAT_09516803 = '\x01';
    }
    if (*(int *)(DAT_09186b18 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = **(long **)(DAT_09186b18 + 0xb8);
  }
  return lVar3;
}

