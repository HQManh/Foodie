// rea decompile_all
// name: AnhPD.FoodOrder.ShelfMergeQueue$$CollectStalePlates
// address: 0x40d53c8
// body: available
// range: 0x40d53c8-0x40d55e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d55d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d55dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d55e0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_ShelfMergeQueue__CollectStalePlates
               (long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined8 local_88;
  undefined8 *puStack_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_60;
  
  if ((DAT_09516000 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a58a0);
    FUN_03f5c2a4(&DAT_091a58a8);
    FUN_03f5c2a4(&DAT_091a58b0);
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe20);
    FUN_03f5c2a4(&DAT_091afe28);
    FUN_03f5c2a4(&DAT_091b3a30);
    DAT_09516000 = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  if (param_3 != 0) {
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined4 *)(param_3 + 0x18) = 0;
    *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
    if (0 < iVar1) {
      System_Array__Clear(*(undefined8 *)(param_3 + 0x10),0,iVar1,0);
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      FUN_057e185c(&local_88,*(long *)(param_1 + 0x10),DAT_091b3a30);
      local_60 = local_78;
      uStack_68 = puStack_80;
      local_70 = local_88;
      local_88 = 0;
      puStack_80 = &local_70;
      while( true ) {
        uVar5 = FUN_071bd28c(&local_70,DAT_091a58a8);
        lVar4 = local_60;
        if ((uVar5 & 1) == 0) {
          FUN_071bd288(&local_70,DAT_091a58a0);
          return;
        }
        if (local_60 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(char *)(local_60 + 0x36) == '\0') break;
        fVar8 = (float)UnityEngine_Time__get_time(0);
        if (*(float *)(lVar4 + 0x28) + 3.0 < fVar8) goto LAB_040d5540;
LAB_040d5530:
        uVar5 = AnhPD_FoodOrder_ShelfMergeQueue__IsOnShelf(*(undefined8 *)(lVar4 + 0x10),param_2);
        if ((uVar5 & 1) == 0) {
LAB_040d5540:
          uVar5 = FUN_057e1004(param_3,*(undefined8 *)(lVar4 + 0x10),DAT_091afe28);
          lVar3 = DAT_091afe10;
          if ((uVar5 & 1) == 0) {
            lVar7 = *(long *)(param_3 + 0x10);
            uVar6 = *(undefined8 *)(lVar4 + 0x10);
            *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar2 = *(uint *)(param_3 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(param_3 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar6;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(param_3,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      uVar5 = AnhPD_FoodOrder_ShelfMergeQueue__IsAirborne(*(undefined8 *)(local_60 + 0x18));
      if (((uVar5 & 1) != 0) &&
         (uVar5 = AnhPD_FoodOrder_ShelfMergeQueue__IsOverdue(lVar4), (uVar5 & 1) == 0))
      goto LAB_040d5530;
      goto LAB_040d5540;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

