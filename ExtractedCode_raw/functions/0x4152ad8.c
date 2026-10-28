// rea decompile_all
// name: AnhPD.FoodOrder.PastaOrderStrategy$$ConvertOrderData
// address: 0x4152ad8
// body: available
// range: 0x4152ad8-0x4152ddb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4152d2c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4152d74 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4152d78 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4152dd8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_PastaOrderStrategy__ConvertOrderData(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_50;
  long local_48;
  
  if ((DAT_095164a8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180348);
    FUN_03f5c2a4(&DAT_09188f10);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_095164a8 = 1;
  }
  local_50 = 0;
  local_48 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  uVar2 = CakeOrder_InGame_OrderRecipeCodec__TryDecode(param_2,&local_50,0);
  if ((uVar2 & 1) == 0) {
    puVar7 = &DAT_092052e0;
LAB_04152d90:
    uVar4 = thunk_FUN_03fc39d4(puVar7);
    uVar4 = System_String__Concat(uVar4,param_2,0);
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar6 = thunk_FUN_03f9944c();
    System_InvalidOperationException___ctor(uVar6,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d5840);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar4);
  }
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar5 = local_48;
  puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_68 = puVar8[1];
  local_70 = *puVar8;
  local_60 = puVar8[2];
  if (local_48 != 0) {
    uVar1 = *(uint *)(local_48 + 0x18);
    if (0 < (int)uVar1) {
      uVar9 = 0;
      do {
        if (uVar1 <= uVar9) goto LAB_04152d2c;
        uVar1 = *(uint *)(lVar5 + (long)(int)uVar9 * 4 + 0x20);
        if (0x16 < uVar1) {
          thunk_FUN_03fc39d4(&DAT_091870e0);
          uVar4 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_0920a5a8);
          System_InvalidOperationException___ctor(uVar4,uVar6,0);
          uVar6 = thunk_FUN_03fc39d4(&DAT_091d5840);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar6);
        }
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__Add(&local_100,&local_70,uVar1,1,0);
        uVar1 = *(uint *)(lVar5 + 0x18);
        uVar9 = uVar9 + 1;
        uStack_68 = uStack_f8;
        local_70 = local_100;
        local_60 = local_f0;
      } while ((int)uVar9 < (int)uVar1);
    }
    uVar2 = local_50;
    uStack_f8 = uStack_68;
    local_100 = local_70;
    local_f0 = local_60;
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uStack_88 = uStack_f8;
    local_90 = local_100;
    local_80 = local_f0;
    uVar3 = CakeOrder_InGame_Pasta_PastaPieceTable__IsComplete(uVar2 & 0xffffffff,&local_90,0);
    if ((uVar3 & 1) == 0) {
      puVar7 = &DAT_092052d8;
      goto LAB_04152d90;
    }
    if (*(int *)(DAT_09188f10 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = CakeOrder_InGame_Pasta_PastaPieceTable__BaseId(uVar2 & 0xffffffff,0);
    lVar5 = FUN_03f5c394(DAT_09180348,1);
    uStack_a8 = uStack_68;
    local_b0 = local_70;
    local_a0 = local_60;
    uVar6 = AnhPD_FoodOrder_FlexiblePieceId__Build(uVar4,&local_b0,0);
    local_c0 = 0;
    uStack_118 = uStack_68;
    local_120 = local_70;
    local_110 = local_60;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    AnhPD_FoodOrder_OrderSpec___ctor
              (&local_100,uVar6,uVar4,&local_120,1,0,0xffffffff,0xffffffff,0,0);
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        memmove((void *)(lVar5 + 0x20),&local_100,0x48);
        thunk_FUN_03f5d7b8(lVar5 + 0x20,0);
        return lVar5;
      }
LAB_04152d2c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

