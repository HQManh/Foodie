// rea decompile_all
// name: AnhPD.FoodOrder.UIHintFlexibleHelper$$FrameHeight
// address: 0x4129474
// body: available
// range: 0x4129474-0x4129537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4129534 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float AnhPD_FoodOrder_UIHintFlexibleHelper__FrameHeight
                (long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  float fVar4;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_38 = 0;
  local_48 = 0;
  uStack_40 = 0;
  if (param_1 != (long *)0x0) {
    (**(code **)(*param_1 + 600))(param_1,param_2,*(undefined8 *)(*param_1 + 0x260));
    lVar1 = UnityEngine_Component__get_transform(param_1,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar1 != 0) {
      lVar3 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar3 + 0xc),*(undefined4 *)(lVar3 + 0x10),
                 *(undefined4 *)(lVar3 + 0x14),lVar1,0);
      uVar2 = AnhPD_FoodOrder_UIHintFlexibleHelper__TryGetFrameBounds(param_1,param_3,&local_48);
      fVar4 = (float)local_38 + (float)local_38;
      if ((uVar2 & 1) == 0) {
        fVar4 = 0.0;
      }
      return fVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

