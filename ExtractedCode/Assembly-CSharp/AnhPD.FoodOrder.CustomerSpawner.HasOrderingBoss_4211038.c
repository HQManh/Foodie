// rea decompile_all
// name: AnhPD.FoodOrder.CustomerSpawner$$HasOrderingBoss
// address: 0x4211038
// body: available
// range: 0x4211038-0x421119f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4211190 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211194 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4211198 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x421119c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint AnhPD_FoodOrder_CustomerSpawner__HasOrderingBoss(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_68;
  undefined8 *puStack_60;
  long local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  if ((DAT_09516c7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a2c60);
    FUN_03f5c2a4(&DAT_091a2c68);
    FUN_03f5c2a4(&DAT_091a2c70);
    FUN_03f5c2a4(&DAT_091acac8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516c7c = 1;
  }
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0;
  if (*(long *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  FUN_057e185c(&local_68,*(long *)(param_1 + 0x18),DAT_091acac8);
  local_40 = local_58;
  uStack_48 = puStack_60;
  local_50 = local_68;
  local_68 = 0;
  puStack_60 = &local_50;
  do {
    do {
      do {
        uVar1 = FUN_071bd28c(&local_50,DAT_091a2c68);
        lVar3 = local_40;
        if ((uVar1 & 1) == 0) goto LAB_0421116c;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar3,0);
      } while ((uVar2 & 1) == 0);
      if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(long *)(lVar3 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    } while (((*(int *)(*(long *)(lVar3 + 0x38) + 0x10) == 0) ||
             (uVar2 = AnhPD_FoodOrder_FCustomerLine__get_IsFinishingOrder(lVar3), (uVar2 & 1) != 0))
            || (*(char *)(lVar3 + 0x42) != '\0'));
    if (*(long *)(lVar3 + 0x30) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar3 = *(long *)(*(long *)(lVar3 + 0x30) + 0x60);
  } while ((lVar3 == 0) ||
          (uVar2 = CakeOrder_InGame_CustomerSpawnData__get_IsBoss(lVar3,0), (uVar2 & 1) == 0));
LAB_0421116c:
  FUN_071bd288(&local_50,DAT_091a2c60);
  return uVar1 & 1;
}

