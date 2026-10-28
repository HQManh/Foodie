// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$CollectInputsOf
// address: 0x40b81dc
// body: available
// range: 0x40b81dc-0x40b84b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40b8460 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40b848c to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40b84ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40b84b0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_RecipeConfigSO__CollectInputsOf
               (long param_1,undefined8 param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if ((DAT_09515f32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a86b8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091af660);
    FUN_03f5c2a4(&DAT_091b0608);
    FUN_03f5c2a4(&DAT_0917e018);
    FUN_03f5c2a4(&DAT_091eedb8);
    FUN_03f5c2a4(&DAT_09193960);
    DAT_09515f32 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_09193960);
  System_Object___ctor(lVar2,0);
  if (lVar2 == 0) goto LAB_040b84ac;
  puVar7 = (undefined8 *)(lVar2 + 0x10);
  *puVar7 = param_2;
  thunk_FUN_03f5d7b8(puVar7,param_2);
  lVar3 = AnhPD_FoodOrder_RecipeConfigSO__GetPieceConfig(param_1,*puVar7);
  if (((lVar3 == 0) || (*(int *)(lVar3 + 0x10) != 1)) &&
     (lVar3 = *(long *)(param_1 + 0x28), lVar3 != 0)) {
    uVar4 = thunk_FUN_03f9944c(DAT_0917e018);
    FUN_05d78cfc(uVar4,lVar2,DAT_091eedb8,0);
    lVar2 = FUN_057e1328(lVar3,uVar4,DAT_091af660);
    if (((lVar2 != 0) &&
        (lVar2 = AnhPD_FoodOrder_RecipeConfigSO__PickCombination(param_1,lVar2,param_3), lVar2 != 0)
        ) && (*(long *)(lVar2 + 0x10) != 0)) {
      if (*(long *)(param_1 + 0x98) == 0) goto LAB_040b84ac;
      uVar5 = FUN_053ec72c(*(long *)(param_1 + 0x98),*puVar7,DAT_091a86b8);
      if ((uVar5 & 1) != 0) {
        if ((param_4 == 0) || (lVar2 = *(long *)(lVar2 + 0x10), lVar2 == 0)) goto LAB_040b84ac;
        uVar1 = *(uint *)(param_4 + 0x18);
        if (0 < (int)*(ulong *)(lVar2 + 0x18)) {
          uVar5 = 0;
          uVar6 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
          do {
            if (uVar6 <= uVar5) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar3 = *(long *)(lVar2 + 0x20 + uVar5 * 8);
            if (((lVar3 != 0) && (*(int *)(lVar3 + 0x10) == 0)) &&
               (uVar6 = System_String__IsNullOrEmpty(*(undefined8 *)(lVar3 + 0x18),0),
               (uVar6 & 1) == 0)) {
              AnhPD_FoodOrder_RecipeConfigSO__CollectInputsOf
                        (param_1,*(undefined8 *)(lVar3 + 0x18),param_3,param_4);
            }
            uVar6 = (ulong)*(uint *)(lVar2 + 0x18);
            uVar5 = uVar5 + 1;
          } while ((long)uVar5 < (long)(int)*(uint *)(lVar2 + 0x18));
        }
        lVar2 = DAT_091b0570;
        if (*(uint *)(param_4 + 0x18) != uVar1) {
          return;
        }
        lVar3 = *(long *)(param_4 + 0x10);
        uVar4 = *puVar7;
        *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
        if (lVar3 == 0) goto LAB_040b84ac;
        if (*(uint *)(lVar3 + 0x18) <= uVar1) goto LAB_040b8464;
        lVar3 = lVar3 + (long)(int)uVar1 * 8;
        goto LAB_040b8440;
      }
    }
  }
  lVar2 = DAT_091b0570;
  if (param_4 != 0) {
    lVar3 = *(long *)(param_4 + 0x10);
    uVar4 = *puVar7;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    if (lVar3 != 0) {
      uVar1 = *(uint *)(param_4 + 0x18);
      if (*(uint *)(lVar3 + 0x18) <= uVar1) {
LAB_040b8464:
        FUN_057e0c68(param_4,uVar4,*(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                    );
        return;
      }
      lVar3 = lVar3 + (long)(int)uVar1 * 8;
LAB_040b8440:
      *(undefined8 *)(lVar3 + 0x20) = uVar4;
      *(uint *)(param_4 + 0x18) = uVar1 + 1;
      thunk_FUN_03f5d7b8();
      return;
    }
  }
LAB_040b84ac:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

