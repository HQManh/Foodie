// rea decompile_all
// name: AnhPD.FoodOrder.SpawnBagSaveMe$$CyclePreview
// address: 0x40fcb4c
// body: available
// range: 0x40fcb4c-0x40fcb4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SpawnBagSaveMe__CyclePreview(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  
  if ((DAT_0951614b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091adae8);
    FUN_03f5c2a4(&DAT_091adb10);
    FUN_03f5c2a4(&DAT_091adb20);
    FUN_03f5c2a4(&DAT_091adb28);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951614b = 1;
  }
  if (*(char *)(param_1 + 0x28) == '\0') {
    if (*(long *)(param_1 + 0x58) == 0) {
LAB_040fcd6c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (1 < *(int *)(*(long *)(param_1 + 0x58) + 0x18)) {
      lVar2 = *(long *)(DAT_091b4c28 + 0x20);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
        lVar2 = FUN_03f95a6c();
      }
      uVar7 = **(undefined8 **)(lVar2 + 0xb8);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar7,0);
      if ((uVar3 & 1) != 0) {
        lVar2 = *(long *)(DAT_091b4c28 + 0x20);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        lVar2 = *(long *)(*(long *)(lVar2 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
          lVar2 = FUN_03f95a6c();
        }
        if (**(long **)(lVar2 + 0xb8) == 0) goto LAB_040fcd6c;
        uVar3 = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract
                          (**(long **)(lVar2 + 0xb8),0);
        if ((uVar3 & 1) == 0) {
          return;
        }
      }
      if ((*(long *)(param_1 + 0x90) == 0) ||
         (uVar3 = DG_Tweening_TweenExtensions__IsActive(*(long *)(param_1 + 0x90),0),
         (uVar3 & 1) == 0)) {
        if (*(long *)(param_1 + 0x58) != 0) {
          uVar7 = FUN_057e0998(*(long *)(param_1 + 0x58),0,DAT_091adb28);
          if (*(long *)(param_1 + 0x58) != 0) {
            FUN_057e251c(*(long *)(param_1 + 0x58),0,DAT_091adb10);
            lVar2 = DAT_091adae8;
            lVar4 = *(long *)(param_1 + 0x58);
            if (lVar4 != 0) {
              lVar5 = *(long *)(lVar4 + 0x10);
              *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar4 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                  puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                  *puVar6 = uVar7;
                  thunk_FUN_03f5d7b8(puVar6,uVar7);
                }
                else {
                  FUN_057e0c68(lVar4,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                }
                AnhPD_FoodOrder_SpawnBag__InvokeSpawnEffect(param_1);
                AnhPD_FoodOrder_SpawnBagSaveMe__PlaySwapAnim(param_1);
                return;
              }
            }
          }
        }
        goto LAB_040fcd6c;
      }
    }
  }
  return;
}

