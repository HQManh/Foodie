// rea decompile_all
// name: AnhPD.FoodOrder.AreaSplitHelper$$SpawnVerticalColliders
// address: 0x41dca14
// body: available
// range: 0x41dca14-0x41dcd8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41dcd0c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dcd10 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41dcd8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_AreaSplitHelper__SpawnVerticalColliders(long param_1,long param_2)

{
  int iVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  int local_84;
  
  if ((DAT_09516ac7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc58);
    FUN_03f5c2a4(&DAT_091cd5e8);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_0920b8c8);
    DAT_09516ac7 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar8 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09217938);
    System_ArgumentNullException___ctor(uVar8,uVar5,0);
  }
  else {
    iVar1 = *(int *)(param_2 + 0x20);
    if (0 < iVar1) {
      fVar12 = *(float *)(param_2 + 0x18);
      lVar3 = FUN_03f5c394(DAT_0917fc58,iVar1);
      uVar2 = UnityEngine_LayerMask__NameToLayer(*(undefined8 *)(param_1 + 0x30),0);
      lVar4 = UnityEngine_Component__get_transform(param_1,0);
      if (lVar4 != 0) {
        uVar11 = *(undefined4 *)(param_2 + 0x14);
        fVar10 = (float)UnityEngine_Transform__InverseTransformPoint
                                  (*(undefined4 *)(param_2 + 0x10),uVar11,0,lVar4,0);
        if (0 < *(int *)(param_2 + 0x20)) {
          local_84 = *(int *)(param_1 + 0x38);
          lVar4 = 0;
          uVar9 = 0;
          fVar12 = fVar12 / (float)iVar1;
          do {
            fVar13 = *(float *)(param_2 + 0x18);
            uVar5 = FUN_03f5c42c(DAT_09535420,&local_84);
            uVar5 = System_String__Format(DAT_0920b8c8,uVar5,0);
            lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
            UnityEngine_GameObject___ctor(lVar6,uVar5,0);
            if (lVar6 == 0) goto LAB_041dcd0c;
            lVar7 = UnityEngine_GameObject__get_transform(lVar6,0);
            uVar5 = UnityEngine_Component__get_transform(param_1,0);
            if (lVar7 == 0) goto LAB_041dcd0c;
            UnityEngine_Transform__SetParent(lVar7,uVar5,0,0);
            lVar7 = UnityEngine_GameObject__get_transform(lVar6,0);
            if (lVar7 == 0) goto LAB_041dcd0c;
            UnityEngine_Transform__set_localPosition
                      (fVar12 * ((float)(int)uVar9 + 0.5) + (fVar10 - fVar13 * 0.5),uVar11,0,lVar7,0
                      );
            UnityEngine_GameObject__set_layer(lVar6,uVar2,0);
            lVar7 = FUN_04b7c294(lVar6,DAT_091cd7c0);
            if (lVar7 == 0) goto LAB_041dcd0c;
            UnityEngine_Renderer__set_sortingOrder(lVar7,0xfffffce0,0);
            UnityEngine_Renderer__set_enabled(lVar7,0,0);
            lVar6 = FUN_04b7c294(lVar6,DAT_091cd5e8);
            if (lVar6 == 0) goto LAB_041dcd0c;
            UnityEngine_BoxCollider2D__set_size(fVar12,*(undefined4 *)(param_2 + 0x1c),lVar6,0);
            if (DAT_09515ce8 == '\0') {
              FUN_03f5c2a4(&DAT_0918cb68);
              DAT_09515ce8 = '\x01';
            }
            UnityEngine_Collider2D__set_offset
                      (**(undefined4 **)(DAT_0918cb68 + 0xb8),
                       (*(undefined4 **)(DAT_0918cb68 + 0xb8))[1],lVar6,0);
            if (lVar3 == 0) goto LAB_041dcd0c;
            if (*(uint *)(lVar3 + 0x18) <= uVar9) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            *(long *)(lVar3 + 0x20 + uVar9 * 8) = lVar6;
            thunk_FUN_03f5d7b8(lVar3 + 0x20 + lVar4,lVar6);
            iVar1 = *(int *)(param_2 + 0x20);
            uVar9 = uVar9 + 1;
            lVar4 = lVar4 + 8;
            local_84 = *(int *)(param_1 + 0x38) + 1;
            *(int *)(param_1 + 0x38) = local_84;
          } while ((long)uVar9 < (long)iVar1);
        }
        return lVar3;
      }
LAB_041dcd0c:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09220070);
    System_ArgumentOutOfRangeException___ctor(uVar8,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091bffc0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar5);
}

