// rea decompile_all
// name: AnhPD.FoodOrder.ServeShelfController$$CreatePlate
// address: 0x40c14d0
// body: available
// range: 0x40c14d0-0x40c17f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40c17f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_ServeShelfController__CreatePlate
               (undefined1 param_1 [16],float param_2,long param_3,int param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 *puVar7;
  long lVar8;
  long *plVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  undefined8 local_68;
  undefined8 local_58;
  
  if ((DAT_09515f98 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091afe10);
    FUN_03f5c2a4(&DAT_091afe50);
    FUN_03f5c2a4(&DAT_091b4c88);
    FUN_03f5c2a4(&DAT_091d4fb8);
    DAT_09515f98 = 1;
  }
  local_58 = 0;
  local_68 = 0;
  uVar2 = AnhPD_FoodOrder_ServeShelfController__get_HasFreeSlot(param_3);
  if ((((-1 < param_4) && ((uVar2 & 1) != 0)) &&
      (lVar3 = AnhPD_FoodOrder_ServeShelfController__get_Info(), lVar3 != 0)) &&
     (uVar2 = AnhPD_FoodOrder_LevelInfo__TryGetPlateVariant(lVar3,param_4,&local_58,&local_68,0),
     (uVar2 & 1) != 0)) {
    if (*(long *)(param_3 + 0x90) != 0) {
      iVar11 = *(int *)(*(long *)(param_3 + 0x90) + 0x18);
      fVar10 = (float)AnhPD_FoodOrder_ServeShelfController__get_Origin(param_3);
      fVar12 = *(float *)(param_3 + 0x70);
      fVar13 = *(float *)(param_3 + 0x74);
      lVar3 = *(long *)(DAT_091b4c88 + 0x20);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      lVar3 = *(long *)(*(long *)(lVar3 + 0xc0) + 0x10);
      if ((*(ushort *)(lVar3 + 0x135) & 1) == 0) {
        lVar3 = FUN_03f95a6c();
      }
      uVar5 = local_58;
      lVar3 = **(long **)(lVar3 + 0xb8);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      if (lVar3 != 0) {
        puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
        param_2 = param_2 + fVar13 * 0.5;
        lVar3 = FUN_04c37c04(fVar10 + ((float)iVar11 + 0.5) * fVar12,param_2,0,*puVar7,puVar7[1],
                             puVar7[2],puVar7[3],lVar3,uVar5,0,DAT_091d4fb8);
        if ((lVar3 != 0) && (lVar4 = UnityEngine_Component__get_gameObject(lVar3,0), lVar4 != 0)) {
          UnityEngine_GameObject__SetActive(lVar4,1,0);
          lVar4 = UnityEngine_Component__get_transform(lVar3,0);
          uVar5 = UnityEngine_Component__get_transform(param_3,0);
          if (lVar4 != 0) {
            UnityEngine_Transform__SetParent(lVar4,uVar5,0);
            *(int *)(lVar3 + 0xb4) = param_4;
            *(undefined8 *)(lVar3 + 0xb8) = local_68;
            *(undefined8 *)(lVar3 + 0xa0) = 0;
            *(undefined8 *)(lVar3 + 0x98) = 0;
            *(undefined8 *)(lVar3 + 0x90) = 0;
            *(undefined8 *)(lVar3 + 0x88) = 0;
            thunk_FUN_03f5d7b8();
            AnhPD_FoodOrder_ServePlate__HideUntilFirstItem(lVar3);
            lVar4 = DAT_091afe10;
            lVar6 = *(long *)(param_3 + 0x90);
            if (lVar6 != 0) {
              lVar8 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  plVar9 = (long *)(lVar8 + (long)(int)uVar1 * 8 + 0x20);
                  *plVar9 = lVar3;
                  thunk_FUN_03f5d7b8(plVar9,lVar3);
                }
                else {
                  FUN_057e0c68(lVar6,lVar3,
                               *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                if (*(long *)(param_3 + 0x90) != 0) {
                  iVar11 = *(int *)(*(long *)(param_3 + 0x90) + 0x18);
                  fVar10 = (float)AnhPD_FoodOrder_ServeShelfController__get_Origin(param_3);
                  AnhPD_FoodOrder_ServePlate__SetSlot
                            (fVar10 + *(float *)(param_3 + 0x70) * ((float)(iVar11 + -1) + 0.5),
                             param_2 + *(float *)(param_3 + 0x74) * 0.5,0,lVar3,1);
                  iVar11 = AnhPD_FoodOrder_ServeShelfController__get_LayoutSlots(param_3);
                  if (*(int *)(param_3 + 0x78) < iVar11) {
                    AnhPD_FoodOrder_ServeShelfController__Compact(param_3);
                  }
                  if (*(long *)(param_3 + 0xa8) != 0) {
                    AnhPD_FoodOrder_ShelfSnapshot__MarkDirty(*(long *)(param_3 + 0xa8),0);
                    if (*(long *)(param_3 + 0x90) != 0) {
                      AnhPD_FoodOrder_ServeShelfController__SetSlotFocus
                                (param_3,*(int *)(*(long *)(param_3 + 0x90) + 0x18) + -1,0);
                      return lVar3;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return 0;
}

