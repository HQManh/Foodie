// rea decompile_all
// name: CakeOrder.InGame.IngredientDropPositionCalculator$$Precalculate
// address: 0x42b16d0
// body: available
// range: 0x42b16d0-0x42b195f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42b18c8 to 0x42b1970 CakeOrder.InGame.GridSpawner$$PrecalculateGrid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b1934 to 0x42b251c CakeOrder.InGame.VoronoiSpawner$$PrecalculateCells (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42b1958 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42b195c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_InGame_IngredientDropPositionCalculator__Precalculate
               (long param_1,long param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  undefined4 uVar14;
  
  if ((DAT_095172b0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184ee8);
    FUN_03f5c2a4(&DAT_091b19d8);
    FUN_03f5c2a4(&DAT_091b19e0);
    FUN_03f5c2a4(&DAT_091b19e8);
    FUN_03f5c2a4(&DAT_09180a28);
    FUN_03f5c2a4(&DAT_0918ce28);
    DAT_095172b0 = 1;
  }
  *(long *)(param_1 + 0x88) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x88),param_2);
  *(long *)(param_1 + 0x90) = param_3;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x90),param_3);
  if ((param_4 == 0) || (*(int *)(param_1 + 0x60) = param_4, param_4 - 2U < 2)) {
    if (param_2 != 0) {
      lVar1 = FUN_03f5c394(DAT_09180a28,*(undefined4 *)(param_2 + 0x18));
      uVar4 = (ulong)*(uint *)(param_2 + 0x18);
      if (0 < (int)*(uint *)(param_2 + 0x18)) {
        uVar6 = 0;
        puVar7 = (undefined4 *)(lVar1 + 0x38);
        do {
          fVar10 = (float)(int)uVar4;
          fVar13 = (float)(int)uVar6 / fVar10;
          uVar8 = FUN_058ac314(param_2,uVar6 & 0xffffffff,DAT_091b19e8);
          uVar14 = *(undefined4 *)(param_1 + 0x7c);
          uVar12 = 0x3f800000;
          uVar11 = 0x3f333333;
          uVar9 = UnityEngine_Random__ColorHSV(fVar13,0);
          if (lVar1 == 0) goto LAB_042b1958;
          if (*(uint *)(lVar1 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          puVar7[-6] = uVar8;
          puVar7[-5] = fVar10;
          uVar6 = uVar6 + 1;
          puVar7[-4] = uVar14;
          puVar7[-3] = uVar9;
          puVar7[-2] = fVar13;
          puVar7[-1] = uVar11;
          *puVar7 = uVar12;
          uVar4 = (ulong)*(int *)(param_2 + 0x18);
          puVar7 = puVar7 + 7;
        } while ((long)uVar6 < (long)uVar4);
      }
      lVar2 = thunk_FUN_03f9944c(DAT_09184ee8);
      *(undefined4 *)(lVar2 + 0x10) = 0x3f000000;
      System_Object___ctor(lVar2,0);
      plVar5 = (long *)(param_1 + 0x80);
      *plVar5 = lVar2;
      *(undefined4 *)(lVar2 + 0x10) = *(undefined4 *)(param_1 + 0x78);
      thunk_FUN_03f5d7b8(plVar5,lVar2);
      if (param_3 != 0) {
        lVar2 = *plVar5;
        uVar3 = FUN_058ae204(param_3,DAT_091b19d8);
        if (lVar2 != 0) {
          CakeOrder_InGame_GridSpawner__PrecalculateGrid(lVar2,lVar1,uVar3);
          return;
        }
      }
    }
  }
  else {
    if (param_4 != 1) {
      return;
    }
    lVar1 = thunk_FUN_03f9944c(DAT_0918ce28);
    CakeOrder_InGame_VoronoiSpawner___ctor();
    if (lVar1 != 0) {
      plVar5 = (long *)(param_1 + 0x70);
      *plVar5 = lVar1;
      *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(param_1 + 100);
      thunk_FUN_03f5d7b8(plVar5,lVar1);
      if (*plVar5 != 0) {
        CakeOrder_InGame_VoronoiSpawner__PrecalculateCells(*plVar5,param_2,param_3);
        return;
      }
    }
  }
LAB_042b1958:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

