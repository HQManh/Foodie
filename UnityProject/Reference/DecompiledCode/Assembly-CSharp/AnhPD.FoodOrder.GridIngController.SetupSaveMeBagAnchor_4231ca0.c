// rea decompile_all
// name: AnhPD.FoodOrder.GridIngController$$SetupSaveMeBagAnchor
// address: 0x4231ca0
// body: available
// range: 0x4231ca0-0x4231e57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4231e50 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4231e54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_GridIngController__SetupSaveMeBagAnchor
               (undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if ((DAT_09516df4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c55e0);
    FUN_03f5c2a4(&DAT_091acf98);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516df4 = 1;
  }
  uVar8 = *(undefined8 *)(param_4 + 0x60);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Implicit(uVar8,0);
  if ((uVar5 & 1) == 0) {
    return;
  }
  if (*(long *)(param_4 + 0x60) != 0) {
    lVar6 = FUN_04a6a4f8(*(long *)(param_4 + 0x60),1,DAT_091c55e0);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar5 = UnityEngine_Object__op_Implicit(lVar6,0);
    if ((uVar5 & 1) == 0) {
      return;
    }
    if (*(long *)(param_4 + 0x30) != 0) {
      FUN_057e2274(*(long *)(param_4 + 0x30),lVar6,DAT_091acf98);
    }
    if (lVar6 != 0) {
      lVar6 = *(long *)(lVar6 + 0x20);
      if (lVar6 == 0) {
        return;
      }
      if (*(long *)(lVar6 + 0x18) == 0) {
        return;
      }
      lVar7 = AnhPD_FoodOrder_GridIngController__get_Layout(param_4);
      if (*(int *)(lVar6 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if ((lVar7 != 0) && (*(long *)(param_4 + 0x60) != 0)) {
        iVar1 = *(int *)(lVar7 + 0x20);
        iVar2 = *(int *)(lVar7 + 0x24);
        iVar3 = *(int *)(lVar6 + 0x20);
        lVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x60),0);
        if (lVar6 != 0) {
          fVar9 = (float)UnityEngine_Transform__get_position(lVar6,0);
          fVar11 = param_2;
          lVar6 = AnhPD_FoodOrder_GridIngController__get_Layout(param_4);
          if (lVar6 != 0) {
            uVar4 = 0;
            if (iVar1 != 0) {
              uVar4 = iVar3 / iVar1;
            }
            fVar10 = (float)AnhPD_FoodOrder_IngGridLayout__get_Origin();
            fVar12 = *(float *)(lVar6 + 0x18);
            fVar13 = *(float *)(lVar6 + 0x1c);
            *(undefined4 *)(param_4 + 0x134) = param_3;
            *(float *)(param_4 + 300) =
                 fVar9 - (fVar10 + ((float)(int)(iVar3 - uVar4 * iVar1) + 0.5) * fVar12);
            *(float *)(param_4 + 0x130) =
                 param_2 - (fVar11 + ((float)(int)(iVar2 + ~uVar4) + 0.5) * fVar13);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

