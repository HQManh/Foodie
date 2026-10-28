// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$Free
// address: 0x40cf7bc
// body: available
// range: 0x40cf7bc-0x40cf967 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cf950 to 0x4d9642c FUN_04d9642c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40cf964 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__Free(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((DAT_09515fd6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c9f8);
    FUN_03f5c2a4(&DAT_0919ca00);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    FUN_03f5c2a4(&DAT_091f3470);
    FUN_03f5c2a4(&DAT_09196bc8);
    DAT_09515fd6 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09196bc8);
  System_Object___ctor(lVar1,0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar2 & 1) != 0) {
    if ((lVar1 == 0) || (*(long *)(param_1 + 0x58) == 0)) {
LAB_040cf964:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar2 = FUN_06fd9fbc(*(long *)(param_1 + 0x58),param_2,lVar1 + 0x10,DAT_0919ca00);
    if ((uVar2 & 1) != 0) {
      if (*(long *)(param_1 + 0x58) == 0) goto LAB_040cf964;
      FUN_06fd9970(*(long *)(param_1 + 0x58),param_2,DAT_0919c9f8);
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__StopHover(param_1,param_2);
      if (*(long *)(lVar1 + 0x10) != 0) {
        uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar3,lVar1,DAT_091f3470,0);
        uVar3 = DG_Tweening_DOVirtual__DelayedCall(0,uVar3,1,0);
        uVar3 = FUN_04d9656c(uVar3,0,DAT_091dc040);
        FUN_04d9642c(uVar3,*(undefined8 *)(param_1 + 0x10),DAT_091dbfe0);
        return;
      }
    }
  }
  return;
}

