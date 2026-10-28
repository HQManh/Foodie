// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup.<>c__DisplayClass29_0$$<ReleaseOne>b__2
// address: 0x40e93f0
// body: available
// range: 0x40e93f0-0x40e95c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e94ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorPickup_<>c__DisplayClass29_0__<ReleaseOne>b__2(long param_1)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  if ((DAT_0951609d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091b22f0);
    FUN_03f5c2a4(&DAT_091b22f8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e69e8);
    DAT_0951609d = 1;
  }
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    iVar4 = *(int *)(param_1 + 0x20);
    do {
      if (*(int *)(lVar1 + 0x18) <= iVar4) {
        if (*(long *)(param_1 + 0x18) == 0) break;
        plVar2 = (long *)(*(long *)(param_1 + 0x18) + 0xa8);
        lVar1 = *plVar2;
        *plVar2 = 0;
        thunk_FUN_03f5d7b8(plVar2,0);
        if (lVar1 != 0) {
          uVar6 = **(undefined8 **)(DAT_091881a0 + 0xb8);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          if ((uVar3 & 1) != 0) {
            if (**(long **)(DAT_091881a0 + 0xb8) == 0) break;
            AnhPD_FoodOrder_MessyController__UnlockColorWithKey
                      (**(long **)(DAT_091881a0 + 0xb8),lVar1,0);
          }
        }
        lVar1 = *(long *)(param_1 + 0x58);
        lVar5 = *(long *)(param_1 + 0x18);
        if (lVar1 == 0) {
          lVar1 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(lVar1,param_1,DAT_091e69e8,0);
          *(long *)(param_1 + 0x58) = lVar1;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x58),lVar1);
        }
        if (lVar5 != 0) {
          AnhPD_FoodOrder_IngredientConveyorItem__PlayReleasePop(lVar5,lVar1);
          return;
        }
        break;
      }
      lVar5 = *(long *)(param_1 + 0x30);
      FUN_058e0cf8(&local_58,lVar1,iVar4,DAT_091b22f8);
      uVar6 = local_58;
      if (*(long *)(param_1 + 0x28) == 0) break;
      FUN_058e0cf8(&local_58,*(long *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x20),DAT_091b22f8)
      ;
      if (lVar5 == 0) break;
      AnhPD_FoodOrder_LevelInfo__ReleaseHome(lVar5,uVar6,local_50,uStack_48,0);
      lVar1 = *(long *)(param_1 + 0x28);
      iVar4 = *(int *)(param_1 + 0x20) + 1;
      *(int *)(param_1 + 0x20) = iVar4;
    } while (lVar1 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

