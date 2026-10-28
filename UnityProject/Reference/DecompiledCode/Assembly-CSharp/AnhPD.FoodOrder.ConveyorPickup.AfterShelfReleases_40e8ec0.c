// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$AfterShelfReleases
// address: 0x40e8ec0
// body: available
// range: 0x40e8ec0-0x40e91d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e91d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ConveyorPickup__AfterShelfReleases(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 local_78;
  undefined8 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  
  if ((DAT_09516099 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091a2a50);
    FUN_03f5c2a4(&DAT_091a2a58);
    FUN_03f5c2a4(&DAT_091a2a60);
    FUN_03f5c2a4(&DAT_091ac6b0);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091e69f8);
    FUN_03f5c2a4(&DAT_0918ee18);
    DAT_09516099 = 1;
  }
  local_60 = 0;
  puStack_58 = (undefined8 *)0x0;
  local_50 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918ee18);
  System_Object___ctor(lVar1,0);
  if (lVar1 == 0) goto LAB_040e91d0;
  plVar5 = (long *)(lVar1 + 0x18);
  *plVar5 = param_2;
  thunk_FUN_03f5d7b8(plVar5,param_2);
  uVar3 = **(undefined8 **)(DAT_091881a0 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(uVar3,0);
  lVar4 = 0;
  if ((uVar2 & 1) != 0) {
    if (**(long **)(DAT_091881a0 + 0xb8) == 0) goto LAB_040e91d0;
    lVar4 = AnhPD_FoodOrder_MessyController__get_ServeShelf(**(long **)(DAT_091881a0 + 0xb8),0);
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
  if ((uVar2 & 1) != 0) {
    if (lVar4 == 0) goto LAB_040e91d0;
    if (*(char *)(lVar4 + 0x8c) != '\0') {
      *(undefined4 *)(lVar1 + 0x10) = 0;
      if (param_1 != 0) {
        FUN_057e185c(&local_78,param_1,DAT_091ac6b0);
        puStack_58 = puStack_70;
        local_60 = local_78;
        local_50 = local_68;
        local_78 = 0;
        puStack_70 = &local_60;
        while (uVar2 = FUN_071bd28c(&local_60,DAT_091a2a58), (uVar2 & 1) != 0) {
          uVar2 = AnhPD_FoodOrder_ServeShelfController__IsHeldAtSource(lVar4,local_50,0);
          if ((uVar2 & 1) != 0) {
            *(int *)(lVar1 + 0x10) = *(int *)(lVar1 + 0x10) + 1;
          }
        }
        FUN_071bd288(&local_60,DAT_091a2a50);
        if (*(int *)(lVar1 + 0x10) == 0) {
          lVar1 = *plVar5;
          if (lVar1 == 0) goto LAB_040e91d0;
          (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
        }
        else {
          FUN_057e185c(&local_78,param_1,DAT_091ac6b0);
          puStack_58 = puStack_70;
          local_60 = local_78;
          local_50 = local_68;
          local_78 = 0;
          puStack_70 = &local_60;
          while (uVar2 = FUN_071bd28c(&local_60,DAT_091a2a58), uVar3 = local_50, (uVar2 & 1) != 0) {
            uVar2 = AnhPD_FoodOrder_ServeShelfController__IsHeldAtSource(lVar4,local_50,0);
            if ((uVar2 & 1) != 0) {
              lVar6 = *(long *)(lVar1 + 0x20);
              if (lVar6 == 0) {
                lVar6 = thunk_FUN_03f9944c(DAT_09180e78);
                System_Action___ctor(lVar6,lVar1,DAT_091e69f8,0);
                *(long *)(lVar1 + 0x20) = lVar6;
                thunk_FUN_03f5d7b8(lVar1 + 0x20,lVar6);
              }
              AnhPD_FoodOrder_ServeShelfController__WhenSourceFreed(lVar4,uVar3,lVar6,0);
            }
          }
          FUN_071bd288(&local_60,DAT_091a2a50);
        }
        return;
      }
      goto LAB_040e91d0;
    }
  }
  lVar1 = *plVar5;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x040e90bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),*(undefined8 *)(lVar1 + 0x28));
    return;
  }
LAB_040e91d0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

