// rea decompile_all
// name: CakeOrder.Home.HomeBuildingFadeScale$$CollectBoughtPartSpots
// address: 0x4314b34
// body: available
// range: 0x4314b34-0x4314e5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4314e48 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4314e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4314e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4314e54 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4314e58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4314e5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_Home_HomeBuildingFadeScale__CollectBoughtPartSpots
               (undefined1 param_1 [16],float param_2,float param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a8;
  undefined8 *puStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  if ((DAT_095175df & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4580);
    FUN_03f5c2a4(&DAT_091a4588);
    FUN_03f5c2a4(&DAT_091a4590);
    FUN_03f5c2a4(&DAT_091a86d0);
    FUN_03f5c2a4(&DAT_091b1a40);
    FUN_03f5c2a4(&DAT_091b1a30);
    FUN_03f5c2a4(&DAT_091b1a68);
    FUN_03f5c2a4(&DAT_091b1a70);
    FUN_03f5c2a4(&DAT_0917d060);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095175df = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917d060);
  FUN_058b104c(lVar4,DAT_091b1a30);
  uVar9 = *(undefined8 *)(param_4 + 0xb0);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
  if ((uVar5 & 1) == 0) {
    uVar9 = *(undefined8 *)(param_4 + 0x58);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(long *)(param_4 + 0xa8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      FUN_053ec0b0(&local_a8,*(long *)(param_4 + 0xa8),DAT_091a86d0);
      uStack_88 = puStack_a0;
      local_90 = local_a8;
      puStack_a0 = &local_90;
      local_80 = local_98;
      local_a8 = 0;
LAB_04314cc0:
      uVar5 = FUN_071bb7b4(&local_90,DAT_091a4588);
      if ((uVar5 & 1) != 0) {
        if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        uVar9 = CakeOrder_DataSO_MapUpgradeConfig__GetPartById(*(long *)(param_4 + 0x58),local_80,0)
        ;
        fVar12 = param_2;
        fVar14 = param_3;
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
          fVar12 = param_2;
          fVar14 = param_3;
        }
        uVar5 = UnityEngine_Object__op_Equality(uVar9,0,0);
        param_2 = fVar12;
        param_3 = fVar14;
        if ((uVar5 & 1) == 0) {
          if (*(long *)(param_4 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar5 = CakeOrder_DataSO_MapUpgradeConfig__IsBasePart(*(long *)(param_4 + 0x58),uVar9,0);
          param_2 = fVar12;
          param_3 = fVar14;
          if ((uVar5 & 1) == 0) {
            if (*(long *)(param_4 + 0xb0) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            fVar10 = (float)CakeOrder_Home_HomeBuildingFadeScaleBaseVariant__GetItemWorldPosition
                                      (*(long *)(param_4 + 0xb0),uVar9);
            if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar6 = *(uint *)(lVar4 + 0x18);
            param_2 = fVar12;
            param_3 = fVar14;
            if (0 < (int)uVar6) {
              iVar8 = 1;
              do {
                fVar11 = (float)FUN_058b15e4(lVar4,iVar8 + -1,DAT_091b1a70);
                fVar13 = param_2 - fVar12;
                uVar6 = *(uint *)(lVar4 + 0x18);
                param_3 = param_3 - fVar14;
                param_2 = param_3 * param_3;
                bVar3 = param_2 + (fVar11 - fVar10) * (fVar11 - fVar10) + fVar13 * fVar13 < 0.01;
                bVar1 = iVar8 < (int)uVar6;
                iVar8 = iVar8 + 1;
              } while (!bVar3 && bVar1);
              if (bVar3) goto LAB_04314cc0;
            }
            lVar2 = DAT_091b1a40;
            lVar7 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (uVar6 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar6 * 0xc;
              *(uint *)(lVar4 + 0x18) = uVar6 + 1;
              *(float *)(lVar7 + 0x20) = fVar10;
              *(float *)(lVar7 + 0x24) = fVar12;
              *(float *)(lVar7 + 0x28) = fVar14;
            }
            else {
              FUN_058b1914(fVar10,lVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
              param_2 = fVar12;
              param_3 = fVar14;
            }
          }
        }
        goto LAB_04314cc0;
      }
      FUN_071bb7b0(&local_90,DAT_091a4580);
    }
  }
  return lVar4;
}

