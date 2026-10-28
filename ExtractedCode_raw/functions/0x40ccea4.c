// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController.WholeDishMode$$CanCaptureWith
// address: 0x40ccea4
// body: available
// range: 0x40ccea4-0x40cd023 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_ServeShelfController_WholeDishMode__CanCaptureWith
               (undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_09515fbd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_09515fbd = 1;
  }
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_68 = 0;
  local_70 = 0;
  lVar2 = AnhPD_FoodOrder_ServeShelfController__get_Info(0);
  uVar3 = AnhPD_FoodOrder_ServeShelfController__get_LineHandle(0);
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09189158);
  }
  uVar4 = AnhPD_FoodOrder_PieceSet__get_IsEmpty(param_2,0);
  if ((uVar4 & 1) == 0) {
    uVar4 = System_String__IsNullOrEmpty(param_3,0);
    uVar1 = 0;
    if (((uVar4 & 1) != 0) || (uVar1 = 0, lVar2 == 0)) goto LAB_040ccf44;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
    if ((uVar4 & 1) != 0) {
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__CollectCandidates(param_1,lVar2);
      local_70 = 0;
      uStack_58 = 0;
      uStack_68 = 1;
      uStack_48 = 0;
      local_50 = 0;
      local_60 = param_3;
      thunk_FUN_03f5d7b8(&local_60,param_3);
      local_80 = param_2[1];
      uStack_88 = *param_2;
      uStack_78 = param_2[2];
      uStack_98 = uStack_68;
      local_a0 = local_70;
      uStack_90 = local_60;
      uStack_58 = uStack_88;
      local_50 = local_80;
      uStack_48 = uStack_78;
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__AddExtra(param_1,&local_a0);
      uVar1 = AnhPD_FoodOrder_ServeShelfController_WholeDishMode__RunCapture(param_1,lVar2,uVar3,1);
      AnhPD_FoodOrder_ServeShelfController_WholeDishMode__ClearCandidates(param_1);
      goto LAB_040ccf44;
    }
  }
  uVar1 = 0;
LAB_040ccf44:
  return uVar1 & 1;
}

