// rea decompile_all
// name: CakeOrder.Home.TutorialReferenceGroupUI$$SetFocus
// address: 0x433bf30
// body: available
// range: 0x433bf30-0x433c04b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x433c048 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_TutorialReferenceGroupUI__SetFocus
               (long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  long local_40;
  long local_38;
  
  if ((DAT_09517722 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5958);
    DAT_09517722 = 1;
  }
  local_40 = 0;
  local_38 = 0;
  CakeOrder_Home_TutorialReferenceGroupUI__SetFocus(param_1,param_2);
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (UnityEngine_Transform__get_position(*(long *)(param_1 + 0x18),0), param_3 != 0)) {
    UnityEngine_Transform__set_position(param_3,0);
    if (*(long *)(param_1 + 0x18) != 0) {
      UnityEngine_Transform__get_rotation(*(long *)(param_1 + 0x18),0);
      UnityEngine_Transform__set_rotation(param_3,0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (UnityEngine_Transform__get_position(*(long *)(param_1 + 0x20),0), param_4 != 0)) {
        UnityEngine_Transform__set_position(param_4,0);
        uVar2 = FUN_04a6b048(param_4,&local_38,DAT_091c5958);
        if ((uVar2 & 1) == 0) {
          return;
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          uVar2 = FUN_04a6b048(*(long *)(param_1 + 0x20),&local_40,DAT_091c5958);
          lVar1 = local_38;
          if ((uVar2 & 1) == 0) {
            return;
          }
          if ((local_40 != 0) && (UnityEngine_RectTransform__get_sizeDelta(local_40,0), lVar1 != 0))
          {
            UnityEngine_RectTransform__set_sizeDelta(lVar1,0);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

