// rea decompile_all
// name: DG.Tweening.ShortcutExtensions$$DOMove
// address: 0x4543e30
// body: available
// range: 0x4543e30-0x4543fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4543fe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long DG_Tweening_ShortcutExtensions__DOMove
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_5,byte param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  
  if ((DAT_09518727 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175e30);
    FUN_03f5c2a4(&DAT_09175e80);
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091dbfe8);
    FUN_03f5c2a4(&DAT_091efc58);
    FUN_03f5c2a4(&DAT_091efc60);
    FUN_03f5c2a4(&DAT_09194610);
    DAT_09518727 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09194610);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x10);
    *puVar4 = param_5;
    thunk_FUN_03f5d7b8(puVar4,param_5);
    uVar2 = thunk_FUN_03f9944c(DAT_09175e30);
    FUN_06dfb558(uVar2,lVar1,DAT_091efc58,0);
    uVar3 = thunk_FUN_03f9944c(DAT_09175e80);
    FUN_06dfc74c(uVar3,lVar1,DAT_091efc60,0);
    if (*(int *)(DAT_09183190 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar1 = DG_Tweening_DOTween__To(param_1,param_2,param_3,param_4,uVar2,uVar3);
    if ((lVar1 != 0) && (*(char *)(lVar1 + 0xe8) != '\0')) {
      *(byte *)(lVar1 + 0x14c) = param_6 & 1;
    }
    FUN_04d9642c(lVar1,*puVar4,DAT_091dbfe8);
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

