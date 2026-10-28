// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$TryGetInputsOf
// address: 0x40b84b4
// body: available
// range: 0x40b84b4-0x40b870f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b8708 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b870c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool AnhPD_FoodOrder_RecipeConfigSO__TryGetInputsOf
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  
  if ((DAT_09515f31 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b0588);
    FUN_03f5c2a4(&DAT_091af660);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917e018);
    FUN_03f5c2a4(&DAT_091eedb0);
    FUN_03f5c2a4(&DAT_09193958);
    DAT_09515f31 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09193958);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    puVar10 = (undefined8 *)(lVar4 + 0x10);
    *puVar10 = param_2;
    thunk_FUN_03f5d7b8(puVar10,param_2);
    if (param_4 != 0) {
      iVar1 = *(int *)(param_4 + 0x18);
      *(undefined4 *)(param_4 + 0x18) = 0;
      *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
      if (0 < iVar1) {
        System_Array__Clear(*(undefined8 *)(param_4 + 0x10),0,iVar1,0);
      }
      uVar5 = System_String__IsNullOrEmpty(*puVar10,0);
      if (((uVar5 & 1) == 0) &&
         (((lVar6 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(param_1,*puVar10), lVar6 == 0 ||
           (*(int *)(lVar6 + 0x10) != 1)) && (lVar6 = *(long *)(param_1 + 0x28), lVar6 != 0)))) {
        uVar7 = thunk_FUN_03f9944c(DAT_0917e018);
        FUN_05d78cfc(uVar7,lVar4,DAT_091eedb0,0);
        lVar4 = FUN_057e1328(lVar6,uVar7,DAT_091af660);
        if (lVar4 == 0) {
          return false;
        }
        lVar4 = AnhPD_FoodOrder_RecipeConfigSO__PickCombination(param_1,lVar4,param_3);
        if (lVar4 == 0) {
          return false;
        }
        lVar4 = *(long *)(lVar4 + 0x10);
        if (lVar4 != 0) {
          if (0 < (int)*(ulong *)(lVar4 + 0x18)) {
            uVar5 = 0;
            uVar8 = *(ulong *)(lVar4 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar6 = *(long *)(lVar4 + 0x20 + uVar5 * 8);
              if (((lVar6 != 0) && (*(int *)(lVar6 + 0x10) == 0)) &&
                 (uVar8 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar6 + 0x18),0),
                 lVar3 = DAT_091b0570, (uVar8 & 1) == 0)) {
                lVar9 = *(long *)(param_4 + 0x10);
                uVar7 = *(undefined8 *)(lVar6 + 0x18);
                *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                if (lVar9 == 0) goto LAB_040b8708;
                uVar2 = *(uint *)(param_4 + 0x18);
                if (uVar2 < *(uint *)(lVar9 + 0x18)) {
                  *(uint *)(param_4 + 0x18) = uVar2 + 1;
                  *(undefined8 *)(lVar9 + (long)(int)uVar2 * 8 + 0x20) = uVar7;
                  thunk_FUN_03f5d7b8();
                }
                else {
                  FUN_057e0c68(param_4,uVar7,
                               *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
                }
              }
              uVar8 = (ulong)*(uint *)(lVar4 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar4 + 0x18));
          }
          return 0 < *(int *)(param_4 + 0x18);
        }
      }
      return false;
    }
  }
LAB_040b8708:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

