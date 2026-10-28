// rea decompile_all
// name: AnhPD.FoodOrder.MessyController$$BuildStuckReport
// address: 0x41d6784
// body: available
// range: 0x41d6784-0x41d6c63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41d6c60 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_MessyController__BuildStuckReport(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined1 local_48 [4];
  byte local_44 [4];
  
  if ((DAT_09516a7c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187830);
    FUN_03f5c2a4(&DAT_091b4c28);
    FUN_03f5c2a4(&DAT_091b4c30);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_0921fdb0);
    FUN_03f5c2a4(&DAT_091fad40);
    FUN_03f5c2a4(&DAT_091f8a38);
    FUN_03f5c2a4(&DAT_091f8b00);
    FUN_03f5c2a4(&DAT_0921fdf0);
    FUN_03f5c2a4(&DAT_091f8af8);
    FUN_03f5c2a4(&DAT_092174e8);
    FUN_03f5c2a4(&DAT_0921fde8);
    FUN_03f5c2a4(&DAT_091f8af0);
    FUN_03f5c2a4(&DAT_091f8ae8);
    FUN_03f5c2a4(&DAT_092182a0);
    DAT_09516a7c = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(plVar1,0);
  uVar8 = UnityEngine_Time__get_time(0);
  local_68 = CONCAT44(local_68._4_4_,uVar8);
  uVar2 = FUN_03f5c42c(DAT_09535450,&local_68);
  uVar3 = FUN_05a8f088(DAT_091b4c30);
  uVar6 = DAT_091fad40;
  uVar5 = DAT_091f8a38;
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_041d6c60;
    local_58 = *(undefined4 *)(**(long **)(lVar4 + 0xb8) + 0x50);
    local_68 = DAT_09187830;
    uStack_60 = 0xffffffffffffffff;
    uVar5 = System_Enum__ToString(&local_68,0);
  }
  uVar5 = System_String__Format(uVar6,uVar2,uVar5,0);
  uVar3 = FUN_05a8f088(DAT_091b4c30);
  uVar6 = DAT_092174e8;
  if ((uVar3 & 1) == 0) {
    local_44[0] = 1;
  }
  else {
    lVar4 = *(long *)(DAT_091b4c28 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_041d6c60;
    local_44[0] = CakeOrder_InGame_LevelBaseCakeOrderAbstract__get_IsAllowInteract
                            (**(long **)(lVar4 + 0xb8),0);
  }
  local_44[0] = local_44[0] & 1;
  uVar2 = FUN_03f5c42c(DAT_09535400,local_44);
  uVar6 = System_String__Format(uVar6,uVar2,0);
  local_48[0] = false;
  if (*(long *)(param_1 + 0x170) != 0) {
    local_48[0] = *(char *)(*(long *)(param_1 + 0x170) + 0x3d) != '\0';
  }
  uVar2 = FUN_03f5c42c(DAT_09535400,local_48);
  local_68 = CONCAT44(local_68._4_4_,*(undefined4 *)(param_1 + 0x118));
  uVar7 = FUN_03f5c42c(DAT_09535420,&local_68);
  uVar2 = System_String__Format(DAT_092182a0,uVar2,uVar7,0);
  uVar6 = System_String__Concat(uVar5,uVar6,uVar2,0);
  if (plVar1 != (long *)0x0) {
    System_Text_StringBuilder__AppendLine(plVar1,uVar6,0);
    System_Text_StringBuilder__AppendLine(plVar1,DAT_091f8af8,0);
    if (*(long *)(param_1 + 0x180) != 0) {
      uVar6 = AnhPD_FoodOrder_ServeService__BuildReport(*(long *)(param_1 + 0x180),0);
      System_Text_StringBuilder__AppendLine(plVar1,uVar6,0);
      System_Text_StringBuilder__AppendLine(plVar1,DAT_091f8b00,0);
      if (*(long *)(param_1 + 0x100) != 0) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x18);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
        uVar6 = DAT_0921fde8;
        if ((uVar3 & 1) != 0) {
          if ((*(long *)(param_1 + 0x100) == 0) ||
             (lVar4 = *(long *)(*(long *)(param_1 + 0x100) + 0x18), lVar4 == 0)) goto LAB_041d6c60;
          uVar6 = AnhPD_FoodOrder_ServeShelfController__BuildStateReport(lVar4,0);
        }
        System_Text_StringBuilder__AppendLine(plVar1,uVar6,0);
        System_Text_StringBuilder__AppendLine(plVar1,DAT_091f8af0,0);
        if (*(long *)(param_1 + 0x100) != 0) {
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x100) + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
          uVar6 = DAT_0921fdb0;
          if ((uVar3 & 1) != 0) {
            if ((*(long *)(param_1 + 0x100) == 0) ||
               (lVar4 = *(long *)(*(long *)(param_1 + 0x100) + 0x10), lVar4 == 0))
            goto LAB_041d6c60;
            uVar6 = AnhPD_FoodOrder_GridIngController__BuildAlertReport(lVar4,0);
          }
          System_Text_StringBuilder__AppendLine(plVar1,uVar6,0);
          System_Text_StringBuilder__AppendLine(plVar1,DAT_091f8ae8,0);
          if (*(long *)(param_1 + 0x108) != 0) {
            uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x108) + 0x20);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
            uVar6 = DAT_0921fdf0;
            if ((uVar3 & 1) != 0) {
              if ((*(long *)(param_1 + 0x108) == 0) ||
                 (lVar4 = *(long *)(*(long *)(param_1 + 0x108) + 0x20), lVar4 == 0))
              goto LAB_041d6c60;
              uVar6 = AnhPD_FoodOrder_IngredientSpawnerController__BuildBeltReport(lVar4,0);
            }
            System_Text_StringBuilder__AppendLine(plVar1,uVar6,0);
            (**(code **)(*plVar1 + 0x168))(plVar1,*(undefined8 *)(*plVar1 + 0x170));
            return;
          }
        }
      }
    }
  }
LAB_041d6c60:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

