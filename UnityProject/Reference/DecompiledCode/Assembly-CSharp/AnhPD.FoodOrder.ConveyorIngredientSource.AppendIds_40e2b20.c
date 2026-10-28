// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$AppendIds
// address: 0x40e2b20
// body: available
// range: 0x40e2b20-0x40e2cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e2cd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e2cd8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorIngredientSource__AppendIds(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_09516084 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a26d8);
    FUN_03f5c2a4(&DAT_091a26e0);
    FUN_03f5c2a4(&DAT_091a26e8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b8b70);
    DAT_09516084 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_1 != 0) {
    FUN_05e2d090(&local_88,param_1,DAT_091b8b70);
    local_60 = local_78;
    uStack_68 = puStack_80;
    local_70 = local_88;
    local_88 = 0;
    puStack_80 = &local_70;
    while (uVar3 = FUN_071bddb4(&local_70,DAT_091a26e0), (uVar3 & 1) != 0) {
      lVar4 = FUN_071bdea4(&local_70,DAT_091a26e8);
      if (((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x10), lVar4 != 0)) &&
         (0 < (int)*(ulong *)(lVar4 + 0x18))) {
        uVar3 = 0;
        uVar6 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
        do {
          lVar2 = DAT_091b0570;
          if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar8 = *(long *)(lVar4 + 0x20 + uVar3 * 8);
          if (lVar8 != 0) {
            if (param_2 == 0) {
LAB_040e2cd4:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *(long *)(param_2 + 0x10);
            uVar5 = *(undefined8 *)(lVar8 + 0x10);
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_040e2cd4;
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar5;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(param_2,uVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar6 = (ulong)*(uint *)(lVar4 + 0x18);
          uVar3 = uVar3 + 1;
        } while ((long)uVar3 < (long)(int)*(uint *)(lVar4 + 0x18));
      }
    }
    FUN_071bdda4(&local_70,DAT_091a26d8);
  }
  return;
}

