// rea decompile_all
// name: AnhPD.FoodOrder.IngredientSpawnerController$$SyncBeltSegments
// address: 0x40f0eec
// body: available
// range: 0x40f0eec-0x40f1157 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40f1138 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IngredientSpawnerController__SyncBeltSegments(long param_1,uint param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  float fVar10;
  
  if ((DAT_095160e9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091abe30);
    FUN_03f5c2a4(&DAT_091b30d0);
    FUN_03f5c2a4(&DAT_091b30d8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095160e9 = 1;
  }
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar4 & 1) == 0) {
    return;
  }
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  AnhPD_FoodOrder_IngredientSpawnerController__EnsureBeltSegments(param_1,param_2);
  AnhPD_FoodOrder_IngredientSpawnerController__BindBeltSegments(param_1);
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    uVar7 = 0;
    do {
      if (*(int *)(lVar5 + 0x18) <= (int)uVar7) {
        return;
      }
      lVar5 = FUN_057e0998(lVar5,uVar7,DAT_091b30d8);
      if (lVar5 == 0) break;
      if (*(long *)(lVar5 + 0x30) == 0) {
        bVar9 = *(char *)(lVar5 + 0x38) != '\0' || uVar7 < param_2;
      }
      else {
        bVar9 = true;
      }
      if ((*(long *)(lVar5 + 0x10) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x10),0), lVar6 == 0))
      break;
      bVar1 = UnityEngine_GameObject__get_activeSelf(lVar6,0);
      if (bVar9 != (bool)(bVar1 & 1)) {
        if ((*(long *)(lVar5 + 0x10) == 0) ||
           (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(lVar5 + 0x10),0), lVar6 == 0))
        break;
        UnityEngine_GameObject__SetActive(lVar6,bVar9,0);
      }
      if (bVar9 != false) {
        if (*(long *)(lVar5 + 0x30) == 0) {
          if ((uVar7 < param_2) && (*(char *)(lVar5 + 0x38) == '\0')) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              uVar8 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x10),0);
              fVar10 = ((float)(int)uVar7 - (float)(int)(param_2 - 1) / 2.0) *
                       (*(float *)(param_1 + 0xa8) + *(float *)(param_1 + 0xac));
              goto LAB_040f10b4;
            }
            break;
          }
        }
        else {
          if (*(long *)(lVar5 + 0x10) == 0) break;
          uVar8 = UnityEngine_Component__get_transform(*(long *)(lVar5 + 0x10),0);
          if (*(long *)(lVar5 + 0x30) == 0) break;
          fVar10 = *(float *)(*(long *)(lVar5 + 0x30) + 0x18);
LAB_040f10b4:
          AnhPD_FoodOrder_IngredientSpawnerController__MoveSegmentX(fVar10,uVar8,uVar8);
        }
        if (*(int *)(DAT_091814b0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Application__get_isPlaying(0);
        if (((uVar4 & 1) == 0) || (*(long *)(lVar5 + 0x30) == 0)) {
          uVar3 = 0;
        }
        else {
          if (*(long *)(param_1 + 0x198) == 0) break;
          lVar6 = *(long *)(param_1 + 0x1a0);
          uVar2 = FUN_057e1a08(*(long *)(param_1 + 0x198),*(long *)(lVar5 + 0x30),DAT_091abe30);
          if (lVar6 == 0) break;
          uVar3 = AnhPD_FoodOrder_ConveyorGrid__IsColumnMoving(lVar6,uVar2,0);
        }
        UnityEngine_Time__get_deltaTime(0);
        AnhPD_FoodOrder_IngredientSpawnerController__AdvanceSegmentScroll(param_1,lVar5,uVar3 & 1);
      }
      lVar5 = *(long *)(param_1 + 0x48);
      uVar7 = uVar7 + 1;
    } while (lVar5 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

