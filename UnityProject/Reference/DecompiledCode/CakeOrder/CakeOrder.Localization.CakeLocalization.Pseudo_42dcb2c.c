// rea decompile_all
// name: CakeOrder.Localization.CakeLocalization$$Pseudo
// address: 0x42dcb2c
// body: available
// range: 0x42dcb2c-0x42dcd5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42dcd54 to 0x7cccc24 System.Text.RegularExpressions.Regex$$Replace (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42dcd58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Localization_CakeLocalization__Pseudo(long *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09517418 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182278);
    FUN_03f5c2a4(&DAT_09187e18);
    FUN_03f5c2a4(&DAT_091e65b8);
    FUN_03f5c2a4(&DAT_091e65c0);
    FUN_03f5c2a4(&DAT_0918ea70);
    DAT_09517418 = 1;
  }
  if (*(int *)(DAT_09182278 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09182278);
  }
  lVar3 = *(long *)(*(long *)(DAT_09182278 + 0xb8) + 0x10);
  if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
  lVar4 = puVar2[1];
  if (lVar4 == 0) {
    if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
    }
    uVar6 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09187e18);
    System_Text_RegularExpressions_MatchEvaluator___ctor(lVar4,uVar6,DAT_091e65b8,0);
    plVar1 = (long *)(*(long *)(DAT_0918ea70 + 0xb8) + 8);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  if ((lVar3 != 0) &&
     (uVar6 = System_Text_RegularExpressions_Regex__Replace(lVar3,param_2,lVar4,0),
     param_1 != (long *)0x0)) {
    lVar3 = (**(code **)(*param_1 + 0x1f8))(param_1,uVar6,*(undefined8 *)(*param_1 + 0x200));
    if ((lVar3 != 0) && (lVar3 = System_String__Replace(lVar3,0x7b,0x28,0), lVar3 != 0)) {
      uVar6 = System_String__Replace(lVar3,0x7d,0x29,0);
      if (*(int *)(DAT_09182278 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182278);
      }
      lVar3 = *(long *)(*(long *)(DAT_09182278 + 0xb8) + 0x18);
      if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      puVar2 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
      lVar4 = puVar2[2];
      if (lVar4 == 0) {
        if (*(int *)(DAT_0918ea70 + 0xe4) == 0) {
          FUN_03f5c424();
          puVar2 = *(undefined8 **)(DAT_0918ea70 + 0xb8);
        }
        uVar5 = *puVar2;
        lVar4 = thunk_FUN_03f9944c(DAT_09187e18);
        System_Text_RegularExpressions_MatchEvaluator___ctor(lVar4,uVar5,DAT_091e65c0,0);
        plVar1 = (long *)(*(long *)(DAT_0918ea70 + 0xb8) + 0x10);
        *plVar1 = lVar4;
        thunk_FUN_03f5d7b8(plVar1,lVar4);
      }
      if (lVar3 != 0) {
        System_Text_RegularExpressions_Regex__Replace(lVar3,uVar6,lVar4,0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

