// rea decompile_all
// name: AnhPD.FoodOrder.SushiOrderStrategy$$ConvertOrderData
// address: 0x416bca4
// body: available
// range: 0x416bca4-0x416bfb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416bedc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416bfb4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_SushiOrderStrategy__ConvertOrderData(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  ulong local_68 [5];
  
  if ((DAT_095165aa & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180348);
    FUN_03f5c2a4(&DAT_0918b660);
    FUN_03f5c2a4(&DAT_0918b670);
    FUN_03f5c2a4(&DAT_092141e8);
    FUN_03f5c2a4(&DAT_091f8338);
    FUN_03f5c2a4(&DAT_091f6df8);
    DAT_095165aa = 1;
  }
  local_68[2] = 0;
  local_68[3] = 0;
  local_68[4] = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_70 = 0;
  local_78 = 0;
  uVar1 = (**(code **)(*param_1 + 0x238))
                    (param_1,param_2,local_68 + 2,*(undefined8 *)(*param_1 + 0x240));
  if (((uVar1 & 1) == 0) ||
     (uVar1 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_2,local_68,0), (uVar1 & 1) == 0)) {
LAB_0416bdd8:
    lVar2 = FUN_03f5c394(DAT_09180348,1);
  }
  else {
    if (*(int *)(DAT_0918b670 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = AnhPD_FoodOrder_SushiOrderStrategy__get_Config();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar1 = UnityEngine_Object__op_Equality(lVar2,0,0);
    if ((uVar1 & 1) != 0) goto LAB_0416bdd8;
    if (lVar2 == 0) goto LAB_0416bedc;
    uVar1 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId
                      (lVar2,local_68[0] & 0xffffffff,&local_70,0);
    if ((uVar1 & 1) != 0) {
      lVar2 = FUN_03f5c394(DAT_09180348,1);
      uStack_d8 = local_68[3];
      local_e0 = local_68[2];
      local_d0 = local_68[4];
      uVar3 = AnhPD_FoodOrder_FlexiblePieceId__Build(local_70,&local_e0,0);
      local_80 = 0;
      uStack_f8 = local_68[3];
      local_100 = local_68[2];
      local_f0 = local_68[4];
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      AnhPD_FoodOrder_OrderSpec___ctor
                (&local_c0,uVar3,local_70,&local_100,1,0,0xffffffff,0xffffffff,0,0);
      if (lVar2 == 0) goto LAB_0416bedc;
      goto LAB_0416be00;
    }
    uStack_118 = local_68[3];
    local_120 = local_68[2];
    local_110 = local_68[4];
    uVar1 = AnhPD_FoodOrder_RecipeConfigSO__TryGetPreparedOfPieceSet(lVar2,&local_120,&local_78,0);
    if ((uVar1 & 1) == 0) {
      local_124 = (undefined4)local_68[0];
      uVar3 = FUN_03f5c42c(DAT_0918b660,&local_124);
      uVar3 = System_String__Format(DAT_092141e8,uVar3,0);
      uVar3 = System_String__Concat(uVar3,DAT_091f8338,param_2,DAT_091f6df8,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar3,0);
      goto LAB_0416bdd8;
    }
    lVar2 = FUN_03f5c394(DAT_09180348,1);
    param_2 = local_78;
  }
  AnhPD_FoodOrder_OrderStrategy__BuildSpec(&local_c0,param_1,param_2,0);
  if (lVar2 != 0) {
LAB_0416be00:
    if (*(int *)(lVar2 + 0x18) != 0) {
      memmove((void *)(lVar2 + 0x20),&local_c0,0x48);
      thunk_FUN_03f5d7b8(lVar2 + 0x20,0);
      return lVar2;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0416bedc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

