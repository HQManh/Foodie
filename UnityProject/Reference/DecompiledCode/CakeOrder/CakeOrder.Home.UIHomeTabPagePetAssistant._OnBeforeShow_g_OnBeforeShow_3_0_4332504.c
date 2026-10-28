// rea decompile_all
// name: CakeOrder.Home.UIHomeTabPagePetAssistant$$<OnBeforeShow>g__OnBeforeShow|3_0
// address: 0x4332504
// body: available
// range: 0x4332504-0x43325b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43325b0 to 0x7da3494 Cysharp.Threading.Tasks.UniTaskExtensions$$Forget (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x43325b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIHomeTabPagePetAssistant__<OnBeforeShow>g__OnBeforeShow_3_0
               (long param_1,long param_2)

{
  long lVar1;
  undefined4 *puVar2;
  long *plVar3;
  undefined1 auVar4 [16];
  
  plVar3 = (long *)(param_1 + 0xa8);
  *plVar3 = param_2;
  thunk_FUN_03f5d7b8(plVar3);
  if ((*plVar3 != 0) && (lVar1 = UnityEngine_Component__get_transform(*plVar3,0), lVar1 != 0)) {
    UnityEngine_Transform__SetParent(lVar1,*(undefined8 *)(param_1 + 0xa0),0);
    if (*(long *)(param_1 + 0xa8) != 0) {
      lVar1 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xa8),0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      if (lVar1 != 0) {
        puVar2 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
        UnityEngine_Transform__set_localPosition(*puVar2,puVar2[1],puVar2[2],lVar1,0);
        auVar4 = CakeOrder_Home_UIHomeTabPagePetAssistant__WaitLoadContentAndShow(param_1);
        Cysharp_Threading_Tasks_UniTaskExtensions__Forget(auVar4._0_8_,auVar4._8_8_,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

