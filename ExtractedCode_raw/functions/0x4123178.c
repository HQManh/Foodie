// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusCanvasView$$Focus
// address: 0x4123178
// body: available
// range: 0x4123178-0x4123283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4123280 to 0x4121430 AnhPD.FoodOrder.TutorialFocusCanvasView$$Clear (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusCanvasView__Focus
               (float param_1,float param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 local_50;
  undefined8 local_48;
  
  if ((DAT_095162a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162a8 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(param_5,0);
  if ((uVar1 & 1) != 0) {
    AnhPD_FoodOrder_TutorialFocusCanvasView__RectToLocal(param_4,param_5,&local_48,&local_50);
    AnhPD_FoodOrder_TutorialFocusCanvasView__Begin
              ((undefined4)local_48,local_48._4_4_,param_1 + param_1 + (float)local_50,
               param_2 + param_2 + local_50._4_4_,param_3,param_4);
    *(undefined8 *)(param_4 + 0x60) = param_5;
    thunk_FUN_03f5d7b8((undefined8 *)(param_4 + 0x60),param_5);
    *(float *)(param_4 + 0x68) = param_1;
    *(float *)(param_4 + 0x6c) = param_2;
    return;
  }
  AnhPD_FoodOrder_TutorialFocusCanvasView__Clear(0x3e4ccccd,param_4,0);
  return;
}

