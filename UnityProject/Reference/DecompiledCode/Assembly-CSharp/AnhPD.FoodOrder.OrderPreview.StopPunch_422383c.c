// rea decompile_all
// name: AnhPD.FoodOrder.OrderPreview$$StopPunch
// address: 0x422383c
// body: available
// range: 0x422383c-0x4223917 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42238e8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4223910 to 0x866d690 UnityEngine.Transform$$set_localScale (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4223914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_OrderPreview__StopPunch(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  
  if ((DAT_09516d37 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516d37 = 1;
  }
  plVar3 = (long *)(param_1 + 0x58);
  if ((*plVar3 == 0) || (uVar1 = DG_Tweening_TweenExtensions__IsActive(*plVar3,0), (uVar1 & 1) == 0)
     ) {
    *plVar3 = 0;
    thunk_FUN_03f5d7b8(plVar3,0);
    return;
  }
  DG_Tweening_TweenExtensions__Kill(*(undefined8 *)(param_1 + 0x58),0,0);
  *(undefined8 *)(param_1 + 0x58) = 0;
  thunk_FUN_03f5d7b8(plVar3,0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar4,0);
  if ((uVar1 & 1) == 0) {
    lVar2 = UnityEngine_Component__get_transform(param_1,0);
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
  }
  if (lVar2 != 0) {
    UnityEngine_Transform__set_localScale
              (*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100),
               *(undefined4 *)(param_1 + 0x68),lVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

