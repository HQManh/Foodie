// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamOrderStrategy$$ConvertOrderData
// address: 0x414e218
// body: available
// range: 0x414e218-0x414e547 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414e540 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414e544 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_IceCreamOrderStrategy__ConvertOrderData(long *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  int local_124;
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
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0951645e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09186a50);
    FUN_03f5c2a4(&DAT_09186a58);
    FUN_03f5c2a4(&DAT_09186a70);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09180348);
    FUN_03f5c2a4(&DAT_091f8340);
    FUN_03f5c2a4(&DAT_092141e8);
    FUN_03f5c2a4(&DAT_091f6df8);
    DAT_0951645e = 1;
  }
  uStack_50 = 0;
  local_48 = 0;
  local_60 = 0;
  local_58 = 0;
  local_68 = 0;
  local_70 = 0;
  uVar2 = (**(code **)(*param_1 + 0x238))
                    (param_1,param_2,&local_58,*(undefined8 *)(*param_1 + 0x240));
  if (((uVar2 & 1) != 0) &&
     (uVar2 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_2,&local_68,0), (uVar2 & 1) != 0))
  {
    if (*(int *)(DAT_09186a58 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar3 = AnhPD_FoodOrder_IceCreamOrderStrategy__get_Config();
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar2 = UnityEngine_Object__op_Equality(lVar3,0,0);
    if ((uVar2 & 1) == 0) {
      if (lVar3 == 0) goto LAB_0414e540;
      uVar2 = AnhPD_FoodOrder_RecipeConfigSO__TryGetDishBaseId
                        (lVar3,local_68 & 0xffffffff,&local_70,0);
      uVar1 = local_60;
      uVar4 = local_70;
      if ((uVar2 & 1) != 0) {
        if ((int)local_68 == 1) {
          uStack_b8 = uStack_50;
          local_c0 = local_58;
          local_b0 = local_48;
          if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_f8 = uStack_b8;
          local_100 = local_c0;
          local_f0 = local_b0;
          uVar4 = AnhPD_FoodOrder_IceCreamScoopOrder__BuildId(uVar4,&local_100,uVar1);
        }
        else {
          uStack_d8 = uStack_50;
          local_e0 = local_58;
          local_d0 = local_48;
          uVar4 = AnhPD_FoodOrder_FlexiblePieceId__Build(local_70,&local_e0,0);
        }
        lVar3 = FUN_03f5c394(DAT_09180348,1);
        local_80 = 0;
        uStack_118 = uStack_50;
        local_120 = local_58;
        local_110 = local_48;
        uStack_98 = 0;
        local_a0 = 0;
        uStack_88 = 0;
        uStack_90 = 0;
        uStack_b8 = 0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        AnhPD_FoodOrder_OrderSpec___ctor
                  (&local_c0,uVar4,local_70,&local_120,1,0,0xffffffff,0xffffffff,0,0);
        if (lVar3 == 0) goto LAB_0414e540;
        goto LAB_0414e47c;
      }
      local_124 = (int)local_68;
      uVar4 = FUN_03f5c42c(DAT_09186a50,&local_124);
      uVar4 = System_String__Format(DAT_092141e8,uVar4,0);
      uVar4 = System_String__Concat(uVar4,DAT_091f8340,param_2,DAT_091f6df8,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogError(uVar4,0);
    }
  }
  lVar3 = FUN_03f5c394(DAT_09180348,1);
  AnhPD_FoodOrder_OrderStrategy__BuildSpec(&local_c0,param_1,param_2,0);
  if (lVar3 != 0) {
LAB_0414e47c:
    if (*(int *)(lVar3 + 0x18) != 0) {
      memmove((void *)(lVar3 + 0x20),&local_c0,0x48);
      thunk_FUN_03f5d7b8(lVar3 + 0x20,0);
      return lVar3;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
LAB_0414e540:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

