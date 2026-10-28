// rea decompile_all
// name: UniRx.Scheduler$$get_MainThreadFixedUpdate
// address: 0x409dcd8
// body: available
// range: 0x409dcd8-0x409dd7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long UniRx_Scheduler__get_MainThreadFixedUpdate(void)

{
  long *plVar1;
  long lVar2;
  
  if ((DAT_09515dbc & 1) == 0) {
    FUN_03f5c2a4(&DAT_091942a0);
    FUN_03f5c2a4(&DAT_0918a698);
    DAT_09515dbc = 1;
  }
  if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = *(long *)(*(long *)(DAT_0918a698 + 0xb8) + 0x28);
  if (lVar2 == 0) {
    lVar2 = thunk_FUN_03f9944c(DAT_091942a0);
    UniRx_Scheduler_FixedUpdateMainThreadScheduler___ctor();
    if (*(int *)(DAT_0918a698 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    plVar1 = (long *)(*(long *)(DAT_0918a698 + 0xb8) + 0x28);
    *plVar1 = lVar2;
    thunk_FUN_03f5d7b8(plVar1,lVar2);
  }
  return lVar2;
}

