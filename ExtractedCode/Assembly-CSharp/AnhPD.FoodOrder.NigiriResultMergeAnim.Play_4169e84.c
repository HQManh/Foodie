// rea decompile_all
// name: AnhPD.FoodOrder.NigiriResultMergeAnim$$Play
// address: 0x4169e84
// body: available
// range: 0x4169e84-0x416a0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416a098 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_NigiriResultMergeAnim__Play
               (long param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  if ((DAT_0951659a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184728);
    FUN_03f5c2a4(&DAT_091b1080);
    FUN_03f5c2a4(&DAT_091b1088);
    FUN_03f5c2a4(&DAT_091b10a0);
    DAT_0951659a = 1;
  }
  if (param_2 != (long *)0x0) {
    lVar4 = *param_2;
    if ((*(byte *)(DAT_09184728 + 0x130) <= *(byte *)(lVar4 + 0x130)) &&
       (*(long *)(*(long *)(lVar4 + 200) + (ulong)*(byte *)(DAT_09184728 + 0x130) * 8 + -8) ==
        DAT_09184728)) {
      lVar7 = *(long *)(param_1 + 0x30);
      (**(code **)(lVar4 + 0x218))(&local_58,param_2,*(undefined8 *)(lVar4 + 0x220));
      if (lVar7 == 0) goto LAB_0416a098;
      uStack_68 = uStack_50;
      local_70 = local_58;
      local_60 = local_48;
      AnhPD_FoodOrder_FlexibleNigiriDisplay__Display(lVar7,&local_70);
    }
  }
  lVar4 = *(long *)(param_1 + 0x60);
  if (lVar4 != 0) {
    iVar6 = *(int *)(lVar4 + 0x18);
    *(undefined4 *)(lVar4 + 0x18) = 0;
    *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
    if (0 < iVar6) {
      System_Array__Clear(*(undefined8 *)(lVar4 + 0x10),0,iVar6,0);
    }
    if (*(long *)(param_1 + 0x30) != 0) {
      iVar6 = 0;
      do {
        iVar2 = AnhPD_FoodOrder_FlexibleNigiriDisplay__get_SlotCount();
        if (iVar2 <= iVar6) {
          lVar4 = AnhPD_FoodOrder_NigiriResultMergeAnim__get_Drop(param_1);
          if ((*(long *)(param_1 + 0x60) != 0) &&
             (uVar3 = FUN_057e28a4(*(long *)(param_1 + 0x60),DAT_091b10a0), lVar4 != 0)) {
            AnhPD_FoodOrder_SushiDropPlayer__Play(lVar4,uVar3,param_4);
            return;
          }
          break;
        }
        if (*(long *)(param_1 + 0x30) == 0) break;
        lVar7 = *(long *)(param_1 + 0x60);
        uVar3 = AnhPD_FoodOrder_FlexibleNigiriDisplay__RiceOf(*(long *)(param_1 + 0x30),iVar6);
        lVar4 = DAT_091b1080;
        if (lVar7 == 0) break;
        lVar5 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
        if (*(long *)(param_1 + 0x30) == 0) break;
        lVar7 = *(long *)(param_1 + 0x60);
        uVar3 = AnhPD_FoodOrder_FlexibleNigiriDisplay__MainOf(*(long *)(param_1 + 0x30),iVar6);
        lVar4 = DAT_091b1080;
        if (lVar7 == 0) break;
        lVar5 = *(long *)(lVar7 + 0x10);
        *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
        if (lVar5 == 0) break;
        uVar1 = *(uint *)(lVar7 + 0x18);
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(uint *)(lVar7 + 0x18) = uVar1 + 1;
          *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8();
        }
        else {
          FUN_057e0c68(lVar7,uVar3,*(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                      );
        }
        iVar6 = iVar6 + 1;
      } while (*(long *)(param_1 + 0x30) != 0);
    }
  }
LAB_0416a098:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

