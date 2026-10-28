// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleKFCCombo$$Display
// address: 0x413eabc
// body: available
// range: 0x413eabc-0x413ebd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413ebcc to 0x413ebd8 AnhPD.FoodOrder.FlexibleKFCCombo$$DisplayCombo (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x413ebd0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ebd4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleKFCCombo__Display(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  if ((DAT_095163b3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_09226ad0);
    DAT_095163b3 = 1;
  }
  if (param_2 == 0) {
    param_2 = **(long **)(DAT_09535468 + 0xb8);
  }
  lVar1 = FUN_03f5c394(DAT_091805f8,1);
  if (lVar1 != 0) {
    if (*(int *)(lVar1 + 0x18) == 0) goto LAB_0413ebd4;
    *(undefined8 *)(lVar1 + 0x20) = DAT_09226ad0;
    thunk_FUN_03f5d7b8();
    if ((param_2 != 0) && (lVar1 = System_String__Split(param_2,lVar1,0,0), lVar1 != 0)) {
      if (*(int *)(lVar1 + 0x18) < 2) {
LAB_0413ebc0:
        AnhPD_FoodOrder_FlexibleKFCCombo__DisplayCombo(param_1);
        return;
      }
      lVar2 = *(long *)(param_1 + 0x108);
      if (lVar2 != 0) {
        if (*(int *)(lVar2 + 0x18) != 0) {
          *(undefined8 *)(lVar2 + 0x20) = *(undefined8 *)(lVar1 + 0x20);
          thunk_FUN_03f5d7b8();
          if ((*(uint *)(lVar1 + 0x18) & 0xfffffffe) != 0) {
            lVar2 = *(long *)(param_1 + 0x108);
            if (lVar2 == 0) goto LAB_0413ebd0;
            if ((*(uint *)(lVar2 + 0x18) & 0xfffffffe) != 0) {
              *(undefined8 *)(lVar2 + 0x28) = *(undefined8 *)(lVar1 + 0x28);
              thunk_FUN_03f5d7b8();
              goto LAB_0413ebc0;
            }
          }
        }
LAB_0413ebd4:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
LAB_0413ebd0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

