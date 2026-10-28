// rea decompile_all
// name: Cysharp.Threading.Tasks.UniTask$$.cctor
// address: 0x7d96350
// body: available
// range: 0x7d96350-0x7d96447 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7d96444 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Cysharp_Threading_Tasks_UniTask___cctor(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((DAT_09525daa & 1) == 0) {
    FUN_03f5c2a4(&DAT_09177eb0);
    FUN_03f5c2a4(&DAT_091f1ec8);
    FUN_03f5c2a4(&DAT_091958b8);
    FUN_03f5c2a4(&DAT_0918c610);
    DAT_09525daa = 1;
  }
  if (*(int *)(DAT_091958b8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = **(undefined8 **)(DAT_091958b8 + 0xb8);
  lVar1 = thunk_FUN_03f9944c(DAT_09177eb0);
  FUN_053034a8(lVar1,uVar2,DAT_091f1ec8,0);
  if (lVar1 != 0) {
    auVar3 = (**(code **)(lVar1 + 0x18))
                       (*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    **(undefined1 (**) [16])(DAT_0918c610 + 0xb8) = auVar3;
    thunk_FUN_03f5d7b8(*(undefined8 *)(DAT_0918c610 + 0xb8),0);
    lVar1 = *(long *)(DAT_0918c610 + 0xb8);
    *(undefined8 *)(lVar1 + 0x10) = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

