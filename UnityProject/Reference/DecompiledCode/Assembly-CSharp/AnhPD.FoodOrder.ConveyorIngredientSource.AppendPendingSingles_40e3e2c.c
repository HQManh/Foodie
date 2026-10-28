// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorIngredientSource$$AppendPendingSingles
// address: 0x40e3e2c
// body: available
// range: 0x40e3e2c-0x40e3fbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e3fbc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorIngredientSource__AppendPendingSingles(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 local_68;
  undefined8 *puStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  if ((DAT_09516078 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a26d8);
    FUN_03f5c2a4(&DAT_091a26e0);
    FUN_03f5c2a4(&DAT_091a26e8);
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091b8b70);
    DAT_09516078 = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    FUN_05e2d090(&local_68,*(long *)(param_1 + 0x10),DAT_091b8b70);
    local_40 = local_58;
    uStack_48 = puStack_60;
    local_50 = local_68;
    local_68 = 0;
    puStack_60 = &local_50;
LAB_040e3ef0:
    uVar3 = FUN_071bddb4(&local_50,DAT_091a26e0);
    if ((uVar3 & 1) != 0) {
      lVar4 = FUN_071bdea4(&local_50,DAT_091a26e8);
      lVar2 = DAT_091adae8;
      if ((((lVar4 != 0) && (lVar5 = *(long *)(lVar4 + 0x10), lVar5 != 0)) &&
          (*(int *)(lVar5 + 0x18) == 1)) &&
         (((lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0 && (*(int *)(lVar4 + 0x18) != 1)) &&
          (*(int *)(lVar4 + 0x28) == 0)))) {
        if (param_2 != 0) {
          lVar4 = *(long *)(param_2 + 0x10);
          *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
          if (lVar4 != 0) {
            uVar1 = *(uint *)(param_2 + 0x18);
            if (uVar1 < *(uint *)(lVar4 + 0x18)) {
              *(uint *)(param_2 + 0x18) = uVar1 + 1;
              *(long *)(lVar4 + (long)(int)uVar1 * 8 + 0x20) = lVar5;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(param_2,lVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_040e3ef0;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_040e3ef0;
    }
    FUN_071bdda4(&local_50,DAT_091a26d8);
  }
  return;
}

