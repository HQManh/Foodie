// rea decompile_all
// name: CakeOrder.Home.UIListToolRecipeCard$$OnBeforeShow
// address: 0x432d6d0
// body: available
// range: 0x432d6d0-0x432d847 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x432d840 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x432d844 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Home_UIListToolRecipeCard__OnBeforeShow(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_28;
  
  if ((DAT_095176b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b20);
    FUN_03f5c2a4(&DAT_091a4b28);
    FUN_03f5c2a4(&DAT_091a4b30);
    FUN_03f5c2a4(&DAT_091b14b8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095176b7 = 1;
  }
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 0;
  CakeOrder_BaseUI_UIElementAbstract__OnBeforeShow(param_1,0);
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Equality(uVar4,0,0);
  if ((uVar2 & 1) == 0) {
    if (*(long *)(param_1 + 0x60) == 0) goto LAB_0432d844;
    uVar1 = CakeOrder_SaveProfile_PlayerMapLevelProgressDataAccess__IsMapUnlocked
                      (*(long *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x48),0);
  }
  else {
    uVar1 = 1;
  }
  if ((*(long *)(param_1 + 0x50) != 0) &&
     (lVar3 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x50),0), lVar3 != 0)) {
    UnityEngine_GameObject__SetActive(lVar3,uVar1 & 1,0);
    if (((uVar1 & 1) != 0) && (*(char *)(param_1 + 0x70) != '\0')) {
      CakeOrder_Home_UIListToolRecipeCard__RefreshItems(param_1);
      if (*(long *)(param_1 + 0x68) == 0) goto LAB_0432d844;
      FUN_057e185c(&local_38,*(long *)(param_1 + 0x68),DAT_091b14b8);
      while (uVar2 = FUN_071bd28c(&local_38,DAT_091a4b28), (uVar2 & 1) != 0) {
        if (local_28 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        CakeOrder_BaseUI_UIElementAbstract__ShowImmediate(local_28,0,0);
      }
      FUN_071bd288(&local_38,DAT_091a4b20);
    }
    return;
  }
LAB_0432d844:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

