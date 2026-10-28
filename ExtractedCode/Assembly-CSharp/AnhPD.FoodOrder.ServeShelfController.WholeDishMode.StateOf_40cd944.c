// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$StateOf
// address: 0x40cd944
// body: available
// range: 0x40cd944-0x40cdb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40cdb0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ServeShelfController_WholeDishMode__StateOf
               (void *param_1,long param_2,long param_3,undefined8 *param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  long *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  if ((DAT_09515fc4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fc4 = 1;
  }
  uStack_88 = 0;
  local_90 = (long *)0x0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  if (param_3 == 0) goto LAB_040cdb0c;
  plVar3 = *(long **)(param_3 + 0xa8);
  if (plVar3 == (long *)0x0) {
LAB_040cd9ec:
    plVar3 = (long *)0x0;
  }
  else {
    if (*(byte *)(*plVar3 + 0x130) < *(byte *)(DAT_09184728 + 0x130)) goto LAB_040cd9ec;
    if (*(long *)(*(long *)(*plVar3 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) !=
        DAT_09184728) {
      plVar3 = (long *)0x0;
    }
  }
  uStack_98 = 0;
  uStack_88 = 0;
  uStack_68 = 0;
  local_70 = 0;
  local_58 = 0;
  local_60 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_a0 = CONCAT44(*(undefined4 *)(param_3 + 0xb4),1);
  local_90 = plVar3;
  thunk_FUN_03f5d7b8(&local_90,plVar3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = UnityEngine_Object__op_Implicit(plVar3,0);
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (*(long *)(param_3 + 0xa8) == 0) goto LAB_040cdb0c;
    uVar2 = *(undefined8 *)(*(long *)(param_3 + 0xa8) + 0x78);
  }
  uStack_98 = uVar2;
  thunk_FUN_03f5d7b8((ulong)&local_a0 | 8);
  local_80 = param_4[1];
  uStack_88 = *param_4;
  uStack_78 = param_4[2];
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_68 = puVar4[1];
  local_70 = *puVar4;
  local_60 = puVar4[2];
  if (*(long *)(param_2 + 0x10) != 0) {
    local_58 = AnhPD_FoodOrder_ServeShelfController__PlateSequence
                         (*(long *)(param_2 + 0x10),param_3,param_5,0);
    thunk_FUN_03f5d7b8(&local_58,local_58);
    memcpy(param_1,&local_a0,0x50);
    return;
  }
LAB_040cdb0c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

