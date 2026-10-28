// rea decompile_all
// name: UniRx.Examples.Sample11_Logger$$Run
// address: 0x4194a0c
// body: available
// range: 0x4194a0c-0x4194b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4194b2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void UniRx_Examples_Sample11_Logger__Run(void)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((DAT_095167c9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091842a0);
    FUN_03f5c2a4(&DAT_0918a548);
    FUN_03f5c2a4(&DAT_09200290);
    FUN_03f5c2a4(&DAT_09223cf0);
    FUN_03f5c2a4(&DAT_09207c40);
    DAT_095167c9 = 1;
  }
  if (*(int *)(DAT_0918a548 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  plVar1 = (long *)**(long **)(DAT_0918a548 + 0xb8);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x178))(plVar1,DAT_09200290,0,*(undefined8 *)(*plVar1 + 0x180));
    plVar1 = (long *)**(long **)(DAT_0918a548 + 0xb8);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x198))(plVar1,DAT_09207c40,0,*(undefined8 *)(*plVar1 + 0x1a0));
      plVar1 = (long *)**(undefined8 **)(DAT_0918a548 + 0xb8);
      uVar2 = thunk_FUN_03f9944c(DAT_091842a0);
      System_Exception___ctor(uVar2,DAT_09223cf0,0);
      if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x04194b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar1 + 0x1f8))(plVar1,uVar2,0,*(undefined8 *)(*plVar1 + 0x200));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

