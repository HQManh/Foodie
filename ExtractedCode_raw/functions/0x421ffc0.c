// rea decompile_all
// name: AnhPD.FoodOrder.AdaptiveTwoColumnLayout$$Relayout
// address: 0x421ffc0
// body: available
// range: 0x421ffc0-0x42201f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42201f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_AdaptiveTwoColumnLayout__Relayout
               (float param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  ulong uVar9;
  int iVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  int local_9c;
  undefined8 local_98;
  undefined8 local_48;
  
  if ((DAT_09516d20 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091af770);
    FUN_03f5c2a4(&DAT_091ab408);
    FUN_03f5c2a4(&DAT_091af778);
    DAT_09516d20 = 1;
  }
  local_48 = 0;
  local_98 = 0;
  local_9c = 0;
  *(float *)(param_3 + 0x50) = param_1;
  *(undefined4 *)(param_3 + 0x54) = param_4;
  *(undefined1 *)(param_3 + 0x58) = 1;
  AnhPD_FoodOrder_AdaptiveTwoColumnLayout__CollectChildren(param_3);
  if (*(long *)(param_3 + 0x40) != 0) {
    iVar2 = *(int *)(*(long *)(param_3 + 0x40) + 0x18);
    AnhPD_FoodOrder_AdaptiveTwoColumnLayout__Measure
              (param_1,param_3,iVar2,param_4,(long)&local_48 + 4,&local_48,(long)&local_98 + 4,
               &local_98,&local_9c);
    fVar6 = local_98._4_4_;
    param_1 = *(float *)(param_3 + 0x30) * param_1;
    fVar8 = local_48._4_4_;
    if (local_48._4_4_ <= param_1) {
      param_1 = local_48._4_4_;
    }
    if (local_9c < 1) {
      fVar12 = 0.0;
    }
    else {
      fVar12 = local_48._4_4_ * (float)local_9c + local_98._4_4_ * (float)(local_9c + -1);
    }
    fVar12 = (float)AnhPD_FoodOrder_AdaptiveTwoColumnLayout__GetStartOffset(fVar12,param_3,0);
    if (0 < iVar2) {
      fVar13 = 0.0;
      iVar5 = (int)local_98;
      fVar7 = (float)local_48;
      iVar10 = 0;
      iVar11 = -1;
      do {
        iVar3 = 0;
        if (iVar5 != 0) {
          iVar3 = iVar10 / iVar5;
        }
        if (iVar3 != iVar11) {
          iVar11 = iVar3 * iVar5 + iVar5;
          iVar1 = iVar2;
          if (iVar11 <= iVar2) {
            iVar1 = iVar11;
          }
          AnhPD_FoodOrder_AdaptiveTwoColumnLayout__ColumnHeight
                    (fVar8,param_1,fVar7,param_3,iVar3 * iVar5,iVar1);
          fVar13 = (float)AnhPD_FoodOrder_AdaptiveTwoColumnLayout__GetStartOffset(param_3,1);
          iVar11 = iVar3;
        }
        if (*(long *)(param_3 + 0x48) == 0) goto LAB_042201f0;
        uVar9 = FUN_0571bde4(*(long *)(param_3 + 0x48),iVar10,DAT_091ab408);
        if (*(long *)(param_3 + 0x40) == 0) goto LAB_042201f0;
        fVar4 = param_1;
        if ((uVar9 & 1) == 0) {
          fVar4 = fVar8;
        }
        FUN_057e0998(*(long *)(param_3 + 0x40),iVar10,DAT_091af778);
        AnhPD_FoodOrder_AdaptiveTwoColumnLayout__SetChild
                  (fVar12 + (fVar8 + fVar6) * (float)iVar3 + (fVar8 - fVar4) * 0.5,fVar13,fVar4,
                   param_2);
        iVar10 = iVar10 + 1;
        fVar13 = fVar13 + fVar4 + fVar7;
      } while (iVar2 != iVar10);
    }
    return;
  }
LAB_042201f0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

