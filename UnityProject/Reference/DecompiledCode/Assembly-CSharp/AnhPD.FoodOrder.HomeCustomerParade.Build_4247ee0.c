// rea decompile_all
// name: AnhPD.FoodOrder.HomeCustomerParade$$Build
// address: 0x4247ee0
// body: available
// range: 0x4247ee0-0x42483b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42483b0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42483b4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_HomeCustomerParade__Build
               (undefined4 param_1,float param_2,float param_3,long param_4,undefined8 param_5,
               undefined8 param_6,int param_7)

{
  uint uVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined8 uVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float fVar15;
  
  if ((DAT_09516e8a & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_091cdaf0);
    FUN_03f5c2a4(&DAT_091cd8f0);
    FUN_03f5c2a4(&DAT_091cd8e8);
    FUN_03f5c2a4(&DAT_091cda60);
    FUN_03f5c2a4(&DAT_091cdbb8);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09191418);
    FUN_03f5c2a4(&DAT_091f7598);
    FUN_03f5c2a4(&DAT_09213d60);
    DAT_09516e8a = 1;
  }
  uVar3 = AnhPD_FoodOrder_HomeCustomerParade__get_Root(param_4);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  lVar4 = FUN_04c35338(param_5,uVar3,DAT_091d4bc0);
  if (lVar4 != 0) {
    lVar5 = FUN_04b7c324(lVar4,DAT_091cd8e8);
    lVar6 = UnityEngine_GameObject__get_transform(lVar4,0);
    if (lVar6 != 0) {
      fVar12 = (float)UnityEngine_Transform__get_localScale(lVar6,0);
      fVar14 = *(float *)(param_4 + 0x30);
      UnityEngine_Transform__set_localScale
                (fVar12 * fVar14,param_2 * fVar14,param_3 * fVar14,lVar6,0);
      uVar7 = UnityEngine_Object__op_Implicit(lVar5,0);
      if ((uVar7 & 1) == 0) {
        uVar3 = AnhPD_FoodOrder_CustomerAddress__For(param_6,0);
        uVar3 = System_String__Concat(DAT_09213d60,uVar3,DAT_091f7598,0);
        if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_091835d0);
        }
        UnityEngine_Debug__LogError(uVar3,param_4,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        UnityEngine_Object__Destroy(lVar4,0);
        return 0;
      }
      if (lVar5 != 0) {
        *(undefined1 *)(lVar5 + 0x50) = 1;
        AnhPD_FoodOrder_HomeCustomerParade__ApplyWeatherSkin(param_4,lVar4);
        uVar3 = FUN_04b7c324(lVar4,DAT_091cda60);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188ad0);
        }
        uVar7 = UnityEngine_Object__op_Implicit(uVar3,0);
        if ((uVar7 & 1) == 0) {
          uVar3 = FUN_04b7c294(lVar4,DAT_091cd7a0);
        }
        lVar6 = 0x70;
        if (param_7 != 1) {
          lVar6 = 0x68;
        }
        lVar9 = 0x74;
        if (param_7 != 1) {
          lVar9 = 0x6c;
        }
        uVar13 = UnityEngine_Random__Range
                           (*(undefined4 *)(param_4 + lVar6),*(undefined4 *)(param_4 + lVar9),0);
        uVar11 = 0;
        if (param_7 == 1) {
          uVar11 = FUN_04b7c324(lVar4,DAT_091cd8f0);
        }
        lVar6 = FUN_04b7c6fc(lVar4,1,DAT_091cdaf0);
        fVar14 = 1.0;
        fVar15 = *(float *)(param_4 + 0x58);
        fVar12 = (float)UnityEngine_Random__Range
                                  (1.0 - *(float *)(param_4 + 0x5c),*(float *)(param_4 + 0x5c) + 1.0
                                   ,0);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = UnityEngine_Object__op_Implicit(lVar6,0);
        if ((uVar7 & 1) != 0) {
          if (lVar6 == 0) goto LAB_042483b0;
          fVar14 = *(float *)(lVar6 + 0x20);
        }
        lVar6 = thunk_FUN_03f9944c(DAT_09191418);
        AnhPD_FoodOrder_HomeCustomerParade_Walker___ctor(lVar6,0);
        if (lVar6 != 0) {
          *(undefined8 *)(lVar6 + 0x38) = uVar11;
          *(int *)(lVar6 + 0x30) = param_7;
          *(undefined4 *)(lVar6 + 0x34) = uVar13;
          fVar14 = fVar15 * fVar12 * fVar14;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x38),uVar11);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          bVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
          fVar12 = *(float *)(param_4 + 0x7c);
          *(byte *)(lVar6 + 0x40) = bVar2 & 1;
          *(long *)(lVar6 + 0x10) = lVar5;
          *(float *)(lVar6 + 0x44) = fVar14 * fVar12;
          thunk_FUN_03f5d7b8((long *)(lVar6 + 0x10),lVar5);
          uVar8 = UnityEngine_GameObject__get_transform(lVar4,0);
          *(undefined8 *)(lVar6 + 0x18) = uVar8;
          thunk_FUN_03f5d7b8();
          *(undefined8 *)(lVar6 + 0x20) = uVar3;
          thunk_FUN_03f5d7b8((undefined8 *)(lVar6 + 0x20),uVar3);
          *(undefined4 *)(lVar6 + 0x4c) = param_1;
          *(undefined4 *)(lVar6 + 0x50) = uVar13;
          *(undefined4 *)(lVar6 + 0x54) = param_1;
          *(undefined4 *)(lVar6 + 0x58) = uVar13;
          *(float *)(lVar6 + 0x5c) = fVar14;
          uVar7 = AnhPD_FoodOrder_Customer__get_HasWalkAnim(lVar5,0);
          if ((uVar7 & 1) == 0) {
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            bVar2 = UnityEngine_Object__op_Implicit(uVar11,0);
            bVar2 = bVar2 ^ 1;
          }
          else {
            bVar2 = 0;
          }
          *(byte *)(lVar6 + 100) = bVar2 & 1;
          if (*(long *)(lVar6 + 0x18) != 0) {
            UnityEngine_Transform__set_localPosition(param_1,uVar13,0,*(long *)(lVar6 + 0x18),0);
            AnhPD_FoodOrder_HomeCustomerParade__AttachFootprint(param_4,lVar6);
            lVar4 = FUN_04b7ceb4(lVar4,1,DAT_091cdbb8);
            if (lVar4 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if ((int)uVar1 < 1) {
                return lVar6;
              }
              lVar5 = 0;
              while( true ) {
                if (uVar1 <= (uint)lVar5) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                lVar9 = *(long *)(lVar4 + 0x20 + lVar5 * 8);
                if (lVar9 == 0) break;
                plVar10 = (long *)(lVar9 + 0x28);
                *plVar10 = param_4;
                thunk_FUN_03f5d7b8(plVar10,param_4);
                uVar1 = *(uint *)(lVar4 + 0x18);
                lVar5 = lVar5 + 1;
                if ((int)uVar1 <= (int)lVar5) {
                  return lVar6;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_042483b0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

