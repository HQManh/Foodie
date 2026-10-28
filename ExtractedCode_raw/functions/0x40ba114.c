// rea decompile_all
// name: AnhPD.FoodOrder.RecipeConfigSO$$GetDisplayConfig
// address: 0x40ba114
// body: available
// range: 0x40ba114-0x40ba427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40ba40c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba410 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba414 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba418 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba41c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba420 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40ba424 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_RecipeConfigSO__GetDisplayConfig(undefined8 param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_98;
  undefined8 *puStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09515f44 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091a4598);
    FUN_03f5c2a4(&DAT_091a45a0);
    FUN_03f5c2a4(&DAT_091a45a8);
    FUN_03f5c2a4(&DAT_091af610);
    FUN_03f5c2a4(&DAT_091b05a8);
    FUN_03f5c2a4(&DAT_091af608);
    FUN_03f5c2a4(&DAT_0917ca18);
    FUN_03f5c2a4(&DAT_091805f8);
    FUN_03f5c2a4(&DAT_091f7320);
    FUN_03f5c2a4(&DAT_091f7638);
    FUN_03f5c2a4(&DAT_092141b8);
    DAT_09515f44 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar2 = thunk_FUN_03f9944c(DAT_0917ca18);
  FUN_057e0400(lVar2,DAT_091af608);
  if (param_2 != 0) {
    FUN_057e185c(&local_98,param_2,DAT_091b05a8);
    local_70 = local_88;
    uStack_78 = puStack_90;
    local_80 = local_98;
    local_98 = 0;
    puStack_90 = &local_80;
LAB_040ba274:
    uVar3 = FUN_071bd28c(&local_80,DAT_091a45a0);
    uVar6 = local_70;
    if ((uVar3 & 1) != 0) {
      lVar4 = AnhPD_FoodOrder_RecipeConfigSO__GetRecipeComponent(param_1,local_70);
      lVar5 = DAT_091af610;
      if (lVar4 != 0) {
        if (lVar2 != 0) {
          lVar7 = *(long *)(lVar2 + 0x10);
          uVar6 = *(undefined8 *)(lVar4 + 0x18);
          *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
          if (lVar7 != 0) {
            uVar1 = *(uint *)(lVar2 + 0x18);
            if (uVar1 < *(uint *)(lVar7 + 0x18)) {
              *(uint *)(lVar2 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar7 + (long)(int)uVar1 * 8 + 0x20) = uVar6;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar2,uVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            goto LAB_040ba274;
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar5 = FUN_03f5c394(DAT_091805f8,5);
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(int *)(lVar5 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x20) = DAT_092141b8;
      thunk_FUN_03f5d7b8();
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x28) = uVar6;
      thunk_FUN_03f5d7b8((undefined8 *)(lVar5 + 0x28),uVar6);
      if (*(uint *)(lVar5 + 0x18) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x30) = DAT_091f7638;
      thunk_FUN_03f5d7b8();
      uVar6 = UnityEngine_Object__GetName(param_1,0);
      if ((*(uint *)(lVar5 + 0x18) & 0xfffffffc) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x38) = uVar6;
      thunk_FUN_03f5d7b8();
      if (*(uint *)(lVar5 + 0x18) < 5) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      *(undefined8 *)(lVar5 + 0x40) = DAT_091f7320;
      thunk_FUN_03f5d7b8();
      uVar6 = System_String__Concat(lVar5,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Debug__LogError(uVar6,param_1,0);
      goto LAB_040ba274;
    }
    FUN_071bd288(&local_80,DAT_091a4598);
  }
  return lVar2;
}

