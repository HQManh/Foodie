// rea decompile_all
// name: _GAME.GameUI.PopupController$$Show
// address: 0x774af6c
// body: available
// range: 0x774af6c-0x774b10b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774b108 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void _GAME_GameUI_PopupController__Show(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 local_28;
  
  if ((DAT_09522b75 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_0919ecc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d6068);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_09214020);
    FUN_03f5c2a4(&DAT_091f6b48);
    DAT_09522b75 = 1;
  }
  local_28 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Equality(param_1,0,0);
  if ((uVar1 & 1) == 0) {
    if (param_1 == 0) {
LAB_0774b108:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = CakeOrder_BaseUI_UIElementAbstract__get_IsShowing(param_1,0);
    if ((uVar1 & 1) == 0) {
      if (*(int *)(DAT_09189468 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar2 = *(long *)(*(long *)(DAT_09189468 + 0xb8) + 0x10);
      if (lVar2 == 0) goto LAB_0774b108;
      uVar1 = FUN_06fd9fbc(lVar2,param_1,&local_28,DAT_0919ecc0);
      uVar3 = local_28;
      if ((uVar1 & 1) == 0) {
        uVar3 = UnityEngine_Object__GetName(param_1,0);
        uVar3 = System_String__Concat(DAT_09214020,uVar3,DAT_091f6b48,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogWarning(uVar3,0);
      }
      else {
        if (*(int *)(DAT_09189468 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        FUN_04ca5ed4(uVar3,DAT_091d6068);
      }
    }
  }
  return;
}

