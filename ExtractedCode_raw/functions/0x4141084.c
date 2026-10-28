// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$GetItemOrderSpecs
// address: 0x4141084
// body: available
// range: 0x4141084-0x414126b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4141268 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_CafeOrderStrategy__GetItemOrderSpecs(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  byte local_80;
  undefined8 local_78;
  
  if ((DAT_095163c8 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182240);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091aed50);
    FUN_03f5c2a4(&DAT_091aed58);
    DAT_095163c8 = 1;
  }
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  lVar4 = AnhPD_FoodOrder_OrderStrategy__GetItemOrderSpecs(param_1,param_2,0);
  if (lVar4 != 0) {
    if (0 < *(int *)(lVar4 + 0x18)) {
      iVar7 = 0;
      do {
        FUN_057eeec4(&local_a8,lVar4,iVar7,DAT_091aed50);
        uVar3 = local_78;
        uVar2 = uStack_a0;
        uVar1 = local_a8;
        uStack_b8 = uStack_90;
        local_c0 = local_98;
        local_b0 = local_88;
        if ((local_80 & 1) != 0) {
          if (*(int *)(DAT_09182240 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uStack_d8 = uStack_b8;
          local_e0 = local_c0;
          local_d0 = local_b0;
          uVar5 = AnhPD_FoodOrder_CafePieceTable__DishOf(&local_e0,0);
          uVar5 = AnhPD_FoodOrder_CafePieceTable__BaseIdOf(uVar5,0);
          uVar6 = System_String__IsNullOrEmpty(uVar5,0);
          if (((uVar6 & 1) == 0) &&
             (uVar6 = System_String__op_Equality(uVar5,uVar2,0), (uVar6 & 1) == 0)) {
            uStack_148 = uStack_b8;
            local_150 = local_c0;
            local_f0 = 0;
            local_140 = local_b0;
            uStack_128 = 0;
            local_130 = 0;
            uStack_118 = 0;
            uStack_120 = 0;
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
            AnhPD_FoodOrder_OrderSpec___ctor
                      (&local_130,uVar1,uVar5,&local_150,1,uVar3,0xffffffff,0xffffffff,0,0);
            memcpy(&local_a8,&local_130,0x48);
            FUN_057eef28(lVar4,iVar7,&local_a8,DAT_091aed58);
          }
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < *(int *)(lVar4 + 0x18));
    }
    return lVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

