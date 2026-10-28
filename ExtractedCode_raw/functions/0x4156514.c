// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleSandwich$$Redraw
// address: 0x4156514
// body: available
// range: 0x4156514-0x415664f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x415664c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleSandwich__Redraw(long param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  float fVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_095164d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095164d0 = 1;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x100);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
  if ((uVar1 & 1) != 0) {
    plVar2 = *(long **)(param_1 + 0x100);
    if (plVar2 == (long *)0x0) goto LAB_0415664c;
    uStack_48 = *(undefined8 *)(param_1 + 0x110);
    local_50 = *(undefined8 *)(param_1 + 0x108);
    local_40 = *(undefined8 *)(param_1 + 0x118);
    (**(code **)(*plVar2 + 0x188))(plVar2,&local_50,*(undefined8 *)(*plVar2 + 400));
  }
  if ((param_2 & 1) != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x100);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar1 & 1) != 0) {
      plVar2 = *(long **)(param_1 + 0x100);
      if (plVar2 != (long *)0x0) {
        fVar4 = (float)(**(code **)(*plVar2 + 0x198))(plVar2,*(undefined8 *)(*plVar2 + 0x1a0));
        if (fVar4 <= 0.0) goto LAB_04156604;
        plVar2 = *(long **)(param_1 + 0x100);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x1a8))(plVar2,*(undefined8 *)(*plVar2 + 0x1b0));
          return;
        }
      }
LAB_0415664c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
LAB_04156604:
  uVar3 = UnityEngine_Component__get_transform(param_1,0);
  DG_Tweening_ShortcutExtensions__DOComplete(uVar3,0,0);
  uVar3 = UnityEngine_Component__get_transform(param_1,0);
  AnhPD_APDUtilities__Appear(0x3dcccccd,uVar3,0);
  return;
}

