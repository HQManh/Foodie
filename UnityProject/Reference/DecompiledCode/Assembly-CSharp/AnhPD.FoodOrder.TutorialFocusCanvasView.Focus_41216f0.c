// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$Focus
// address: 0x41216f0
// body: available
// range: 0x41216f0-0x41217fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41217f4 to 0x4121430 AnhPD.FoodOrder.TutorialFocusCanvasView$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41217f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__Focus
               (undefined4 param_1,float param_2,float param_3,float param_4,undefined4 param_5,
               long param_6,long param_7)

{
  ulong uVar1;
  float fVar2;
  float fVar3;
  
  fVar3 = param_2;
  if ((DAT_095162a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162a7 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_7,0);
  if ((uVar1 & 1) != 0) {
    if (param_7 != 0) {
      fVar2 = (float)UnityEngine_Transform__get_position(param_7,0);
      AnhPD_FoodOrder_TutorialFocusCanvasView__Focus
                (param_3 + fVar2,param_4 + fVar3,param_1,param_2,param_5,param_6);
      *(long *)(param_6 + 0x70) = param_7;
      thunk_FUN_03f5d7b8((long *)(param_6 + 0x70),param_7);
      *(float *)(param_6 + 0x78) = param_3;
      *(float *)(param_6 + 0x7c) = param_4;
      *(undefined4 *)(param_6 + 0x80) = param_1;
      *(float *)(param_6 + 0x84) = param_2;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  AnhPD_FoodOrder_TutorialFocusCanvasView__Clear(0x3e4ccccd,param_6,0);
  return;
}

