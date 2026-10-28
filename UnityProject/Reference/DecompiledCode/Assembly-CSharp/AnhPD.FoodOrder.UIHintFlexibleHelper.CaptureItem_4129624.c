// rea decompile_all
// name: AnhPD.FoodOrder.UIHintFlexibleHelper$$CaptureItem
// address: 0x4129624
// body: available
// range: 0x4129624-0x412974b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4129744 to 0x4129b78 AnhPD.FoodOrder.UIHintFlexibleHelper$$Render (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4129748 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_UIHintFlexibleHelper__CaptureItem
               (long param_1,long *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined4 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float fVar8;
  undefined8 local_38;
  
  local_38 = 0;
  if (param_2 != (long *)0x0) {
    (**(code **)(*param_2 + 0x198))
              (0x3f800000,param_2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(*param_2 + 0x1a0))
    ;
    (**(code **)(*param_2 + 600))(param_2,param_3,*(undefined8 *)(*param_2 + 0x260));
    lVar6 = UnityEngine_Component__get_transform(param_2,0);
    if (DAT_09515cf3 == '\0') {
      FUN_03f5c2a4(&DAT_0918cbd0);
      DAT_09515cf3 = '\x01';
    }
    if (lVar6 != 0) {
      lVar7 = *(long *)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localScale
                (*(undefined4 *)(lVar7 + 0xc),*(undefined4 *)(lVar7 + 0x10),
                 *(undefined4 *)(lVar7 + 0x14),lVar6,0);
      AnhPD_FoodOrder_UIHintFlexibleHelper__FrameSize
                (param_1,param_2,param_4,(long)&local_38 + 4,&local_38);
      uVar1 = local_38;
      fVar8 = 1.0;
      if (param_4 != 0) {
        fVar8 = *(float *)(param_4 + 0x24);
      }
      uVar2 = local_38._4_4_;
      bVar3 = false;
      bVar4 = true;
      bVar5 = false;
      if (fVar8 < 1.0) {
        bVar3 = false;
        bVar4 = false;
        bVar5 = true;
        if (!NAN(fVar8)) {
          bVar3 = fVar8 < 0.0;
          bVar4 = fVar8 == 0.0;
          bVar5 = false;
        }
      }
      if (bVar4 || bVar3 != bVar5) {
        fVar8 = 1.0;
      }
      AnhPD_FoodOrder_UIHintFlexibleHelper__FitToCamera
                (fVar8,param_1,param_2,local_38._4_4_,local_38 & 0xffffffff,param_4);
      AnhPD_FoodOrder_UIHintFlexibleHelper__Render(param_1,uVar2,uVar1 & 0xffffffff);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

