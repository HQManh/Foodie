// rea decompile_all
// name: AnhPD.FoodOrder.StationGridFeeder$$FindFeedableItem
// address: 0x411017c
// body: available
// range: 0x411017c-0x4110537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4110508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
AnhPD_FoodOrder_StationGridFeeder__FindFeedableItem
          (undefined1 param_1 [16],float param_2,long param_3,long param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  float fVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  if ((DAT_095161f5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ac690);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091ac6a0);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091ac6c8);
    FUN_03f5c2a4(&DAT_091b0610);
    FUN_03f5c2a4(&DAT_091ac6d0);
    DAT_095161f5 = 1;
  }
  lVar8 = *(long *)(param_3 + 0x20);
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  if (lVar8 != 0) {
    iVar12 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar12) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
    }
    lVar8 = *(long *)(param_3 + 0x28);
    if (lVar8 != 0) {
      iVar12 = *(int *)(lVar8 + 0x18);
      *(undefined4 *)(lVar8 + 0x18) = 0;
      *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
      if (0 < iVar12) {
        System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar12,0);
      }
      if (param_5 != 0) {
        if (0 < *(int *)(param_5 + 0x18)) {
          iVar12 = 0;
          do {
            lVar8 = FUN_057e0998(param_5,iVar12,DAT_091ac6d0);
            uVar3 = AnhPD_FoodOrder_StationGridFeeder__IsRestingOnGrid();
            if ((uVar3 & 1) != 0) {
              if ((lVar8 == 0) || (*(long *)(param_3 + 0x10) == 0)) goto LAB_04110508;
              lVar4 = AnhPD_FoodOrder_CookingStation__GetResultIdFor
                                (*(long *)(param_3 + 0x10),*(undefined8 *)(lVar8 + 0x78),0);
              if (lVar4 != 0) {
                if ((param_4 == 0) || (*(long *)(param_4 + 0x110) == 0)) goto LAB_04110508;
                uVar3 = AnhPD_FoodOrder_LevelInfo__CanAutoFeed
                                  (*(long *)(param_4 + 0x110),*(undefined8 *)(param_3 + 0x10),
                                   *(undefined8 *)(lVar8 + 0x78),0);
                lVar6 = DAT_091ac690;
                if ((uVar3 & 1) != 0) {
                  lVar5 = *(long *)(param_3 + 0x20);
                  if (lVar5 == 0) goto LAB_04110508;
                  lVar9 = *(long *)(lVar5 + 0x10);
                  *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                  if (lVar9 == 0) goto LAB_04110508;
                  uVar1 = *(uint *)(lVar5 + 0x18);
                  if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                    *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar8;
                    thunk_FUN_03f5d7b8(plVar10,lVar8);
                  }
                  else {
                    FUN_057e0c68(lVar5,lVar8,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar8 = DAT_091b0570;
                  lVar6 = *(long *)(param_3 + 0x28);
                  if (lVar6 == 0) goto LAB_04110508;
                  lVar5 = *(long *)(lVar6 + 0x10);
                  *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
                  if (lVar5 == 0) goto LAB_04110508;
                  uVar1 = *(uint *)(lVar6 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                    plVar10 = (long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                    *plVar10 = lVar4;
                    thunk_FUN_03f5d7b8(plVar10,lVar4);
                  }
                  else {
                    FUN_057e0c68(lVar6,lVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
            }
            iVar12 = iVar12 + 1;
          } while (iVar12 < *(int *)(param_5 + 0x18));
        }
        if (*(long *)(param_3 + 0x20) != 0) {
          if (*(int *)(*(long *)(param_3 + 0x20) + 0x18) == 0) {
            return 0;
          }
          AnhPD_FoodOrder_StationGridFeeder__CollectMissingPieces(&local_88,param_3,param_4,param_5)
          ;
          if ((*(long *)(param_3 + 0x10) != 0) &&
             (lVar8 = *(long *)(*(long *)(param_3 + 0x10) + 0x20), lVar8 != 0)) {
            fVar16 = (float)UnityEngine_Transform__get_position(lVar8,0);
            lVar8 = *(long *)(param_3 + 0x20);
            if (lVar8 != 0) {
              uVar13 = 0;
              iVar12 = 0;
              iVar15 = -1;
              fVar11 = 3.4028235e+38;
              fVar18 = param_2;
              do {
                if (*(int *)(lVar8 + 0x18) <= iVar12) {
                  return uVar13;
                }
                if ((param_4 == 0) || (*(long *)(param_3 + 0x28) == 0)) break;
                uVar14 = *(undefined8 *)(param_4 + 0x110);
                uVar7 = FUN_057e0998(*(long *)(param_3 + 0x28),iVar12,DAT_091b0610);
                uStack_98 = uStack_80;
                local_a0 = local_88;
                local_90 = local_78;
                iVar2 = AnhPD_FoodOrder_StationGridFeeder__RankOf(param_3,uVar14,uVar7,&local_a0);
                if (iVar15 <= iVar2) {
                  if (((*(long *)(param_3 + 0x20) == 0) ||
                      (lVar8 = FUN_057e0998(*(long *)(param_3 + 0x20),iVar12,DAT_091ac6d0),
                      lVar8 == 0)) || (lVar8 = AnhPD_FoodOrder_DragItemBase__get_Tf(), lVar8 == 0))
                  break;
                  fVar17 = (float)UnityEngine_Transform__get_position(lVar8,0);
                  fVar18 = (param_2 - fVar18) * (param_2 - fVar18);
                  fVar17 = (fVar16 - fVar17) * (fVar16 - fVar17) + fVar18;
                  if ((iVar2 != iVar15) || (fVar17 < fVar11)) {
                    if (*(long *)(param_3 + 0x20) == 0) break;
                    uVar13 = FUN_057e0998(*(long *)(param_3 + 0x20),iVar12,DAT_091ac6d0);
                    fVar11 = fVar17;
                    iVar15 = iVar2;
                  }
                }
                lVar8 = *(long *)(param_3 + 0x20);
                iVar12 = iVar12 + 1;
              } while (lVar8 != 0);
            }
          }
        }
      }
    }
  }
LAB_04110508:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

