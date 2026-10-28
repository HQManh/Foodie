// rea decompile_all
// name: AnhPD.FoodOrder.CafeOrderStrategy$$GenerateRandomRecipes
// address: 0x413fbe0
// body: available
// range: 0x413fbe0-0x413fe8b inclusive
// range: 0x413fec8-0x413ff03 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413fe88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x413ff00 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_CafeOrderStrategy__GenerateRandomRecipes(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_98;
  undefined8 *puStack_90;
  ulong local_88;
  undefined8 local_80;
  undefined8 *puStack_78;
  ulong local_70;
  
  if ((DAT_095163c1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2588);
    FUN_03f5c2a4(&DAT_091a2590);
    FUN_03f5c2a4(&DAT_091a2598);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091ab9e8);
    FUN_03f5c2a4(&DAT_091b05f8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091b0568);
    FUN_03f5c2a4(&DAT_091aba00);
    FUN_03f5c2a4(&DAT_0917c520);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_095163c1 = 1;
  }
  local_80 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_70 = 0;
  iVar2 = UnityEngine_Random__Range(1,4,0);
  lVar3 = thunk_FUN_03f9944c(DAT_0917cce8);
  FUN_057e0478(lVar3,iVar2,DAT_091b0568);
  lVar4 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar4,DAT_091adc70);
  if (0 < iVar2) {
    iVar9 = 0;
    do {
      lVar5 = AnhPD_FoodOrder_CafeOrderStrategy__RollDish(param_1);
      uVar7 = DAT_091ab9e8;
      if (lVar5 == 0) goto LAB_0413ff00;
      if (*(int *)(lVar5 + 0x18) != 0) {
        if (lVar4 == 0) goto LAB_0413ff00;
        *(undefined4 *)(lVar4 + 0x18) = 0;
        *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
        FUN_0579a6a8(&local_98,lVar5,uVar7);
        local_80 = local_98;
        local_98 = 0;
        puStack_78 = puStack_90;
        local_70 = local_88;
        puStack_90 = &local_80;
        while (uVar6 = FUN_071aef5c(&local_80,DAT_091a2590), lVar5 = DAT_091adc88, (uVar6 & 1) != 0)
        {
          lVar8 = *(long *)(lVar4 + 0x10);
          *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
          if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar4 + 0x18);
          if (uVar1 < *(uint *)(lVar8 + 0x18)) {
            *(uint *)(lVar4 + 0x18) = uVar1 + 1;
            *(undefined4 *)(lVar8 + (long)(int)uVar1 * 4 + 0x20) = (undefined4)local_70;
          }
          else {
            FUN_057971a8(lVar4,local_70 & 0xffffffff,
                         *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071aef58(&local_80,DAT_091a2588);
        uVar7 = CakeOrder_InGame_OrderRecipeCodec__Encode(0,lVar4,0);
        lVar5 = DAT_091b0570;
        if (lVar3 == 0) goto LAB_0413ff00;
        lVar8 = *(long *)(lVar3 + 0x10);
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        if (lVar8 == 0) goto LAB_0413ff00;
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar8 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar8 + (long)(int)uVar1 * 8 + 0x20) = uVar7;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar3,uVar7,*(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                      );
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar2);
  }
  if (lVar3 != 0) {
    FUN_057e28a4(lVar3,DAT_091b05f8);
    return;
  }
LAB_0413ff00:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

