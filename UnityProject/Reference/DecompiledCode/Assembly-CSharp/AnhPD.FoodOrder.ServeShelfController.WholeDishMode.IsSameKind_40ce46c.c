// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$IsSameKind
// address: 0x40ce46c
// body: available
// range: 0x40ce46c-0x40ce627 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ce624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__IsSameKind
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  long *plVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long *local_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09515fc9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091b43d8);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fc9 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_70 = 0;
  if (*(long *)(param_1 + 0x20) == 0) {
LAB_040ce624:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_05a07ee8(&local_a0,*(long *)(param_1 + 0x20),param_2,DAT_091b43d8);
  uVar3 = local_90;
  bVar2 = local_98;
  plVar1 = local_a0;
  uStack_48 = uStack_80;
  local_50 = local_88;
  local_40 = local_78;
  if (*(long *)(param_1 + 0x20) == 0) goto LAB_040ce624;
  FUN_05a07ee8(&local_a0,*(long *)(param_1 + 0x20),param_3,DAT_091b43d8);
  uStack_68 = uStack_80;
  local_70 = local_88;
  local_60 = local_78;
  if (((bVar2 | local_98) & 1) == 0) {
    if (plVar1 != (long *)0x0) {
      lVar6 = *plVar1;
      if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(lVar6 + 0x130)) &&
         (*(long *)(*(long *)(lVar6 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
          DAT_09184728)) goto LAB_040ce608;
    }
    if (local_a0 != (long *)0x0) {
      if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(*local_a0 + 0x130)) &&
         (*(long *)(*(long *)(*local_a0 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
          DAT_09184728)) goto LAB_040ce608;
    }
    uVar5 = System_String__op_Equality(uVar3,local_90,0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uStack_b8 = uStack_48;
      local_c0 = local_50;
      local_b0 = local_40;
      uStack_d8 = uStack_68;
      local_e0 = local_70;
      local_d0 = local_60;
      uVar4 = AnhPD_FoodOrder_PieceSet__op_Equality(&local_c0,&local_e0,0);
      goto LAB_040ce60c;
    }
  }
LAB_040ce608:
  uVar4 = 0;
LAB_040ce60c:
  return uVar4 & 1;
}

