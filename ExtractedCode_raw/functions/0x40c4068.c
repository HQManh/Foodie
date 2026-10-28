// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$RequestServeAfterAssemble
// address: 0x40c4068
// body: available
// range: 0x40c4068-0x40c41df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c41d8 to 0x40c2ec0 AnhPD.FoodOrder.ServeShelfController$$RequestServe (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40c41dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController__RequestServeAfterAssemble
               (undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  
  if ((DAT_09515fa2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091d8c00);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dc040);
    DAT_09515fa2 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar1 & 1) != 0) {
    if (param_2 == 0) {
LAB_040c41dc:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = *(undefined8 *)(param_2 + 0xa8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_2 + 0xa8);
      if (plVar2 == (long *)0x0) goto LAB_040c41dc;
      fVar4 = (float)(**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      if (0.0 < fVar4) {
        fVar5 = (float)UnityEngine_Time__get_time(0);
        if (*(float *)(param_2 + 0x84) < fVar4 + fVar5) {
          *(float *)(param_2 + 0x84) = fVar4 + fVar5;
        }
        uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
        DG_Tweening_TweenCallback___ctor(uVar3,param_1,DAT_091d8c00,0);
        uVar3 = DG_Tweening_DOVirtual__DelayedCall(fVar4,uVar3,1,0);
        uVar3 = FUN_04d9656c(uVar3,0,DAT_091dc040);
        FUN_04d9642c(uVar3,param_1,DAT_091dbfe0);
      }
    }
  }
  AnhPD_FoodOrder_ServeShelfController__RequestServe(param_1);
  return;
}

