// rea decompile_all
// name: CakeOrder.InGame.Pasta.PastaBlenderView$$get_SfxPlayer
// address: 0x407c394
// body: available
// range: 0x407c394-0x407c4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x407c4a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_InGame_Pasta_PastaBlenderView__get_SfxPlayer(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  if ((DAT_09515c46 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5418);
    FUN_03f5c2a4(&DAT_091cd728);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09515c46 = 1;
  }
  plVar3 = (long *)(param_1 + 0xb8);
  lVar4 = *plVar3;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar1 & 1) == 0) {
    uVar2 = FUN_04a6a14c(param_1,DAT_091c5418);
    *(undefined8 *)(param_1 + 0xb8) = uVar2;
    thunk_FUN_03f5d7b8(plVar3,uVar2);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar2,0);
    if ((uVar1 & 1) == 0) {
      lVar4 = UnityEngine_Component__get_gameObject(param_1,0);
      if (lVar4 == 0) goto LAB_0407c4a8;
      lVar4 = FUN_04b7c294(lVar4,DAT_091cd728);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    if (*plVar3 == 0) {
LAB_0407c4a8:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    CakeOrder_InGame_Pasta_PastaSpineSfxPlayer__SetPaused(*plVar3,*(undefined1 *)(param_1 + 0x9e));
  }
  return *plVar3;
}

