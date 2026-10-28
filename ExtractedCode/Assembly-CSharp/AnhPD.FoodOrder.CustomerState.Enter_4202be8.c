// rea decompile_all
// name: AnhPD.FoodOrder.CustomerState$$Enter
// address: 0x4202be8
// body: available
// range: 0x4202be8-0x4202d33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4202cb0 to 0x4202e30 AnhPD.FoodOrder.CustomerState$$OnComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4202ce4 to 0x4202d34 AnhPD.FoodOrder.CustomerState$$Hook (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4202d30 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CustomerState__Enter
               (long param_1,long param_2,undefined8 param_3,uint param_4,undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(param_1 + 0x40) = param_3;
  thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x40),param_3);
  uVar1 = System_String__IsNullOrEmpty(param_5,0);
  uVar3 = param_5;
  if ((uVar1 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  if (param_2 == 0) {
LAB_04202d30:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar2 = *(long *)(param_2 + 0x110);
  if ((((param_4 & 1) == 0) ||
      (uVar1 = System_String__IsNullOrEmpty(*(undefined8 *)(param_1 + 0x20),0), (uVar1 & 1) != 0))
     || (uVar1 = System_String__IsNullOrEmpty(param_5,0), (uVar1 & 1) == 0)) {
    uVar1 = System_String__IsNullOrEmpty(uVar3,0);
    if ((uVar1 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
    }
    uVar1 = System_String__IsNullOrEmpty(uVar3,0);
    if ((uVar1 & 1) != 0) {
      AnhPD_FoodOrder_CustomerState__OnComplete(param_1);
      return;
    }
    if (lVar2 == 0) goto LAB_04202d30;
    param_4 = param_4 & 1;
  }
  else {
    uVar1 = System_String__IsNullOrEmpty(uVar3,0);
    if ((uVar1 & 1) == 0) {
      if (lVar2 == 0) goto LAB_04202d30;
      uVar3 = Spine_AnimationState__SetAnimation(lVar2,0,uVar3,0,0);
      AnhPD_FoodOrder_CustomerState__Hook(param_1,uVar3);
      uVar3 = Spine_AnimationState__AddAnimation(0,lVar2,0,*(undefined8 *)(param_1 + 0x20),1,0);
      goto LAB_04202cd0;
    }
    if (lVar2 == 0) goto LAB_04202d30;
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    param_4 = 1;
  }
  uVar3 = Spine_AnimationState__SetAnimation(lVar2,0,uVar3,param_4,0);
LAB_04202cd0:
  AnhPD_FoodOrder_CustomerState__Hook(param_1,uVar3);
  return;
}

