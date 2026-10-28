// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$GetAllDisplayConfigInRecipe
// address: 0x40b980c
// body: available
// range: 0x40b980c-0x40b9ba3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b9b84 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9b9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b9ba0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_RecipeConfigSO__GetAllDisplayConfigInRecipe
               (long param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  
  if ((DAT_09515f40 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a3f50);
    FUN_03f5c2a4(&DAT_091a3f58);
    FUN_03f5c2a4(&DAT_091a3f60);
    FUN_03f5c2a4(&DAT_091aa760);
    FUN_03f5c2a4(&DAT_091af610);
    FUN_03f5c2a4(&DAT_091af660);
    FUN_03f5c2a4(&DAT_091af628);
    FUN_03f5c2a4(&DAT_091aa758);
    FUN_03f5c2a4(&DAT_091af608);
    FUN_03f5c2a4(&DAT_0917ba90);
    FUN_03f5c2a4(&DAT_0917ca18);
    FUN_03f5c2a4(&DAT_0917e018);
    FUN_03f5c2a4(&DAT_091eedc0);
    FUN_03f5c2a4(&DAT_09193968);
    DAT_09515f40 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_09193968);
  System_Object___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x10) = param_2;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar2 + 0x10),param_2);
    lVar3 = thunk_FUN_03f9944c(DAT_0917ba90);
    FUN_057e0400(lVar3,DAT_091aa758);
    lVar11 = *(long *)(param_1 + 0x28);
    uVar4 = thunk_FUN_03f9944c(DAT_0917e018);
    FUN_05d78cfc(uVar4,lVar2,DAT_091eedc0,0);
    if (lVar11 != 0) {
      lVar2 = FUN_057e1328(lVar11,uVar4,DAT_091af660);
      if (lVar2 != 0) {
        if (*(long *)(lVar2 + 0x18) == 0) goto LAB_040b9ba0;
        FUN_057e185c(&local_98,*(long *)(lVar2 + 0x18),DAT_091af628);
        local_70 = local_88;
        uStack_78 = puStack_90;
        local_80 = local_98;
        local_98 = 0;
        puStack_90 = &local_80;
        while (uVar5 = FUN_071bd28c(&local_80,DAT_091a3f58), lVar2 = local_70, (uVar5 & 1) != 0) {
          lVar11 = thunk_FUN_03f9944c(DAT_0917ca18);
          FUN_057e0400(lVar11,DAT_091af608);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar2 = *(long *)(lVar2 + 0x10);
          if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
            uVar5 = 0;
            uVar8 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
            do {
              if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar9 = *(long *)(lVar2 + 0x20 + uVar5 * 8);
              if ((param_3 & 1) == 0) {
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                if (*(int *)(lVar9 + 0x10) != 1) goto LAB_040b9a6c;
              }
              else {
                if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
LAB_040b9a6c:
                lVar6 = AnhPD_FoodOrder_RecipeConfigSO__GetRecipeComponent
                                  (param_1,*(undefined8 *)(lVar9 + 0x18));
                lVar9 = DAT_091af610;
                if (lVar6 != 0) {
                  if (lVar11 == 0) {
LAB_040b9b88:
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  lVar10 = *(long *)(lVar11 + 0x10);
                  uVar4 = *(undefined8 *)(lVar6 + 0x18);
                  *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
                  if (lVar10 == 0) goto LAB_040b9b88;
                  uVar1 = *(uint *)(lVar11 + 0x18);
                  if (uVar1 < *(uint *)(lVar10 + 0x18)) {
                    *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                    *(undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                    thunk_FUN_03f5d7b8();
                  }
                  else {
                    FUN_057e0c68(lVar11,uVar4,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
              }
              uVar8 = (ulong)*(uint *)(lVar2 + 0x18);
              uVar5 = uVar5 + 1;
            } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
          }
          lVar2 = DAT_091aa760;
          if (lVar3 == 0) {
LAB_040b9b94:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar9 == 0) goto LAB_040b9b94;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar9 + 0x18)) {
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            plVar7 = (long *)(lVar9 + (long)(int)uVar1 * 8 + 0x20);
            *plVar7 = lVar11;
            thunk_FUN_03f5d7b8(plVar7,lVar11);
          }
          else {
            FUN_057e0c68(lVar3,lVar11,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
        }
        FUN_071bd288(&local_80,DAT_091a3f50);
      }
      return lVar3;
    }
  }
LAB_040b9ba0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

