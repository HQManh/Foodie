// rea decompile_all
// name: CakeOrder.SaveProfile.CookOrderSaveSync$$get_IsReady
// address: 0x427969c
// body: available
// range: 0x427969c-0x4279807 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42797ec to 0x6076f48 FUN_06076f48 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4279804 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CakeOrder_SaveProfile_CookOrderSaveSync__get_IsReady(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((DAT_09517088 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182c50);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091b9d28);
    FUN_03f5c2a4(&DAT_091b9e08);
    FUN_03f5c2a4(&DAT_091b9d90);
    DAT_09517088 = 1;
  }
  if (*(int *)(DAT_09182c50 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar1 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProfileManager();
  lVar2 = CakeOrder_SaveProfile_CookOrderSaveSync__get_ProgressManager();
  lVar3 = CakeOrder_SaveProfile_CookOrderSaveSync__get_LiveOpsManagerData();
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar4 = UnityEngine_Object__op_Implicit(lVar1,0);
  if ((uVar4 & 1) != 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(lVar2,0);
    if ((uVar4 & 1) != 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
      if ((uVar4 & 1) != 0) {
        if (lVar1 != 0) {
          uVar4 = FUN_06076f48(lVar1,DAT_091b9e08);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if (lVar2 != 0) {
            uVar4 = FUN_06076f48(lVar2,DAT_091b9d90);
            if ((uVar4 & 1) == 0) {
              return 0;
            }
            if (lVar3 != 0) {
              uVar5 = FUN_06076f48(lVar3,DAT_091b9d28);
              return uVar5;
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
  }
  return 0;
}

